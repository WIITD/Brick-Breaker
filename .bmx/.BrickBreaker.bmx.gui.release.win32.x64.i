superstrict
import brl.blitz
import brl.appstub
import brl.audio
import brl.bank
import brl.bankstream
import brl.base64
import brl.basic
import brl.bmploader
import brl.clipboard
import brl.collections
import brl.crypto
import brl.d3d7max2d
import brl.d3d9max2d
import brl.data
import brl.directsoundaudio
import brl.eventqueue
import brl.freeaudioaudio
import brl.freetypefont
import brl.glgraphics
import brl.glmax2d
import brl.gnet
import brl.jpgloader
import brl.json
import brl.map
import brl.matrix
import brl.maxlua
import brl.maxutil
import brl.oggloader
import brl.openalaudio
import brl.pngloader
import brl.quaternion
import brl.retro
import brl.tgaloader
import brl.threadpool
import brl.timer
import brl.timerdefault
import brl.volumes
import brl.wavloader
import brl.xml
import pub.freejoy
import pub.freeprocess
import pub.glad
import pub.macos
import pub.nx
import pub.opengles
import pub.vulkan
import pub.xmmintrin
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
-New()="__m__BrickBreaker_TGameObject_New"
-DrawSelf()="_m__BrickBreaker_TGameObject_DrawSelf"
-UpdateSelf()A="_m__BrickBreaker_TGameObject_UpdateSelf"
}A="_m__BrickBreaker_TGameObject"
TBall^TGameObject{
-New()="__m__BrickBreaker_TBall_New"
+Create:TBall(Image:TImage,xstart%,ystart%)="_m__BrickBreaker_TBall_Create_TTBall_TTImageii"
-UpdateSelf()="_m__BrickBreaker_TBall_UpdateSelf"
-CheckCollision()="_m__BrickBreaker_TBall_CheckCollision"
}="_m__BrickBreaker_TBall"
TPaddle^TGameObject{
-New()="__m__BrickBreaker_TPaddle_New"
+Create:TPaddle(Image:TImage,xstart%,ystart%)="_m__BrickBreaker_TPaddle_Create_TTPaddle_TTImageii"
-UpdateSelf()="_m__BrickBreaker_TPaddle_UpdateSelf"
}="_m__BrickBreaker_TPaddle"
TDeadzone^TGameObject{
-New()="__m__BrickBreaker_TDeadzone_New"
+Create:TDeadzone(Image:TImage,xstart%,ystart%)="_m__BrickBreaker_TDeadzone_Create_TTDeadzone_TTImageii"
-UpdateSelf()="_m__BrickBreaker_TDeadzone_UpdateSelf"
}="_m__BrickBreaker_TDeadzone"
TBricks^TGameObject{
-New()="__m__BrickBreaker_TBricks_New"
+Create:TBricks(Image:TImage,xstart%,ystart%)="_m__BrickBreaker_TBricks_Create_TTBricks_TTImageii"
-UpdateSelf()="_m__BrickBreaker_TBricks_UpdateSelf"
}="_m__BrickBreaker_TBricks"
TBonusBall^TGameObject{
-New()="__m__BrickBreaker_TBonusBall_New"
+Create:TBonusBall(Image:TImage,xstart%,ystart%)="_m__BrickBreaker_TBonusBall_Create_TTBonusBall_TTImageii"
-UpdateSelf()="_m__BrickBreaker_TBonusBall_UpdateSelf"
-CheckCollision()="_m__BrickBreaker_TBonusBall_CheckCollision"
}="_m__BrickBreaker_TBonusBall"
TText^TGameObject{
.Text$&
.Font:TImageFont&
-New()="__m__BrickBreaker_TText_New"
+Create:TText(Text$,Font:TImageFont,xstart%,ystart%)="_m__BrickBreaker_TText_Create_TTText_STTImageFontii"
-UpdateSelf()="_m__BrickBreaker_TText_UpdateSelf"
-DrawSelf()="_m__BrickBreaker_TText_DrawSelf"
}="_m__BrickBreaker_TText"
TScore^TText{
.score%&
-New()="__m__BrickBreaker_TScore_New"
+Create:TScore(Text$,Font:TImageFont,xstart%,ystart%)="_m__BrickBreaker_TScore_Create_TTScore_STTImageFontii"
-UpdateSelf()="_m__BrickBreaker_TScore_UpdateSelf"
-DrawSelf()="_m__BrickBreaker_TScore_DrawSelf"
}="_m__BrickBreaker_TScore"
LoadBrick()="_m__BrickBreaker_LoadBrick"
LoadPlayer()="_m__BrickBreaker_LoadPlayer"
LoadBall()="_m__BrickBreaker_LoadBall"
CreateObject(Obj:TGameObject,Image:TImage,xstart%,ystart%,Scale#=1.0#)="_m__BrickBreaker_CreateObject"
CreateBricks()="_m__BrickBreaker_CreateBricks"
FPoints()="_m__BrickBreaker_FPoints"
ClearFPoints()="_m__BrickBreaker_ClearFPoints"
UpdateGameState()="_m__BrickBreaker_UpdateGameState"
CreateBall()="_m__BrickBreaker_CreateBall"
PointsFL%&=mem:p("_m__BrickBreaker_PointsFL")
HARDMODE%&=mem:p("_m__BrickBreaker_HARDMODE")
GameState$&=mem:p("_m__BrickBreaker_GameState")
HEALTH%&=mem:p("_m__BrickBreaker_HEALTH")
GameObjectList:TList&=mem:p("_m__BrickBreaker_GameObjectList")
Width%&=mem:p("_m__BrickBreaker_Width")
Height%&=mem:p("_m__BrickBreaker_Height")
puddlex%&=mem:p("_m__BrickBreaker_puddlex")
puddley%&=mem:p("_m__BrickBreaker_puddley")
brickx%&=mem:p("_m__BrickBreaker_brickx")
brick$&=mem:p("_m__BrickBreaker_brick")
player$&=mem:p("_m__BrickBreaker_player")
ball$&=mem:p("_m__BrickBreaker_ball")
randballspawn%&=mem:p("_m__BrickBreaker_randballspawn")
brickrand%&=mem:p("_m__BrickBreaker_brickrand")
playerrand%&=mem:p("_m__BrickBreaker_playerrand")
ballrand%&=mem:p("_m__BrickBreaker_ballrand")
SCORE%&=mem:p("_m__BrickBreaker_SCORE")
Points%&=mem:p("_m__BrickBreaker_Points")
Font:TImageFont&=mem:p("_m__BrickBreaker_Font")
PCS:TSound&=mem:p("_m__BrickBreaker_PCS")
BCS:TSound&=mem:p("_m__BrickBreaker_BCS")
PUS:TSound&=mem:p("_m__BrickBreaker_PUS")
WINS:TSound&=mem:p("_m__BrickBreaker_WINS")
BEX:TSound&=mem:p("_m__BrickBreaker_BEX")
GOS:TSound&=mem:p("_m__BrickBreaker_GOS")
Bricks:TImage&=mem:p("_m__BrickBreaker_Bricks")