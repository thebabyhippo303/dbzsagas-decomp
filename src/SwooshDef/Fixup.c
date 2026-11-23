/* SwooshDef__Fixup @ 0x80214258 (size: 0xF8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
extern f32 lbl_8034649C __attribute__((section(".rodata")));
u16 TextureMgr__GetFramebufferTexture(void);
s32 TextureMgr__GetWhiteTexture(void);
void *TextureMgr__GetActiveDatabase(void);
u16 TextureSet__GetFrameBind(void *, s32);
s32 TextureMgr__AcquireScreenTexture(s32, f32, s32);
s32 fn_802475C0(void);
void SwooshDef__Fixup(void *arg0) {
    u16 v = *(u16 *)((char *)arg0 + 6);
    switch (v) {
    case 0xFFFE: {
        s32 t = TextureMgr__GetFramebufferTexture();
        s32 w;
        if ((s16)t == 0) {
            w = (s16)TextureMgr__GetWhiteTexture();
        } else {
            w = (s16)t;
        }
        *(s16 *)((char *)arg0 + 6) = (s16)w;
        *(s16 *)((char *)arg0 + 8) = (s16)w;
        break;
    }
    case 0xFFFC: {
        s32 t = fn_802475C0();
        s32 w;
        if ((s16)t == 0) {
            w = (s16)TextureMgr__GetWhiteTexture();
        } else {
            w = (s16)t;
        }
        *(s16 *)((char *)arg0 + 6) = (s16)w;
        *(s16 *)((char *)arg0 + 8) = (s16)w;
        break;
    }
    case 0xFFFD: {
        s32 t = TextureMgr__AcquireScreenTexture(0, lbl_8034649C, 0);
        if (t == 0) {
            t = (s16)TextureMgr__GetWhiteTexture();
        }
        *(s16 *)((char *)arg0 + 6) = (s16)t;
        *(s16 *)((char *)arg0 + 8) = (s16)t;
        break;
    }
    case 0xFFFF:
        *(u16 *)((char *)arg0 + 6) = TextureMgr__GetWhiteTexture();
        *(u16 *)((char *)arg0 + 8) = TextureMgr__GetWhiteTexture();
        break;
    default: {
        void *db = TextureMgr__GetActiveDatabase();
        *(u16 *)((char *)arg0 + 6) = TextureSet__GetFrameBind(db, *(u16 *)((char *)arg0 + 6));
        db = TextureMgr__GetActiveDatabase();
        *(u16 *)((char *)arg0 + 8) = TextureSet__GetFrameBind(db, *(u16 *)((char *)arg0 + 8));
        break;
    }
    }
}
