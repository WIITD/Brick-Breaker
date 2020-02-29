SuperStrict

Include "BBdata.bmx"

'----------------------------------------Data----------------------------------------
Const PLAY:Int=1
Const PAUSE:Int=2
Const START:Int=3
Const WAIT:Int=4
Const GAMEOVER:Int=0
Const MENU:Int=6
Const NEXTGAME:Int=5
Const REMENU:Int=42
Global HARDMODE:Int=False
Global GameState:String=MENU
Global HEALTH:Int=5
Const PLAYER_LAYER:Int=1
Const DZ_LAYER:Int=2
Global GameObjectList:TList=CreateList()
Global Width:Int=1280
Global Height:Int=720
Global puddlex:Int=width/2
Global puddley:Int=500
Global brickx:Int=4
Global brick:String="brick1.png"
Global player:String="player1.png"
Global ball:String="ball1.png"
Global randballspawn:Int
Global brickrand:Int=Rand(1,3)
Global playerrand:Int=Rand(1,3)
Global ballrand:Int=Rand(1,3)
Global SCORE:Int=1
Global Points:Int=0
'-----------------------------------loading random brick sprite
Function LoadBrick()
	If brickrand=1
		brick="brick1.png"
	EndIf
	
	If brickrand=2
		brick="brick2.png"
	EndIf
	
	If brickrand=3
		brick="brick3.png"
	EndIf
EndFunction
LoadBrick()
'-----------------------------------loading random player/puddle sprite
Function LoadPlayer()
	If playerrand=1
		player="player1.png"
	EndIf
	
	If playerrand=2
		player="player2.png"
	EndIf
	
	If playerrand=3
		player="player3.png"
	EndIf
EndFunction
LoadPlayer()
'----------------------------------loading random ball sprite
Function LoadBall()
	If ballrand=1
		ball="ball1.png"
	EndIf
	
	If ballrand=2
		ball="ball2.png"
	EndIf
	
	If ballrand=3
		ball="ball3.png"
	EndIf
EndFunction
LoadBall()
'--------------------------------	
	
'setup
AppTitle="Brick Breaker"
Graphics Width,Height
AutoMidHandle True
HideMouse()

Global Font:TImageFont=LoadImageFont("Data\Font\Pixel Bug.otf",24,SMOOTHFONT)

'loading sounds
Global PCS:TSound=LoadSound("Data\Sounds\PCS.wav",False)
Global BCS:TSound=LoadSound("Data\Sounds\BCS.wav",False)
Global PUS:TSound=LoadSound("Data\Sounds\PUS.wav",False)
Global WINS:TSound=LoadSound("Data\Sounds\WINS.wav",False)
Global BEX:TSound=LoadSound("Data\Sounds\BEX.wav",False)
Global GOS:TSound=LoadSound("Data\Sounds\GOS.wav",False)

'loading images
TBall.Create(LoadImage("Data\Ball\"+ball),puddlex,puddley)
TPaddle.Create(LoadImage("Data\Player\"+player),puddlex,puddley)
TDeadzone.Create(LoadImage("Data\Player\deadzone.png"),650,716)
Global Bricks:TImage=LoadAnimImage("Data\Brick\"+brick,32,20,0,1)
CreateBricks()

'----------------------------------------MAIN LOOP----------------------------------------
Repeat
	SetColor 255,255,255
	Cls
	If GameState=PLAY Or GameState=PAUSE
		SetColor(0,255,0)
		DrawText("HEALTH: "+HEALTH,(Width/2)-100,6)
		SetColor(255,255,255)
	EndIf
	UpdateGameState()
	
	For Local o:TGameObject=EachIn GameObjectList
		o.DrawSelf()
		o.UpdateSelf()
	Next
	Flip(0) 
Forever


'----------------------------------------TYPES----------------------------------------
Type TGameObject

    Field X:Int
    Field Y:Int
    Field XSpeed:Float=6.0
    Field YSpeed:Float=-6.0
    Field Image:TImage
    Field XScale:Float=0.1
    Field YScale:Float=0.1
	Field Rotation:Int=0

    Method DrawSelf()
		SetScale XScale, YScale
        SetRotation Rotation
        DrawImage Image,X,Y
    End Method     

     Method UpdateSelf() Abstract

End Type 

'--------------------Ball--------------------
Type TBall Extends TGameObject
	
    Function Create:TBall(Image:TImage,xstart:Int,ystart:Int)
        Local B:TBall=New TBall
		CreateObject(B,Image,xstart,ystart)
        Return B
    End Function

    Method UpdateSelf()
		If GameState<>PLAY Then Return
		
		If HARDMODE=True
			X :+ XSpeed *2
			Y :+ YSpeed *2
		Else
			X :+ XSpeed
			Y :+ YSpeed *1.2
		EndIf
       
        If X>Width-20 Or X<0 Then 
		   XSpeed=-XSpeed        
        EndIf
        If Y>Height Or Y<0 Then  
           YSpeed=-YSpeed          
		EndIf
		
		If X>1265 Then
			X = 1255
		EndIf
		
		If X<-5 Then
			X = 5
		EndIf
				
		 CheckCollision()
   
   End Method

	Method CheckCollision()
        SetScale XScale+1, YScale+1
        SetRotation Rotation
        If CollideImage(Image,X,Y,0,PLAYER_LAYER,1)
			PlaySound PCS
			Y=645
            YSpeed=-YSpeed
        EndIf

		For Local b:TBricks=EachIn GameObjectList
            If ImagesCollide2(Image,X,Y,0,Rotation,XScale,YScale, b.Image, b.X, b.Y, 0, 0, 1.0, 1.0)
               ListRemove(GameObjectList,b)
				PlaySound BCS
				randballspawn=Rand(0,100)
				YSpeed=-YSpeed
				
				If HARDMODE=True
					Points=Points+5
				Else
					Points=Points+1
				EndIf	
				
			 EndIf
        Next
		
		For Local dz:TDeadzone=EachIn GameObjectList
			If ImagesCollide2(Image,X,Y,0,Rotation,XScale,YScale, dz.Image, dz.X, dz.Y, 0, 0, 1.0, 0.1)
				HEALTH=HEALTH-1
				ListRemove(GameObjectList,Self)
				PlaySound BEX
				CreateBall()
			EndIf
		Next
		
	EndMethod
	
	
	
End Type

'--------------------Puddle--------------------
Type TPaddle Extends TGameObject

    Function Create:TPaddle(Image:TImage,xstart:Int,ystart:Int)
        Local B:TPaddle=New TPaddle
        CreateObject(B,Image,xstart,ystart)
        B.XSpeed :* 3  
		B.YSpeed :* 3
        Return B
    End Function

    Method UpdateSelf()
        
        If KeyDown(KEY_Left) X :- XSpeed+3
        If KeyDown(KEY_Right) X :+ XSpeed+3
		Y = height-60  
      
        If X<ImageWidth(Image)/2 X=ImageWidth(Image)/2
        If X>(Width-ImageWidth(Image)/2) X=(Width-ImageWidth(Image)/2) 

		ResetCollisions(PLAYER_LAYER)
        CollideImage(Image,X,Y,0,0,PLAYER_LAYER,Self)          
        
   End Method
    
End Type

'--------------------Brick--------------------
Type TBricks Extends TGameObject

    Function Create:TBricks(Image:TImage,xstart:Int,ystart:Int)
        Local B:TBricks=New TBricks
        CreateObject(B,Image,xstart,ystart)
        Return B
    End Function

	Method UpdateSelf()
    End Method
	
EndType

'--------------------BonusBall--------------------
Type TBonusBall Extends TGameObject
		
    Function Create:TBonusBall(Image:TImage,xstart:Int,ystart:Int)
        Local BB:TBonusBall=New TBonusBall
        CreateObject(BB,Image,xstart,ystart)
        Return BB
    End Function

    Method UpdateSelf()
		If GameState<>PLAY Then Return

        X :+ XSpeed  
		Y :+ YSpeed  
       
        If x>Width Or x<0 Then 
           XSpeed=-XSpeed         
        EndIf
        If Y>Height Or Y<0 Then  
           YSpeed=-YSpeed          
        EndIf
		
		 CheckCollision()
   
   End Method

	Method CheckCollision()
        SetScale XScale, YScale
        SetRotation Rotation
        If CollideImage(Image,X,Y,0,PLAYER_LAYER,1)
			PlaySound PCS
           YSpeed=-YSpeed
        EndIf

		For Local b:TBricks=EachIn GameObjectList
            If ImagesCollide2(Image,X,Y,0,Rotation,XScale,YScale, b.Image, b.X, b.Y, 0, 0, 1.0, 1.0)
               ListRemove(GameObjectList,b)
				PlaySound BCS
				YSpeed=-YSpeed
				
				If HARDMODE=True 
					Points=Points+Rand(1,5)
				Else
					Points=Points+Rand(1,2)
				EndIf
				
			 	Exit
			 EndIf
        Next
		
		For Local dz:TDeadzone=EachIn GameObjectList
			If ImagesCollide2(Image,X,Y,0,Rotation,XScale,YScale, dz.Image, dz.X, dz.Y, 0, 0, 1.0, 0.1)
				ListRemove(GameObjectList,Self)
			EndIf
		Next
		
	EndMethod
		
End Type

'--------------------DeadZone--------------------
Type TDeadzone Extends TGameObject

	Function Create:TDeadzone(Image:TImage,xstart:Int,ystart:Int)
		Local DZ:TDeadzone=New TDeadzone
		CreateObject(DZ,Image,xstart,ystart)
		Return DZ
	EndFunction
	
	Method UpdateSelf()
		ResetCollisions(DZ_LAYER)
        CollideImage(Image,X,Y,0,0,DZ_LAYER,Self)  
	EndMethod

EndType

'--------------------Text--------------------
Type TText Extends TGameObject
    
    Field Text:String
    Field Font:TImageFont

    Function Create:TText(Text:String, Font:TImageFont,xstart:Int,ystart:Int)
        Local B:TText=New TText
        B.Text=Text
        B.Font=Font
        B.X=XStart
        B.Y=YStart
        ListAddLast GameObjectList, B
        Return B
    End Function

    Method UpdateSelf()
        If GameState<>PLAY Then Return
    End Method

    Method drawself()
        SetImageFont(Font)
        SetRotation 0
        SetScale 1.0,1.0
		DrawText Text,X,Y
    End Method

EndType

'--------------------Score--------------------
Type TScore Extends TText

    Field score:Int

    Function Create:TScore(Text:String, Font:TImageFont,xstart:Int,ystart:Int)
        Local B:TScore=New TScore
        B.Text=Text
        B.Font=Font
        B.X=XStart
        B.Y=YStart
        ListAddLast GameObjectList, B
        Return B
    End Function

    Method UpdateSelf()

        If GameState<>PLAY Then Return   
        score=0
        For Local B:TBricks=EachIn GameObjectList
            score :+ 1
        Next
        If score=0
			Gamestate=GAMEOVER
			ClearList GameObjectList
		EndIf
    End Method

    Method drawself()
        SetImageFont(Font)
        SetRotation 0
        SetScale 0.75,0.75
        SetColor 255,0,0
        DrawText Text+Score,X,Y
		SetColor 255,255,255
    End Method

EndType

'------------------------------HELPER FUNCTIONS------------------------
Function CreateObject(Obj:TGameObject, Image:TImage,xstart:Int,ystart:Int,Scale:Float=1.0)

        Obj.X=xstart
        Obj.Y=ystart
        Obj.XScale=Scale
        Obj.YScale=Scale
        Obj.Image=Image

       If Obj.Image=Null
		   Print "Not able to load image file. Program aborting"
		   Print Obj.X
		   Print Obj.Y 
		   Print Obj.XScale
		   Print Obj.YScale
		   End
       EndIf

        ListAddLast GameObjectList, Obj 

End Function

Function CreateBall()
	ballrand=Rand(1,3)
	LoadBall()
	TBall.Create(LoadImage("Data\Ball\"+ball),puddlex,puddley-10)
EndFunction

Function CreateBricks()
	'brickrand=Rand(1,3)
	LoadBrick()
	For Local x:Int=0 To 36
		For Local y:Int=0 To brickx
		TBricks.Create(Bricks,24+x*34,50+y*22)
		Next
	Next
EndFunction

Function FPoints()
	If GameState=GAMEOVER Or HEALTH=0
		If PointsFL<Points			
			Local JABOC_BMAXsettings_write:TStream=WriteFile("BBdata")
				If Not JABOC_BMAXsettings_write Then CreateFile("BBdata.bmx")
				WriteLine JABOC_BMAXsettings_write,"Global PointsFL:int="+Points
			CloseStream JABOC_BMAXsettings_write
		EndIf			
	EndIf
EndFunction

Function ClearFPoints()
	Local JABOC_BMAXsettings_write:TStream=WriteFile("BBdata.bmx")
		If Not JABOC_BMAXsettings_write Then CreateFile("BBdata.bmx")
		WriteLine JABOC_BMAXsettings_write,"Global PointsFL:int=0"
	CloseStream JABOC_BMAXsettings_write
EndFunction

'----------------------------------------Everything----------------------------------------
Function UpdateGameState()

    Select GameState
    
    Case PLAY  
			
			If randballspawn=99 'Or KeyHit(KEY_P)
				TBonusBall.Create(LoadImage("Data\Ball\bonusball.png"),puddlex,puddley)
				Points=Points+2
				randballspawn=0
			EndIf
			
			If randballspawn=46
				HEALTH=HEALTH+1
				Points=Points+2
				randballspawn=0
			EndIf
			
			'If KeyHit(KEY_O) Then GameState=GAMEOVER

            If KeyHit(KEY_ESCAPE) 'Or AppTerminate()
				ClearList GameObjectList
				TText.Create("BRICK BREAKER",Font,(Width/2)-100,5)    
				TText.Create("PRESS <ENTER> To START",Font,110,250)
				TText.Create("PRESS <ESCAPE> TO EXIT",Font,110,300)
				TText.Create("Your Score: "+Points,Font,80,400)'Points
				TText.Create("CONTROLS: Left and Right arrow to control Puddle, Space to Pause, Escape to enter to the menu",Font,10,570)
				Points=0
				GameState=WAIT
			EndIf
			
			If KeyHit(KEY_SPACE)
				TText.Create("PAUSE",Font,400,5)
				GameState=PAUSE				
            EndIf
			
			If HEALTH=0
				TText.Create("You are out of balls!",Font,300,5)    
				TText.Create("PRESS <ENTER> To RESTART",Font,110,250)
				TText.Create("PRESS <ESCAPE> TO EXIT",Font,110,300)
				TText.Create("Your Score: "+Points,Font,80,400)'Points
				TText.Create("CONTROLS: Left and Right arrow to control Puddle, Space to Pause, Escape to enter to the menu",Font,10,570)
				PlaySound GOS
				FPoints()
				Points=0
				HEALTH=5
				GameState=WAIT
			EndIf
						
			Case PAUSE
			            
            If KeyHit(KEY_SPACE)
               GameState=PLAY
               For Local o:TText=EachIn GameObjectList
                    ListRemove(GameObjectList,o)
                Next
				TScore.Create("BRICKS:",Font,20,5)
            EndIf

			If KeyHit(KEY_ESCAPE)
				ClearList GameObjectList
				CreateBricks()
				TText.Create("BRICK BREAKER",Font,(Width/2)-100,5)    
				TText.Create("PRESS <ENTER> To START",Font,110,250)
				TText.Create("PRESS <ESCAPE> TO EXIT",Font,110,300)
				TText.Create("CONTROLS: Left and Right arrow to control Puddle, Space to Pause, Escape to enter to the menu",Font,10,570)
				Points=0
				SCORE=1
				GameState=WAIT
			EndIf
            FlushKeys() 
 
		Case WAIT  
			
			brickrand=Rand(1,4)
			playerrand=Rand(1,3)
			ballrand=Rand(1,3)
			LoadBrick()
			LoadPlayer()
			LoadBall()
			CreateBricks()

            If KeyHit(KEY_ESCAPE) Or AppTerminate()
               End
			EndIf
			
			If HARDMODE=True
				DrawText("Press F to disable HARDMODE: ON",10,590)
			Else
				DrawText("Press F to enable HARDMODE: OFF",10,590)
			EndIf
			
			If KeyHit(KEY_F) 
				If HARDMODE=False
					HARDMODE=True
				ElseIf HARDMODE=True
					HARDMODE=False
				EndIf
			EndIf
           
            If KeyHit(KEY_ENTER)
                ClearList GameObjectList
                TBall.Create(LoadImage("Data\Ball\"+ball),Width/2,500)
                TPaddle.Create(LoadImage("Data\Player\"+player),Width/2,0)
				TDeadzone.Create(LoadImage("Data\Player\deadzone.png"),650,716)
				TScore.Create("BRICKS:",Font,20,5)
                CreateBricks()
				HEALTH=5
				SCORE=1
				Points=0
                GameState=PLAY
            EndIf
            FlushKeys()   
		
		Case NEXTGAME
			
			If HARDMODE=True
				DrawText("Press F to disable HARDMODE: ON",10,590)
			Else
				DrawText("Press F to enable HARDMODE: OFF",10,590)
			EndIf
			
			If KeyHit(KEY_F) 
				If HARDMODE=False
					HARDMODE=True
				ElseIf HARDMODE=True
					HARDMODE=False
				EndIf
			EndIf
			
			If KeyHit(KEY_ENTER)
                ClearList GameObjectList
                TBall.Create(LoadImage("Data\Ball\"+ball),Width/2,500)
                TPaddle.Create(LoadImage("Data\Player\"+player),Width/2,0)
				TDeadzone.Create(LoadImage("Data\Player\deadzone.png"),650,716)
				TScore.Create("BRICKS:",Font,20,5)
                CreateBricks()
                GameState=PLAY
            EndIf

			If KeyHit(KEY_ESCAPE)
				End
            EndIf

			FlushKeys()
		
		Case GAMEOVER
				
			TText.Create("YOU WIN!",Font,300,5)			
            TText.Create("PRESS <ENTER> TO START NEW LEVEL",Font,80,250)
            TText.Create("PRESS <ESCAPE> TO EXIT",Font,80,300)
			TText.Create("High Score: "+PointsFL,Font,260,400)'PointsFL
			TText.Create("Your Score: "+Points,Font,80,400)'Points
			If GameState=GAMEOVER Then brickx=brickx+2
			If brickx>10 Then brickx=4
			HEALTH=HEALTH+1
			Points=Points+10			
			PlaySound WINS
			FPoints()
			GameState=NEXTGAME
			FlushKeys() 
		
		Case MENU
		
			TText.Create("BRICK BREAKER",Font,(Width/2)-100,5)    
			TText.Create("PRESS <ENTER> To START",Font,110,250)
			TText.Create("PRESS <ESCAPE> TO EXIT",Font,110,300)
			TText.Create("High Score: "+PointsFL,Font,80,400)'PointsFL
			TText.Create("Press R to reset the High score",Font,80,450)
			TText.Create("CONTROLS: Left and Right arrow to control Puddle, Space to Pause, Escape to enter to the menu",Font,10,570)
			TText.Create("Warning: This game contains loud noises!",Font,10,550)
			
			If HARDMODE=True
				DrawText("Press F to disable HARDMODE: ON",10,590)
			Else
				DrawText("Press F to enable HARDMODE: OFF",10,590)
			EndIf
			
			If KeyHit(KEY_F) 
				If HARDMODE=False
					HARDMODE=True
				ElseIf HARDMODE=True
					HARDMODE=False
				EndIf
			EndIf
			
			If KeyHit(KEY_ENTER)
				For Local o:TText=EachIn GameObjectList
                    ListRemove(GameObjectList,o)
				Next
				TScore.Create("BRICKS:",Font,20,5)
				GameState=PLAY
			EndIf
			
			If KeyHit(KEY_R) 
				ClearFPoints()
				GameState=REMENU
			EndIf
			
			If KeyHit(KEY_ESCAPE)
				AppTerminate
				End
			EndIf
			If KeyDown(KEY_4) And KeyHit(KEY_2)
				OpenURL("https://dioptrick.wixsite.com/bajkiwujkazenka")
			EndIf
			If KeyDown(KEY_G) And KeyHit(KEY_M)
				OpenURL("https://www.youtube.com/watch?v=izGwDsrQ1eQ")
			EndIf
			If KeyDown(KEY_S) And KeyHit(KEY_E)
				OpenURL("https://www.youtube.com/channel/UCPB1XHFFS6pjRzpPBYh0BGg")
			EndIf
		FlushKeys()
		
	Case REMENU
		ClearList GameObjectList
		CreateBricks()
		TBall.Create(LoadImage("Data\Ball\"+ball),Width/2,500)
        TPaddle.Create(LoadImage("Data\Player\"+player),Width/2,0)
		TDeadzone.Create(LoadImage("Data\Player\deadzone.png"),650,716)
		GameState=MENU
					
     EndSelect
        
EndFunction