#ifndef BRICK_BREAKER__BRICKBREAKER_BMX_GUI_RELEASE_WIN32_X64_H
#define BRICK_BREAKER__BRICKBREAKER_BMX_GUI_RELEASE_WIN32_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.win32.x64.h>
#include <brl.mod/appstub.mod/.bmx/appstub.bmx.release.win32.x64.h>
#include <brl.mod/audio.mod/.bmx/audio.bmx.release.win32.x64.h>
#include <brl.mod/bank.mod/.bmx/bank.bmx.release.win32.x64.h>
#include <brl.mod/bankstream.mod/.bmx/bankstream.bmx.release.win32.x64.h>
#include <brl.mod/base64.mod/.bmx/base64.bmx.release.win32.x64.h>
#include <brl.mod/basic.mod/.bmx/basic.bmx.release.win32.x64.h>
#include <brl.mod/bmploader.mod/.bmx/bmploader.bmx.release.win32.x64.h>
#include <brl.mod/clipboard.mod/.bmx/clipboard.bmx.release.win32.x64.h>
#include <brl.mod/collections.mod/.bmx/collections.bmx.release.win32.x64.h>
#include <brl.mod/crypto.mod/.bmx/crypto.bmx.release.win32.x64.h>
#include <brl.mod/d3d7max2d.mod/.bmx/d3d7max2d.bmx.release.win32.x64.h>
#include <brl.mod/d3d9max2d.mod/.bmx/d3d9max2d.bmx.release.win32.x64.h>
#include <brl.mod/data.mod/.bmx/data.bmx.release.win32.x64.h>
#include <brl.mod/directsoundaudio.mod/.bmx/directsoundaudio.bmx.release.win32.x64.h>
#include <brl.mod/eventqueue.mod/.bmx/eventqueue.bmx.release.win32.x64.h>
#include <brl.mod/freeaudioaudio.mod/.bmx/freeaudioaudio.bmx.release.win32.x64.h>
#include <brl.mod/freetypefont.mod/.bmx/freetypefont.bmx.release.win32.x64.h>
#include <brl.mod/glgraphics.mod/.bmx/glgraphics.bmx.release.win32.x64.h>
#include <brl.mod/glmax2d.mod/.bmx/glmax2d.bmx.release.win32.x64.h>
#include <brl.mod/gnet.mod/.bmx/gnet.bmx.release.win32.x64.h>
#include <brl.mod/jpgloader.mod/.bmx/jpgloader.bmx.release.win32.x64.h>
#include <brl.mod/json.mod/.bmx/json.bmx.release.win32.x64.h>
#include <brl.mod/map.mod/.bmx/map.bmx.release.win32.x64.h>
#include <brl.mod/matrix.mod/.bmx/matrix.bmx.release.win32.x64.h>
#include <brl.mod/maxlua.mod/.bmx/maxlua.bmx.release.win32.x64.h>
#include <brl.mod/maxutil.mod/.bmx/maxutil.bmx.release.win32.x64.h>
#include <brl.mod/oggloader.mod/.bmx/oggloader.bmx.release.win32.x64.h>
#include <brl.mod/openalaudio.mod/.bmx/openalaudio.bmx.release.win32.x64.h>
#include <brl.mod/pngloader.mod/.bmx/pngloader.bmx.release.win32.x64.h>
#include <brl.mod/quaternion.mod/.bmx/quaternion.bmx.release.win32.x64.h>
#include <brl.mod/retro.mod/.bmx/retro.bmx.release.win32.x64.h>
#include <brl.mod/tgaloader.mod/.bmx/tgaloader.bmx.release.win32.x64.h>
#include <brl.mod/threadpool.mod/.bmx/threadpool.bmx.release.win32.x64.h>
#include <brl.mod/timer.mod/.bmx/timer.bmx.release.win32.x64.h>
#include <brl.mod/timerdefault.mod/.bmx/timerdefault.bmx.release.win32.x64.h>
#include <brl.mod/volumes.mod/.bmx/volumes.bmx.release.win32.x64.h>
#include <brl.mod/wavloader.mod/.bmx/wavloader.bmx.release.win32.x64.h>
#include <brl.mod/xml.mod/.bmx/xml.bmx.release.win32.x64.h>
#include <pub.mod/freejoy.mod/.bmx/freejoy.bmx.release.win32.x64.h>
#include <pub.mod/freeprocess.mod/.bmx/freeprocess.bmx.release.win32.x64.h>
#include <pub.mod/glad.mod/.bmx/glad.bmx.release.win32.x64.h>
#include <pub.mod/macos.mod/.bmx/macos.bmx.release.win32.x64.h>
#include <pub.mod/nx.mod/.bmx/nx.bmx.release.win32.x64.h>
#include <pub.mod/opengles.mod/.bmx/opengles.bmx.release.win32.x64.h>
#include <pub.mod/vulkan.mod/.bmx/vulkan.bmx.release.win32.x64.h>
#include <pub.mod/xmmintrin.mod/.bmx/xmmintrin.bmx.release.win32.x64.h>
int _bb_main();
struct _m__BrickBreaker_TGameObject_obj;
struct _m__BrickBreaker_TBall_obj;
struct _m__BrickBreaker_TPaddle_obj;
struct _m__BrickBreaker_TDeadzone_obj;
struct _m__BrickBreaker_TBricks_obj;
struct _m__BrickBreaker_TBonusBall_obj;
struct _m__BrickBreaker_TText_obj;
struct _m__BrickBreaker_TScore_obj;
extern BBINT _m__BrickBreaker_PointsFL;
extern BBINT _m__BrickBreaker_HARDMODE;
extern BBSTRING _m__BrickBreaker_GameState;
extern BBINT _m__BrickBreaker_HEALTH;
extern struct brl_linkedlist_TList_obj* _m__BrickBreaker_GameObjectList;
extern BBINT _m__BrickBreaker_Width;
extern BBINT _m__BrickBreaker_Height;
extern BBINT _m__BrickBreaker_puddlex;
extern BBINT _m__BrickBreaker_puddley;
extern BBINT _m__BrickBreaker_brickx;
extern BBSTRING _m__BrickBreaker_brick;
extern BBSTRING _m__BrickBreaker_player;
extern BBSTRING _m__BrickBreaker_ball;
extern BBINT _m__BrickBreaker_randballspawn;
extern BBINT _m__BrickBreaker_brickrand;
extern BBINT _m__BrickBreaker_playerrand;
extern BBINT _m__BrickBreaker_ballrand;
extern BBINT _m__BrickBreaker_SCORE;
extern BBINT _m__BrickBreaker_Points;
void _m__BrickBreaker_LoadBrick();
void _m__BrickBreaker_LoadPlayer();
void _m__BrickBreaker_LoadBall();
extern struct brl_max2d_imagefont_TImageFont_obj* _m__BrickBreaker_Font;
extern struct brl_audio_TSound_obj* _m__BrickBreaker_PCS;
extern struct brl_audio_TSound_obj* _m__BrickBreaker_BCS;
extern struct brl_audio_TSound_obj* _m__BrickBreaker_PUS;
extern struct brl_audio_TSound_obj* _m__BrickBreaker_WINS;
extern struct brl_audio_TSound_obj* _m__BrickBreaker_BEX;
extern struct brl_audio_TSound_obj* _m__BrickBreaker_GOS;
void __m__BrickBreaker_TGameObject_New(struct _m__BrickBreaker_TGameObject_obj* o);
typedef void (*_m__BrickBreaker_TGameObject_DrawSelf_m)(struct _m__BrickBreaker_TGameObject_obj*);
void __m__BrickBreaker_TGameObject_DrawSelf(struct _m__BrickBreaker_TGameObject_obj*);
typedef void (*_m__BrickBreaker_TGameObject_UpdateSelf_m)(struct _m__BrickBreaker_TGameObject_obj*);
void __m__BrickBreaker_TGameObject_UpdateSelf(struct _m__BrickBreaker_TGameObject_obj*);
struct BBClass__m__BrickBreaker_TGameObject {
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
	_m__BrickBreaker_TGameObject_DrawSelf_m m_DrawSelf;
	_m__BrickBreaker_TGameObject_UpdateSelf_m m_UpdateSelf;
};

struct _m__BrickBreaker_TGameObject_obj {
	struct BBClass__m__BrickBreaker_TGameObject* clas;
	BBINT __m__brickbreaker_tgameobject_x;
	BBINT __m__brickbreaker_tgameobject_y;
	BBFLOAT __m__brickbreaker_tgameobject_xspeed;
	BBFLOAT __m__brickbreaker_tgameobject_yspeed;
	struct brl_max2d_image_TImage_obj* __m__brickbreaker_tgameobject_image;
	BBFLOAT __m__brickbreaker_tgameobject_xscale;
	BBFLOAT __m__brickbreaker_tgameobject_yscale;
	BBINT __m__brickbreaker_tgameobject_rotation;
};
extern struct BBClass__m__BrickBreaker_TGameObject _m__BrickBreaker_TGameObject;
void __m__BrickBreaker_TBall_New(struct _m__BrickBreaker_TBall_obj* o);
typedef struct _m__BrickBreaker_TBall_obj* (*_m__BrickBreaker_TBall_Create_TTBall_TTImageii_f)(struct brl_max2d_image_TImage_obj*,BBINT,BBINT);
struct _m__BrickBreaker_TBall_obj* _m__BrickBreaker_TBall_Create_TTBall_TTImageii(struct brl_max2d_image_TImage_obj*,BBINT,BBINT);
typedef void (*_m__BrickBreaker_TBall_UpdateSelf_m)(struct _m__BrickBreaker_TBall_obj*);
void __m__BrickBreaker_TBall_UpdateSelf(struct _m__BrickBreaker_TBall_obj*);
typedef void (*_m__BrickBreaker_TBall_CheckCollision_m)(struct _m__BrickBreaker_TBall_obj*);
void __m__BrickBreaker_TBall_CheckCollision(struct _m__BrickBreaker_TBall_obj*);
struct BBClass__m__BrickBreaker_TBall {
	struct BBClass__m__BrickBreaker_TGameObject*  super;
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
	_m__BrickBreaker_TGameObject_DrawSelf_m m_DrawSelf;
	_m__BrickBreaker_TBall_UpdateSelf_m m_UpdateSelf;
	_m__BrickBreaker_TBall_Create_TTBall_TTImageii_f f_Create_TTBall_TTImageii;
	_m__BrickBreaker_TBall_CheckCollision_m m_CheckCollision;
};

struct _m__BrickBreaker_TBall_obj {
	struct BBClass__m__BrickBreaker_TBall* clas;
	BBINT __m__brickbreaker_tgameobject_x;
	BBINT __m__brickbreaker_tgameobject_y;
	BBFLOAT __m__brickbreaker_tgameobject_xspeed;
	BBFLOAT __m__brickbreaker_tgameobject_yspeed;
	struct brl_max2d_image_TImage_obj* __m__brickbreaker_tgameobject_image;
	BBFLOAT __m__brickbreaker_tgameobject_xscale;
	BBFLOAT __m__brickbreaker_tgameobject_yscale;
	BBINT __m__brickbreaker_tgameobject_rotation;
};
extern struct BBClass__m__BrickBreaker_TBall _m__BrickBreaker_TBall;
void _m__BrickBreaker_CreateObject(struct _m__BrickBreaker_TGameObject_obj* bbt_Obj,struct brl_max2d_image_TImage_obj* bbt_Image,BBINT bbt_xstart,BBINT bbt_ystart,BBFLOAT bbt_Scale);
void __m__BrickBreaker_TPaddle_New(struct _m__BrickBreaker_TPaddle_obj* o);
typedef struct _m__BrickBreaker_TPaddle_obj* (*_m__BrickBreaker_TPaddle_Create_TTPaddle_TTImageii_f)(struct brl_max2d_image_TImage_obj*,BBINT,BBINT);
struct _m__BrickBreaker_TPaddle_obj* _m__BrickBreaker_TPaddle_Create_TTPaddle_TTImageii(struct brl_max2d_image_TImage_obj*,BBINT,BBINT);
typedef void (*_m__BrickBreaker_TPaddle_UpdateSelf_m)(struct _m__BrickBreaker_TPaddle_obj*);
void __m__BrickBreaker_TPaddle_UpdateSelf(struct _m__BrickBreaker_TPaddle_obj*);
struct BBClass__m__BrickBreaker_TPaddle {
	struct BBClass__m__BrickBreaker_TGameObject*  super;
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
	_m__BrickBreaker_TGameObject_DrawSelf_m m_DrawSelf;
	_m__BrickBreaker_TPaddle_UpdateSelf_m m_UpdateSelf;
	_m__BrickBreaker_TPaddle_Create_TTPaddle_TTImageii_f f_Create_TTPaddle_TTImageii;
};

struct _m__BrickBreaker_TPaddle_obj {
	struct BBClass__m__BrickBreaker_TPaddle* clas;
	BBINT __m__brickbreaker_tgameobject_x;
	BBINT __m__brickbreaker_tgameobject_y;
	BBFLOAT __m__brickbreaker_tgameobject_xspeed;
	BBFLOAT __m__brickbreaker_tgameobject_yspeed;
	struct brl_max2d_image_TImage_obj* __m__brickbreaker_tgameobject_image;
	BBFLOAT __m__brickbreaker_tgameobject_xscale;
	BBFLOAT __m__brickbreaker_tgameobject_yscale;
	BBINT __m__brickbreaker_tgameobject_rotation;
};
extern struct BBClass__m__BrickBreaker_TPaddle _m__BrickBreaker_TPaddle;
void __m__BrickBreaker_TDeadzone_New(struct _m__BrickBreaker_TDeadzone_obj* o);
typedef struct _m__BrickBreaker_TDeadzone_obj* (*_m__BrickBreaker_TDeadzone_Create_TTDeadzone_TTImageii_f)(struct brl_max2d_image_TImage_obj*,BBINT,BBINT);
struct _m__BrickBreaker_TDeadzone_obj* _m__BrickBreaker_TDeadzone_Create_TTDeadzone_TTImageii(struct brl_max2d_image_TImage_obj*,BBINT,BBINT);
typedef void (*_m__BrickBreaker_TDeadzone_UpdateSelf_m)(struct _m__BrickBreaker_TDeadzone_obj*);
void __m__BrickBreaker_TDeadzone_UpdateSelf(struct _m__BrickBreaker_TDeadzone_obj*);
struct BBClass__m__BrickBreaker_TDeadzone {
	struct BBClass__m__BrickBreaker_TGameObject*  super;
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
	_m__BrickBreaker_TGameObject_DrawSelf_m m_DrawSelf;
	_m__BrickBreaker_TDeadzone_UpdateSelf_m m_UpdateSelf;
	_m__BrickBreaker_TDeadzone_Create_TTDeadzone_TTImageii_f f_Create_TTDeadzone_TTImageii;
};

struct _m__BrickBreaker_TDeadzone_obj {
	struct BBClass__m__BrickBreaker_TDeadzone* clas;
	BBINT __m__brickbreaker_tgameobject_x;
	BBINT __m__brickbreaker_tgameobject_y;
	BBFLOAT __m__brickbreaker_tgameobject_xspeed;
	BBFLOAT __m__brickbreaker_tgameobject_yspeed;
	struct brl_max2d_image_TImage_obj* __m__brickbreaker_tgameobject_image;
	BBFLOAT __m__brickbreaker_tgameobject_xscale;
	BBFLOAT __m__brickbreaker_tgameobject_yscale;
	BBINT __m__brickbreaker_tgameobject_rotation;
};
extern struct BBClass__m__BrickBreaker_TDeadzone _m__BrickBreaker_TDeadzone;
extern struct brl_max2d_image_TImage_obj* _m__BrickBreaker_Bricks;
void __m__BrickBreaker_TBricks_New(struct _m__BrickBreaker_TBricks_obj* o);
typedef struct _m__BrickBreaker_TBricks_obj* (*_m__BrickBreaker_TBricks_Create_TTBricks_TTImageii_f)(struct brl_max2d_image_TImage_obj*,BBINT,BBINT);
struct _m__BrickBreaker_TBricks_obj* _m__BrickBreaker_TBricks_Create_TTBricks_TTImageii(struct brl_max2d_image_TImage_obj*,BBINT,BBINT);
typedef void (*_m__BrickBreaker_TBricks_UpdateSelf_m)(struct _m__BrickBreaker_TBricks_obj*);
void __m__BrickBreaker_TBricks_UpdateSelf(struct _m__BrickBreaker_TBricks_obj*);
struct BBClass__m__BrickBreaker_TBricks {
	struct BBClass__m__BrickBreaker_TGameObject*  super;
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
	_m__BrickBreaker_TGameObject_DrawSelf_m m_DrawSelf;
	_m__BrickBreaker_TBricks_UpdateSelf_m m_UpdateSelf;
	_m__BrickBreaker_TBricks_Create_TTBricks_TTImageii_f f_Create_TTBricks_TTImageii;
};

struct _m__BrickBreaker_TBricks_obj {
	struct BBClass__m__BrickBreaker_TBricks* clas;
	BBINT __m__brickbreaker_tgameobject_x;
	BBINT __m__brickbreaker_tgameobject_y;
	BBFLOAT __m__brickbreaker_tgameobject_xspeed;
	BBFLOAT __m__brickbreaker_tgameobject_yspeed;
	struct brl_max2d_image_TImage_obj* __m__brickbreaker_tgameobject_image;
	BBFLOAT __m__brickbreaker_tgameobject_xscale;
	BBFLOAT __m__brickbreaker_tgameobject_yscale;
	BBINT __m__brickbreaker_tgameobject_rotation;
};
extern struct BBClass__m__BrickBreaker_TBricks _m__BrickBreaker_TBricks;
void _m__BrickBreaker_CreateBricks();
void __m__BrickBreaker_TBonusBall_New(struct _m__BrickBreaker_TBonusBall_obj* o);
typedef struct _m__BrickBreaker_TBonusBall_obj* (*_m__BrickBreaker_TBonusBall_Create_TTBonusBall_TTImageii_f)(struct brl_max2d_image_TImage_obj*,BBINT,BBINT);
struct _m__BrickBreaker_TBonusBall_obj* _m__BrickBreaker_TBonusBall_Create_TTBonusBall_TTImageii(struct brl_max2d_image_TImage_obj*,BBINT,BBINT);
typedef void (*_m__BrickBreaker_TBonusBall_UpdateSelf_m)(struct _m__BrickBreaker_TBonusBall_obj*);
void __m__BrickBreaker_TBonusBall_UpdateSelf(struct _m__BrickBreaker_TBonusBall_obj*);
typedef void (*_m__BrickBreaker_TBonusBall_CheckCollision_m)(struct _m__BrickBreaker_TBonusBall_obj*);
void __m__BrickBreaker_TBonusBall_CheckCollision(struct _m__BrickBreaker_TBonusBall_obj*);
struct BBClass__m__BrickBreaker_TBonusBall {
	struct BBClass__m__BrickBreaker_TGameObject*  super;
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
	_m__BrickBreaker_TGameObject_DrawSelf_m m_DrawSelf;
	_m__BrickBreaker_TBonusBall_UpdateSelf_m m_UpdateSelf;
	_m__BrickBreaker_TBonusBall_Create_TTBonusBall_TTImageii_f f_Create_TTBonusBall_TTImageii;
	_m__BrickBreaker_TBonusBall_CheckCollision_m m_CheckCollision;
};

struct _m__BrickBreaker_TBonusBall_obj {
	struct BBClass__m__BrickBreaker_TBonusBall* clas;
	BBINT __m__brickbreaker_tgameobject_x;
	BBINT __m__brickbreaker_tgameobject_y;
	BBFLOAT __m__brickbreaker_tgameobject_xspeed;
	BBFLOAT __m__brickbreaker_tgameobject_yspeed;
	struct brl_max2d_image_TImage_obj* __m__brickbreaker_tgameobject_image;
	BBFLOAT __m__brickbreaker_tgameobject_xscale;
	BBFLOAT __m__brickbreaker_tgameobject_yscale;
	BBINT __m__brickbreaker_tgameobject_rotation;
};
extern struct BBClass__m__BrickBreaker_TBonusBall _m__BrickBreaker_TBonusBall;
void __m__BrickBreaker_TText_New(struct _m__BrickBreaker_TText_obj* o);
typedef struct _m__BrickBreaker_TText_obj* (*_m__BrickBreaker_TText_Create_TTText_STTImageFontii_f)(BBSTRING,struct brl_max2d_imagefont_TImageFont_obj*,BBINT,BBINT);
struct _m__BrickBreaker_TText_obj* _m__BrickBreaker_TText_Create_TTText_STTImageFontii(BBSTRING,struct brl_max2d_imagefont_TImageFont_obj*,BBINT,BBINT);
typedef void (*_m__BrickBreaker_TText_UpdateSelf_m)(struct _m__BrickBreaker_TText_obj*);
void __m__BrickBreaker_TText_UpdateSelf(struct _m__BrickBreaker_TText_obj*);
typedef void (*_m__BrickBreaker_TText_DrawSelf_m)(struct _m__BrickBreaker_TText_obj*);
void __m__BrickBreaker_TText_DrawSelf(struct _m__BrickBreaker_TText_obj*);
struct BBClass__m__BrickBreaker_TText {
	struct BBClass__m__BrickBreaker_TGameObject*  super;
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
	_m__BrickBreaker_TText_DrawSelf_m m_DrawSelf;
	_m__BrickBreaker_TText_UpdateSelf_m m_UpdateSelf;
	_m__BrickBreaker_TText_Create_TTText_STTImageFontii_f f_Create_TTText_STTImageFontii;
};

struct _m__BrickBreaker_TText_obj {
	struct BBClass__m__BrickBreaker_TText* clas;
	BBINT __m__brickbreaker_tgameobject_x;
	BBINT __m__brickbreaker_tgameobject_y;
	BBFLOAT __m__brickbreaker_tgameobject_xspeed;
	BBFLOAT __m__brickbreaker_tgameobject_yspeed;
	struct brl_max2d_image_TImage_obj* __m__brickbreaker_tgameobject_image;
	BBFLOAT __m__brickbreaker_tgameobject_xscale;
	BBFLOAT __m__brickbreaker_tgameobject_yscale;
	BBINT __m__brickbreaker_tgameobject_rotation;
	BBSTRING __m__brickbreaker_ttext_text;
	struct brl_max2d_imagefont_TImageFont_obj* __m__brickbreaker_ttext_font;
};
extern struct BBClass__m__BrickBreaker_TText _m__BrickBreaker_TText;
void _m__BrickBreaker_FPoints();
void __m__BrickBreaker_TScore_New(struct _m__BrickBreaker_TScore_obj* o);
typedef struct _m__BrickBreaker_TScore_obj* (*_m__BrickBreaker_TScore_Create_TTScore_STTImageFontii_f)(BBSTRING,struct brl_max2d_imagefont_TImageFont_obj*,BBINT,BBINT);
struct _m__BrickBreaker_TScore_obj* _m__BrickBreaker_TScore_Create_TTScore_STTImageFontii(BBSTRING,struct brl_max2d_imagefont_TImageFont_obj*,BBINT,BBINT);
typedef void (*_m__BrickBreaker_TScore_UpdateSelf_m)(struct _m__BrickBreaker_TScore_obj*);
void __m__BrickBreaker_TScore_UpdateSelf(struct _m__BrickBreaker_TScore_obj*);
typedef void (*_m__BrickBreaker_TScore_DrawSelf_m)(struct _m__BrickBreaker_TScore_obj*);
void __m__BrickBreaker_TScore_DrawSelf(struct _m__BrickBreaker_TScore_obj*);
struct BBClass__m__BrickBreaker_TScore {
	struct BBClass__m__BrickBreaker_TText*  super;
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
	_m__BrickBreaker_TScore_DrawSelf_m m_DrawSelf;
	_m__BrickBreaker_TScore_UpdateSelf_m m_UpdateSelf;
	_m__BrickBreaker_TScore_Create_TTScore_STTImageFontii_f f_Create_TTScore_STTImageFontii;
};

struct _m__BrickBreaker_TScore_obj {
	struct BBClass__m__BrickBreaker_TScore* clas;
	BBINT __m__brickbreaker_tgameobject_x;
	BBINT __m__brickbreaker_tgameobject_y;
	BBFLOAT __m__brickbreaker_tgameobject_xspeed;
	BBFLOAT __m__brickbreaker_tgameobject_yspeed;
	struct brl_max2d_image_TImage_obj* __m__brickbreaker_tgameobject_image;
	BBFLOAT __m__brickbreaker_tgameobject_xscale;
	BBFLOAT __m__brickbreaker_tgameobject_yscale;
	BBINT __m__brickbreaker_tgameobject_rotation;
	BBSTRING __m__brickbreaker_ttext_text;
	struct brl_max2d_imagefont_TImageFont_obj* __m__brickbreaker_ttext_font;
	BBINT __m__brickbreaker_tscore_score;
};
extern struct BBClass__m__BrickBreaker_TScore _m__BrickBreaker_TScore;
void _m__BrickBreaker_ClearFPoints();
void _m__BrickBreaker_UpdateGameState();
void _m__BrickBreaker_CreateBall();

#endif
