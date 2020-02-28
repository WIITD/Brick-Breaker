#ifndef JUSTANOTHERBREAKOUTCLONE_JUSTANOTHERBREAKOUTCLONE_BMX_CONSOLE_DEBUG_LINUX_X64_H
#define JUSTANOTHERBREAKOUTCLONE_JUSTANOTHERBREAKOUTCLONE_BMX_CONSOLE_DEBUG_LINUX_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.debug.linux.x64.h>
#include <brl.mod/math.mod/.bmx/math.bmx.debug.linux.x64.h>
#include <brl.mod/stringbuilder.mod/.bmx/stringbuilder.bmx.debug.linux.x64.h>
#include <brl.mod/threads.mod/.bmx/threads.bmx.debug.linux.x64.h>
#include <brl.mod/bankstream.mod/.bmx/bankstream.bmx.debug.linux.x64.h>
#include <brl.mod/base64.mod/.bmx/base64.bmx.debug.linux.x64.h>
#include <brl.mod/xml.mod/.bmx/xml.bmx.debug.linux.x64.h>
#include <brl.mod/endianstream.mod/.bmx/endianstream.bmx.debug.linux.x64.h>
#include <brl.mod/filesystem.mod/.bmx/filesystem.bmx.debug.linux.x64.h>
#include <brl.mod/graphics.mod/.bmx/graphics.bmx.debug.linux.x64.h>
#include <brl.mod/dxgraphics.mod/.bmx/dxgraphics.bmx.debug.linux.x64.h>
#include <brl.mod/data.mod/.bmx/data.bmx.debug.linux.x64.h>
#include <brl.mod/bmploader.mod/.bmx/bmploader.bmx.debug.linux.x64.h>
#include <brl.mod/appstub.mod/.bmx/appstub.bmx.debug.linux.x64.h>
#include <brl.mod/oggloader.mod/.bmx/oggloader.bmx.debug.linux.x64.h>
#include <brl.mod/tgaloader.mod/.bmx/tgaloader.bmx.debug.linux.x64.h>
#include <brl.mod/pngloader.mod/.bmx/pngloader.bmx.debug.linux.x64.h>
#include <brl.mod/socketstream.mod/.bmx/socketstream.bmx.debug.linux.x64.h>
#include <brl.mod/standardio.mod/.bmx/standardio.bmx.debug.linux.x64.h>
#include <brl.mod/collections.mod/.bmx/collections.bmx.debug.linux.x64.h>
#include <brl.mod/audio.mod/.bmx/audio.bmx.debug.linux.x64.h>
#include <brl.mod/httpstream.mod/.bmx/httpstream.bmx.debug.linux.x64.h>
#include <brl.mod/crypto.mod/.bmx/crypto.bmx.debug.linux.x64.h>
#include <brl.mod/json.mod/.bmx/json.bmx.debug.linux.x64.h>
#include <brl.mod/wavloader.mod/.bmx/wavloader.bmx.debug.linux.x64.h>
#include <brl.mod/freetypefont.mod/.bmx/freetypefont.bmx.debug.linux.x64.h>
#include <brl.mod/d3d7max2d.mod/.bmx/d3d7max2d.bmx.debug.linux.x64.h>
#include <brl.mod/gnet.mod/.bmx/gnet.bmx.debug.linux.x64.h>
#include <brl.mod/eventqueue.mod/.bmx/eventqueue.bmx.debug.linux.x64.h>
#include <brl.mod/map.mod/.bmx/map.bmx.debug.linux.x64.h>
#include <brl.mod/d3d9max2d.mod/.bmx/d3d9max2d.bmx.debug.linux.x64.h>
#include <brl.mod/retro.mod/.bmx/retro.bmx.debug.linux.x64.h>
#include <brl.mod/threadpool.mod/.bmx/threadpool.bmx.debug.linux.x64.h>
#include <brl.mod/directsoundaudio.mod/.bmx/directsoundaudio.bmx.debug.linux.x64.h>
#include <brl.mod/timerdefault.mod/.bmx/timerdefault.bmx.debug.linux.x64.h>
#include <brl.mod/jpgloader.mod/.bmx/jpgloader.bmx.debug.linux.x64.h>
#include <brl.mod/freeaudioaudio.mod/.bmx/freeaudioaudio.bmx.debug.linux.x64.h>
#include <brl.mod/reflection.mod/.bmx/reflection.bmx.debug.linux.x64.h>
#include <brl.mod/maxutil.mod/.bmx/maxutil.bmx.debug.linux.x64.h>
#include <brl.mod/glgraphics.mod/.bmx/glgraphics.bmx.debug.linux.x64.h>
#include <brl.mod/max2d.mod/.bmx/max2d.bmx.debug.linux.x64.h>
#include <brl.mod/clipboard.mod/.bmx/clipboard.bmx.debug.linux.x64.h>
#include <brl.mod/volumes.mod/.bmx/volumes.bmx.debug.linux.x64.h>
#include <brl.mod/quaternion.mod/.bmx/quaternion.bmx.debug.linux.x64.h>
#include <brl.mod/glmax2d.mod/.bmx/glmax2d.bmx.debug.linux.x64.h>
#include <brl.mod/openalaudio.mod/.bmx/openalaudio.bmx.debug.linux.x64.h>
#include <brl.mod/maxlua.mod/.bmx/maxlua.bmx.debug.linux.x64.h>
#include <pub.mod/freejoy.mod/.bmx/freejoy.bmx.debug.linux.x64.h>
#include <pub.mod/win32.mod/.bmx/win32.bmx.debug.linux.x64.h>
#include <pub.mod/freeprocess.mod/.bmx/freeprocess.bmx.debug.linux.x64.h>
#include <pub.mod/nx.mod/.bmx/nx.bmx.debug.linux.x64.h>
#include <pub.mod/xmmintrin.mod/.bmx/xmmintrin.bmx.debug.linux.x64.h>
#include <pub.mod/opengles.mod/.bmx/opengles.bmx.debug.linux.x64.h>
#include <pub.mod/vulkan.mod/.bmx/vulkan.bmx.debug.linux.x64.h>
#include <pub.mod/glad.mod/.bmx/glad.bmx.debug.linux.x64.h>
#include <pub.mod/macos.mod/.bmx/macos.bmx.debug.linux.x64.h>
int _bb_main();
struct _m_JustAnotherBreakoutClone_TGameObject_obj;
struct _m_JustAnotherBreakoutClone_TBall_obj;
struct _m_JustAnotherBreakoutClone_TPaddle_obj;
struct _m_JustAnotherBreakoutClone_TDeadzone_obj;
struct _m_JustAnotherBreakoutClone_TBricks_obj;
struct _m_JustAnotherBreakoutClone_TBonusBall_obj;
struct _m_JustAnotherBreakoutClone_TText_obj;
struct _m_JustAnotherBreakoutClone_TScore_obj;
extern BBINT _m_JustAnotherBreakoutClone_PointsFL;
extern BBINT _m_JustAnotherBreakoutClone_HARDMODE;
extern BBSTRING _m_JustAnotherBreakoutClone_GameState;
extern BBINT _m_JustAnotherBreakoutClone_HEALTH;
extern struct brl_linkedlist_TList_obj* _m_JustAnotherBreakoutClone_GameObjectList;
extern BBINT _m_JustAnotherBreakoutClone_Width;
extern BBINT _m_JustAnotherBreakoutClone_Height;
extern BBINT _m_JustAnotherBreakoutClone_puddlex;
extern BBINT _m_JustAnotherBreakoutClone_puddley;
extern BBINT _m_JustAnotherBreakoutClone_brickx;
extern BBSTRING _m_JustAnotherBreakoutClone_brick;
extern BBSTRING _m_JustAnotherBreakoutClone_player;
extern BBSTRING _m_JustAnotherBreakoutClone_ball;
extern BBINT _m_JustAnotherBreakoutClone_randballspawn;
extern BBINT _m_JustAnotherBreakoutClone_brickrand;
extern BBINT _m_JustAnotherBreakoutClone_playerrand;
extern BBINT _m_JustAnotherBreakoutClone_ballrand;
extern BBINT _m_JustAnotherBreakoutClone_SCORE;
extern BBINT _m_JustAnotherBreakoutClone_Points;
void _m_JustAnotherBreakoutClone_LoadBrick();
void _m_JustAnotherBreakoutClone_LoadPlayer();
void _m_JustAnotherBreakoutClone_LoadBall();
extern struct brl_max2d_imagefont_TImageFont_obj* _m_JustAnotherBreakoutClone_Font;
extern struct brl_audio_TSound_obj* _m_JustAnotherBreakoutClone_PCS;
extern struct brl_audio_TSound_obj* _m_JustAnotherBreakoutClone_BCS;
extern struct brl_audio_TSound_obj* _m_JustAnotherBreakoutClone_PUS;
extern struct brl_audio_TSound_obj* _m_JustAnotherBreakoutClone_WINS;
extern struct brl_audio_TSound_obj* _m_JustAnotherBreakoutClone_BEX;
extern struct brl_audio_TSound_obj* _m_JustAnotherBreakoutClone_GOS;
void __m_JustAnotherBreakoutClone_TGameObject_New(struct _m_JustAnotherBreakoutClone_TGameObject_obj* o);
typedef void (*_m_JustAnotherBreakoutClone_TGameObject_DrawSelf_m)(struct _m_JustAnotherBreakoutClone_TGameObject_obj*);
void __m_JustAnotherBreakoutClone_TGameObject_DrawSelf(struct _m_JustAnotherBreakoutClone_TGameObject_obj*);
typedef void (*_m_JustAnotherBreakoutClone_TGameObject_UpdateSelf_m)(struct _m_JustAnotherBreakoutClone_TGameObject_obj*);
void __m_JustAnotherBreakoutClone_TGameObject_UpdateSelf(struct _m_JustAnotherBreakoutClone_TGameObject_obj*);
struct BBClass__m_JustAnotherBreakoutClone_TGameObject {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	_m_JustAnotherBreakoutClone_TGameObject_DrawSelf_m m_DrawSelf;
	_m_JustAnotherBreakoutClone_TGameObject_UpdateSelf_m m_UpdateSelf;
};

struct _m_JustAnotherBreakoutClone_TGameObject_obj {
	struct BBClass__m_JustAnotherBreakoutClone_TGameObject* clas;
	BBINT __m_justanotherbreakoutclone_tgameobject_x;
	BBINT __m_justanotherbreakoutclone_tgameobject_y;
	BBFLOAT __m_justanotherbreakoutclone_tgameobject_xspeed;
	BBFLOAT __m_justanotherbreakoutclone_tgameobject_yspeed;
	struct brl_max2d_image_TImage_obj* __m_justanotherbreakoutclone_tgameobject_image;
	BBFLOAT __m_justanotherbreakoutclone_tgameobject_xscale;
	BBFLOAT __m_justanotherbreakoutclone_tgameobject_yscale;
	BBINT __m_justanotherbreakoutclone_tgameobject_rotation;
};
extern struct BBClass__m_JustAnotherBreakoutClone_TGameObject _m_JustAnotherBreakoutClone_TGameObject;
void __m_JustAnotherBreakoutClone_TBall_New(struct _m_JustAnotherBreakoutClone_TBall_obj* o);
typedef struct _m_JustAnotherBreakoutClone_TBall_obj* (*_m_JustAnotherBreakoutClone_TBall_Create_TTBall_TTImageii_f)(struct brl_max2d_image_TImage_obj*,BBINT,BBINT);
struct _m_JustAnotherBreakoutClone_TBall_obj* _m_JustAnotherBreakoutClone_TBall_Create_TTBall_TTImageii(struct brl_max2d_image_TImage_obj*,BBINT,BBINT);
typedef void (*_m_JustAnotherBreakoutClone_TBall_UpdateSelf_m)(struct _m_JustAnotherBreakoutClone_TBall_obj*);
void __m_JustAnotherBreakoutClone_TBall_UpdateSelf(struct _m_JustAnotherBreakoutClone_TBall_obj*);
typedef void (*_m_JustAnotherBreakoutClone_TBall_CheckCollision_m)(struct _m_JustAnotherBreakoutClone_TBall_obj*);
void __m_JustAnotherBreakoutClone_TBall_CheckCollision(struct _m_JustAnotherBreakoutClone_TBall_obj*);
struct BBClass__m_JustAnotherBreakoutClone_TBall {
	struct BBClass__m_JustAnotherBreakoutClone_TGameObject*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	_m_JustAnotherBreakoutClone_TGameObject_DrawSelf_m m_DrawSelf;
	_m_JustAnotherBreakoutClone_TBall_UpdateSelf_m m_UpdateSelf;
	_m_JustAnotherBreakoutClone_TBall_Create_TTBall_TTImageii_f f_Create_TTBall_TTImageii;
	_m_JustAnotherBreakoutClone_TBall_CheckCollision_m m_CheckCollision;
};

struct _m_JustAnotherBreakoutClone_TBall_obj {
	struct BBClass__m_JustAnotherBreakoutClone_TBall* clas;
	BBINT __m_justanotherbreakoutclone_tgameobject_x;
	BBINT __m_justanotherbreakoutclone_tgameobject_y;
	BBFLOAT __m_justanotherbreakoutclone_tgameobject_xspeed;
	BBFLOAT __m_justanotherbreakoutclone_tgameobject_yspeed;
	struct brl_max2d_image_TImage_obj* __m_justanotherbreakoutclone_tgameobject_image;
	BBFLOAT __m_justanotherbreakoutclone_tgameobject_xscale;
	BBFLOAT __m_justanotherbreakoutclone_tgameobject_yscale;
	BBINT __m_justanotherbreakoutclone_tgameobject_rotation;
};
extern struct BBClass__m_JustAnotherBreakoutClone_TBall _m_JustAnotherBreakoutClone_TBall;
void _m_JustAnotherBreakoutClone_CreateObject(struct _m_JustAnotherBreakoutClone_TGameObject_obj* bbt_Obj,struct brl_max2d_image_TImage_obj* bbt_Image,BBINT bbt_xstart,BBINT bbt_ystart,BBFLOAT bbt_Scale);
void __m_JustAnotherBreakoutClone_TPaddle_New(struct _m_JustAnotherBreakoutClone_TPaddle_obj* o);
typedef struct _m_JustAnotherBreakoutClone_TPaddle_obj* (*_m_JustAnotherBreakoutClone_TPaddle_Create_TTPaddle_TTImageii_f)(struct brl_max2d_image_TImage_obj*,BBINT,BBINT);
struct _m_JustAnotherBreakoutClone_TPaddle_obj* _m_JustAnotherBreakoutClone_TPaddle_Create_TTPaddle_TTImageii(struct brl_max2d_image_TImage_obj*,BBINT,BBINT);
typedef void (*_m_JustAnotherBreakoutClone_TPaddle_UpdateSelf_m)(struct _m_JustAnotherBreakoutClone_TPaddle_obj*);
void __m_JustAnotherBreakoutClone_TPaddle_UpdateSelf(struct _m_JustAnotherBreakoutClone_TPaddle_obj*);
struct BBClass__m_JustAnotherBreakoutClone_TPaddle {
	struct BBClass__m_JustAnotherBreakoutClone_TGameObject*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	_m_JustAnotherBreakoutClone_TGameObject_DrawSelf_m m_DrawSelf;
	_m_JustAnotherBreakoutClone_TPaddle_UpdateSelf_m m_UpdateSelf;
	_m_JustAnotherBreakoutClone_TPaddle_Create_TTPaddle_TTImageii_f f_Create_TTPaddle_TTImageii;
};

struct _m_JustAnotherBreakoutClone_TPaddle_obj {
	struct BBClass__m_JustAnotherBreakoutClone_TPaddle* clas;
	BBINT __m_justanotherbreakoutclone_tgameobject_x;
	BBINT __m_justanotherbreakoutclone_tgameobject_y;
	BBFLOAT __m_justanotherbreakoutclone_tgameobject_xspeed;
	BBFLOAT __m_justanotherbreakoutclone_tgameobject_yspeed;
	struct brl_max2d_image_TImage_obj* __m_justanotherbreakoutclone_tgameobject_image;
	BBFLOAT __m_justanotherbreakoutclone_tgameobject_xscale;
	BBFLOAT __m_justanotherbreakoutclone_tgameobject_yscale;
	BBINT __m_justanotherbreakoutclone_tgameobject_rotation;
};
extern struct BBClass__m_JustAnotherBreakoutClone_TPaddle _m_JustAnotherBreakoutClone_TPaddle;
void __m_JustAnotherBreakoutClone_TDeadzone_New(struct _m_JustAnotherBreakoutClone_TDeadzone_obj* o);
typedef struct _m_JustAnotherBreakoutClone_TDeadzone_obj* (*_m_JustAnotherBreakoutClone_TDeadzone_Create_TTDeadzone_TTImageii_f)(struct brl_max2d_image_TImage_obj*,BBINT,BBINT);
struct _m_JustAnotherBreakoutClone_TDeadzone_obj* _m_JustAnotherBreakoutClone_TDeadzone_Create_TTDeadzone_TTImageii(struct brl_max2d_image_TImage_obj*,BBINT,BBINT);
typedef void (*_m_JustAnotherBreakoutClone_TDeadzone_UpdateSelf_m)(struct _m_JustAnotherBreakoutClone_TDeadzone_obj*);
void __m_JustAnotherBreakoutClone_TDeadzone_UpdateSelf(struct _m_JustAnotherBreakoutClone_TDeadzone_obj*);
struct BBClass__m_JustAnotherBreakoutClone_TDeadzone {
	struct BBClass__m_JustAnotherBreakoutClone_TGameObject*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	_m_JustAnotherBreakoutClone_TGameObject_DrawSelf_m m_DrawSelf;
	_m_JustAnotherBreakoutClone_TDeadzone_UpdateSelf_m m_UpdateSelf;
	_m_JustAnotherBreakoutClone_TDeadzone_Create_TTDeadzone_TTImageii_f f_Create_TTDeadzone_TTImageii;
};

struct _m_JustAnotherBreakoutClone_TDeadzone_obj {
	struct BBClass__m_JustAnotherBreakoutClone_TDeadzone* clas;
	BBINT __m_justanotherbreakoutclone_tgameobject_x;
	BBINT __m_justanotherbreakoutclone_tgameobject_y;
	BBFLOAT __m_justanotherbreakoutclone_tgameobject_xspeed;
	BBFLOAT __m_justanotherbreakoutclone_tgameobject_yspeed;
	struct brl_max2d_image_TImage_obj* __m_justanotherbreakoutclone_tgameobject_image;
	BBFLOAT __m_justanotherbreakoutclone_tgameobject_xscale;
	BBFLOAT __m_justanotherbreakoutclone_tgameobject_yscale;
	BBINT __m_justanotherbreakoutclone_tgameobject_rotation;
};
extern struct BBClass__m_JustAnotherBreakoutClone_TDeadzone _m_JustAnotherBreakoutClone_TDeadzone;
extern struct brl_max2d_image_TImage_obj* _m_JustAnotherBreakoutClone_Bricks;
void __m_JustAnotherBreakoutClone_TBricks_New(struct _m_JustAnotherBreakoutClone_TBricks_obj* o);
typedef struct _m_JustAnotherBreakoutClone_TBricks_obj* (*_m_JustAnotherBreakoutClone_TBricks_Create_TTBricks_TTImageii_f)(struct brl_max2d_image_TImage_obj*,BBINT,BBINT);
struct _m_JustAnotherBreakoutClone_TBricks_obj* _m_JustAnotherBreakoutClone_TBricks_Create_TTBricks_TTImageii(struct brl_max2d_image_TImage_obj*,BBINT,BBINT);
typedef void (*_m_JustAnotherBreakoutClone_TBricks_UpdateSelf_m)(struct _m_JustAnotherBreakoutClone_TBricks_obj*);
void __m_JustAnotherBreakoutClone_TBricks_UpdateSelf(struct _m_JustAnotherBreakoutClone_TBricks_obj*);
struct BBClass__m_JustAnotherBreakoutClone_TBricks {
	struct BBClass__m_JustAnotherBreakoutClone_TGameObject*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	_m_JustAnotherBreakoutClone_TGameObject_DrawSelf_m m_DrawSelf;
	_m_JustAnotherBreakoutClone_TBricks_UpdateSelf_m m_UpdateSelf;
	_m_JustAnotherBreakoutClone_TBricks_Create_TTBricks_TTImageii_f f_Create_TTBricks_TTImageii;
};

struct _m_JustAnotherBreakoutClone_TBricks_obj {
	struct BBClass__m_JustAnotherBreakoutClone_TBricks* clas;
	BBINT __m_justanotherbreakoutclone_tgameobject_x;
	BBINT __m_justanotherbreakoutclone_tgameobject_y;
	BBFLOAT __m_justanotherbreakoutclone_tgameobject_xspeed;
	BBFLOAT __m_justanotherbreakoutclone_tgameobject_yspeed;
	struct brl_max2d_image_TImage_obj* __m_justanotherbreakoutclone_tgameobject_image;
	BBFLOAT __m_justanotherbreakoutclone_tgameobject_xscale;
	BBFLOAT __m_justanotherbreakoutclone_tgameobject_yscale;
	BBINT __m_justanotherbreakoutclone_tgameobject_rotation;
};
extern struct BBClass__m_JustAnotherBreakoutClone_TBricks _m_JustAnotherBreakoutClone_TBricks;
void _m_JustAnotherBreakoutClone_CreateBricks();
void __m_JustAnotherBreakoutClone_TBonusBall_New(struct _m_JustAnotherBreakoutClone_TBonusBall_obj* o);
typedef struct _m_JustAnotherBreakoutClone_TBonusBall_obj* (*_m_JustAnotherBreakoutClone_TBonusBall_Create_TTBonusBall_TTImageii_f)(struct brl_max2d_image_TImage_obj*,BBINT,BBINT);
struct _m_JustAnotherBreakoutClone_TBonusBall_obj* _m_JustAnotherBreakoutClone_TBonusBall_Create_TTBonusBall_TTImageii(struct brl_max2d_image_TImage_obj*,BBINT,BBINT);
typedef void (*_m_JustAnotherBreakoutClone_TBonusBall_UpdateSelf_m)(struct _m_JustAnotherBreakoutClone_TBonusBall_obj*);
void __m_JustAnotherBreakoutClone_TBonusBall_UpdateSelf(struct _m_JustAnotherBreakoutClone_TBonusBall_obj*);
typedef void (*_m_JustAnotherBreakoutClone_TBonusBall_CheckCollision_m)(struct _m_JustAnotherBreakoutClone_TBonusBall_obj*);
void __m_JustAnotherBreakoutClone_TBonusBall_CheckCollision(struct _m_JustAnotherBreakoutClone_TBonusBall_obj*);
struct BBClass__m_JustAnotherBreakoutClone_TBonusBall {
	struct BBClass__m_JustAnotherBreakoutClone_TGameObject*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	_m_JustAnotherBreakoutClone_TGameObject_DrawSelf_m m_DrawSelf;
	_m_JustAnotherBreakoutClone_TBonusBall_UpdateSelf_m m_UpdateSelf;
	_m_JustAnotherBreakoutClone_TBonusBall_Create_TTBonusBall_TTImageii_f f_Create_TTBonusBall_TTImageii;
	_m_JustAnotherBreakoutClone_TBonusBall_CheckCollision_m m_CheckCollision;
};

struct _m_JustAnotherBreakoutClone_TBonusBall_obj {
	struct BBClass__m_JustAnotherBreakoutClone_TBonusBall* clas;
	BBINT __m_justanotherbreakoutclone_tgameobject_x;
	BBINT __m_justanotherbreakoutclone_tgameobject_y;
	BBFLOAT __m_justanotherbreakoutclone_tgameobject_xspeed;
	BBFLOAT __m_justanotherbreakoutclone_tgameobject_yspeed;
	struct brl_max2d_image_TImage_obj* __m_justanotherbreakoutclone_tgameobject_image;
	BBFLOAT __m_justanotherbreakoutclone_tgameobject_xscale;
	BBFLOAT __m_justanotherbreakoutclone_tgameobject_yscale;
	BBINT __m_justanotherbreakoutclone_tgameobject_rotation;
};
extern struct BBClass__m_JustAnotherBreakoutClone_TBonusBall _m_JustAnotherBreakoutClone_TBonusBall;
void __m_JustAnotherBreakoutClone_TText_New(struct _m_JustAnotherBreakoutClone_TText_obj* o);
typedef struct _m_JustAnotherBreakoutClone_TText_obj* (*_m_JustAnotherBreakoutClone_TText_Create_TTText_STTImageFontii_f)(BBSTRING,struct brl_max2d_imagefont_TImageFont_obj*,BBINT,BBINT);
struct _m_JustAnotherBreakoutClone_TText_obj* _m_JustAnotherBreakoutClone_TText_Create_TTText_STTImageFontii(BBSTRING,struct brl_max2d_imagefont_TImageFont_obj*,BBINT,BBINT);
typedef void (*_m_JustAnotherBreakoutClone_TText_UpdateSelf_m)(struct _m_JustAnotherBreakoutClone_TText_obj*);
void __m_JustAnotherBreakoutClone_TText_UpdateSelf(struct _m_JustAnotherBreakoutClone_TText_obj*);
typedef void (*_m_JustAnotherBreakoutClone_TText_DrawSelf_m)(struct _m_JustAnotherBreakoutClone_TText_obj*);
void __m_JustAnotherBreakoutClone_TText_DrawSelf(struct _m_JustAnotherBreakoutClone_TText_obj*);
struct BBClass__m_JustAnotherBreakoutClone_TText {
	struct BBClass__m_JustAnotherBreakoutClone_TGameObject*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	_m_JustAnotherBreakoutClone_TText_DrawSelf_m m_DrawSelf;
	_m_JustAnotherBreakoutClone_TText_UpdateSelf_m m_UpdateSelf;
	_m_JustAnotherBreakoutClone_TText_Create_TTText_STTImageFontii_f f_Create_TTText_STTImageFontii;
};

struct _m_JustAnotherBreakoutClone_TText_obj {
	struct BBClass__m_JustAnotherBreakoutClone_TText* clas;
	BBINT __m_justanotherbreakoutclone_tgameobject_x;
	BBINT __m_justanotherbreakoutclone_tgameobject_y;
	BBFLOAT __m_justanotherbreakoutclone_tgameobject_xspeed;
	BBFLOAT __m_justanotherbreakoutclone_tgameobject_yspeed;
	struct brl_max2d_image_TImage_obj* __m_justanotherbreakoutclone_tgameobject_image;
	BBFLOAT __m_justanotherbreakoutclone_tgameobject_xscale;
	BBFLOAT __m_justanotherbreakoutclone_tgameobject_yscale;
	BBINT __m_justanotherbreakoutclone_tgameobject_rotation;
	BBSTRING __m_justanotherbreakoutclone_ttext_text;
	struct brl_max2d_imagefont_TImageFont_obj* __m_justanotherbreakoutclone_ttext_font;
};
extern struct BBClass__m_JustAnotherBreakoutClone_TText _m_JustAnotherBreakoutClone_TText;
void _m_JustAnotherBreakoutClone_FPoints();
void __m_JustAnotherBreakoutClone_TScore_New(struct _m_JustAnotherBreakoutClone_TScore_obj* o);
typedef struct _m_JustAnotherBreakoutClone_TScore_obj* (*_m_JustAnotherBreakoutClone_TScore_Create_TTScore_STTImageFontii_f)(BBSTRING,struct brl_max2d_imagefont_TImageFont_obj*,BBINT,BBINT);
struct _m_JustAnotherBreakoutClone_TScore_obj* _m_JustAnotherBreakoutClone_TScore_Create_TTScore_STTImageFontii(BBSTRING,struct brl_max2d_imagefont_TImageFont_obj*,BBINT,BBINT);
typedef void (*_m_JustAnotherBreakoutClone_TScore_UpdateSelf_m)(struct _m_JustAnotherBreakoutClone_TScore_obj*);
void __m_JustAnotherBreakoutClone_TScore_UpdateSelf(struct _m_JustAnotherBreakoutClone_TScore_obj*);
typedef void (*_m_JustAnotherBreakoutClone_TScore_DrawSelf_m)(struct _m_JustAnotherBreakoutClone_TScore_obj*);
void __m_JustAnotherBreakoutClone_TScore_DrawSelf(struct _m_JustAnotherBreakoutClone_TScore_obj*);
struct BBClass__m_JustAnotherBreakoutClone_TScore {
	struct BBClass__m_JustAnotherBreakoutClone_TText*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	_m_JustAnotherBreakoutClone_TScore_DrawSelf_m m_DrawSelf;
	_m_JustAnotherBreakoutClone_TScore_UpdateSelf_m m_UpdateSelf;
	_m_JustAnotherBreakoutClone_TScore_Create_TTScore_STTImageFontii_f f_Create_TTScore_STTImageFontii;
};

struct _m_JustAnotherBreakoutClone_TScore_obj {
	struct BBClass__m_JustAnotherBreakoutClone_TScore* clas;
	BBINT __m_justanotherbreakoutclone_tgameobject_x;
	BBINT __m_justanotherbreakoutclone_tgameobject_y;
	BBFLOAT __m_justanotherbreakoutclone_tgameobject_xspeed;
	BBFLOAT __m_justanotherbreakoutclone_tgameobject_yspeed;
	struct brl_max2d_image_TImage_obj* __m_justanotherbreakoutclone_tgameobject_image;
	BBFLOAT __m_justanotherbreakoutclone_tgameobject_xscale;
	BBFLOAT __m_justanotherbreakoutclone_tgameobject_yscale;
	BBINT __m_justanotherbreakoutclone_tgameobject_rotation;
	BBSTRING __m_justanotherbreakoutclone_ttext_text;
	struct brl_max2d_imagefont_TImageFont_obj* __m_justanotherbreakoutclone_ttext_font;
	BBINT __m_justanotherbreakoutclone_tscore_score;
};
extern struct BBClass__m_JustAnotherBreakoutClone_TScore _m_JustAnotherBreakoutClone_TScore;
void _m_JustAnotherBreakoutClone_ClearFPoints();
void _m_JustAnotherBreakoutClone_UpdateGameState();
void _m_JustAnotherBreakoutClone_CreateBall();

#endif
