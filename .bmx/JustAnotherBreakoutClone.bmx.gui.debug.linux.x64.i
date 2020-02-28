superstrict
import brl.blitz
import brl.math
import brl.stringbuilder
import brl.threads
import brl.bankstream
import brl.base64
import brl.xml
import brl.endianstream
import brl.filesystem
import brl.graphics
import brl.dxgraphics
import brl.data
import brl.bmploader
import brl.appstub
import brl.oggloader
import brl.tgaloader
import brl.pngloader
import brl.socketstream
import brl.standardio
import brl.collections
import brl.audio
import brl.httpstream
import brl.crypto
import brl.json
import brl.wavloader
import brl.freetypefont
import brl.d3d7max2d
import brl.gnet
import brl.eventqueue
import brl.map
import brl.d3d9max2d
import brl.retro
import brl.threadpool
import brl.directsoundaudio
import brl.timerdefault
import brl.jpgloader
import brl.freeaudioaudio
import brl.reflection
import brl.maxutil
import brl.glgraphics
import brl.max2d
import brl.clipboard
import brl.volumes
import brl.quaternion
import brl.glmax2d
import brl.openalaudio
import brl.maxlua
import pub.freejoy
import pub.win32
import pub.freeprocess
import pub.nx
import pub.xmmintrin
import pub.opengles
import pub.vulkan
import pub.glad
import pub.macos
MENU%=6
PLAY%=1
PAUSE%=2
WAIT%=4
GAMEOVER%=0
NEXTGAME%=5
REMENU%=42
START%=3
PLAYER_LAYER%=1
DZ_LAYER%=2
TGameObject^Object{
.X%&
.Y%&
.XSpeed#&
.YSpeed#&
.Image:TImage&
.XScale#&
.YScale#&
.Rotation%&
-New()="__m_JustAnotherBreakoutClone_TGameObject_New"
-DrawSelf()="_m_JustAnotherBreakoutClone_TGameObject_DrawSelf"
-UpdateSelf()A="_m_JustAnotherBreakoutClone_TGameObject_UpdateSelf"
}A="_m_JustAnotherBreakoutClone_TGameObject"
TBall^TGameObject{
-New()="__m_JustAnotherBreakoutClone_TBall_New"
+Create:TBall(Image:TImage,xstart%,ystart%)="_m_JustAnotherBreakoutClone_TBall_Create_TTBall_TTImageii"
-UpdateSelf()="_m_JustAnotherBreakoutClone_TBall_UpdateSelf"
-CheckCollision()="_m_JustAnotherBreakoutClone_TBall_CheckCollision"
}="_m_JustAnotherBreakoutClone_TBall"
TPaddle^TGameObject{
-New()="__m_JustAnotherBreakoutClone_TPaddle_New"
+Create:TPaddle(Image:TImage,xstart%,ystart%)="_m_JustAnotherBreakoutClone_TPaddle_Create_TTPaddle_TTImageii"
-UpdateSelf()="_m_JustAnotherBreakoutClone_TPaddle_UpdateSelf"
}="_m_JustAnotherBreakoutClone_TPaddle"
TDeadzone^TGameObject{
-New()="__m_JustAnotherBreakoutClone_TDeadzone_New"
+Create:TDeadzone(Image:TImage,xstart%,ystart%)="_m_JustAnotherBreakoutClone_TDeadzone_Create_TTDeadzone_TTImageii"
-UpdateSelf()="_m_JustAnotherBreakoutClone_TDeadzone_UpdateSelf"
}="_m_JustAnotherBreakoutClone_TDeadzone"
TBricks^TGameObject{
-New()="__m_JustAnotherBreakoutClone_TBricks_New"
+Create:TBricks(Image:TImage,xstart%,ystart%)="_m_JustAnotherBreakoutClone_TBricks_Create_TTBricks_TTImageii"
-UpdateSelf()="_m_JustAnotherBreakoutClone_TBricks_UpdateSelf"
}="_m_JustAnotherBreakoutClone_TBricks"
TBonusBall^TGameObject{
-New()="__m_JustAnotherBreakoutClone_TBonusBall_New"
+Create:TBonusBall(Image:TImage,xstart%,ystart%)="_m_JustAnotherBreakoutClone_TBonusBall_Create_TTBonusBall_TTImageii"
-UpdateSelf()="_m_JustAnotherBreakoutClone_TBonusBall_UpdateSelf"
-CheckCollision()="_m_JustAnotherBreakoutClone_TBonusBall_CheckCollision"
}="_m_JustAnotherBreakoutClone_TBonusBall"
TText^TGameObject{
.Text$&
.Font:TImageFont&
-New()="__m_JustAnotherBreakoutClone_TText_New"
+Create:TText(Text$,Font:TImageFont,xstart%,ystart%)="_m_JustAnotherBreakoutClone_TText_Create_TTText_STTImageFontii"
-UpdateSelf()="_m_JustAnotherBreakoutClone_TText_UpdateSelf"
-DrawSelf()="_m_JustAnotherBreakoutClone_TText_DrawSelf"
}="_m_JustAnotherBreakoutClone_TText"
TScore^TText{
.score%&
-New()="__m_JustAnotherBreakoutClone_TScore_New"
+Create:TScore(Text$,Font:TImageFont,xstart%,ystart%)="_m_JustAnotherBreakoutClone_TScore_Create_TTScore_STTImageFontii"
-UpdateSelf()="_m_JustAnotherBreakoutClone_TScore_UpdateSelf"
-DrawSelf()="_m_JustAnotherBreakoutClone_TScore_DrawSelf"
}="_m_JustAnotherBreakoutClone_TScore"
LoadBrick()="_m_JustAnotherBreakoutClone_LoadBrick"
LoadPlayer()="_m_JustAnotherBreakoutClone_LoadPlayer"
LoadBall()="_m_JustAnotherBreakoutClone_LoadBall"
CreateObject(Obj:TGameObject,Image:TImage,xstart%,ystart%,Scale#=1.0#)="_m_JustAnotherBreakoutClone_CreateObject"
CreateBricks()="_m_JustAnotherBreakoutClone_CreateBricks"
FPoints()="_m_JustAnotherBreakoutClone_FPoints"
ClearFPoints()="_m_JustAnotherBreakoutClone_ClearFPoints"
UpdateGameState()="_m_JustAnotherBreakoutClone_UpdateGameState"
CreateBall()="_m_JustAnotherBreakoutClone_CreateBall"
PointsFL%&=mem:p("_m_JustAnotherBreakoutClone_PointsFL")
GameState$&=mem:p("_m_JustAnotherBreakoutClone_GameState")
HEALTH%&=mem:p("_m_JustAnotherBreakoutClone_HEALTH")
GameObjectList:TList&=mem:p("_m_JustAnotherBreakoutClone_GameObjectList")
Width%&=mem:p("_m_JustAnotherBreakoutClone_Width")
Height%&=mem:p("_m_JustAnotherBreakoutClone_Height")
puddlex%&=mem:p("_m_JustAnotherBreakoutClone_puddlex")
puddley%&=mem:p("_m_JustAnotherBreakoutClone_puddley")
brickx%&=mem:p("_m_JustAnotherBreakoutClone_brickx")
brick$&=mem:p("_m_JustAnotherBreakoutClone_brick")
player$&=mem:p("_m_JustAnotherBreakoutClone_player")
ball$&=mem:p("_m_JustAnotherBreakoutClone_ball")
randballspawn%&=mem:p("_m_JustAnotherBreakoutClone_randballspawn")
brickrand%&=mem:p("_m_JustAnotherBreakoutClone_brickrand")
playerrand%&=mem:p("_m_JustAnotherBreakoutClone_playerrand")
ballrand%&=mem:p("_m_JustAnotherBreakoutClone_ballrand")
SCORE%&=mem:p("_m_JustAnotherBreakoutClone_SCORE")
Points%&=mem:p("_m_JustAnotherBreakoutClone_Points")
Font:TImageFont&=mem:p("_m_JustAnotherBreakoutClone_Font")
PCS:TSound&=mem:p("_m_JustAnotherBreakoutClone_PCS")
BCS:TSound&=mem:p("_m_JustAnotherBreakoutClone_BCS")
PUS:TSound&=mem:p("_m_JustAnotherBreakoutClone_PUS")
WINS:TSound&=mem:p("_m_JustAnotherBreakoutClone_WINS")
BEX:TSound&=mem:p("_m_JustAnotherBreakoutClone_BEX")
GOS:TSound&=mem:p("_m_JustAnotherBreakoutClone_GOS")
Bricks:TImage&=mem:p("_m_JustAnotherBreakoutClone_Bricks")