/* ParticleDef__Fixup @ 0x80214108 (size: 0x150, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
extern f32 lbl_80346490 __attribute__((section(".rodata")));
extern f32 lbl_80346494 __attribute__((section(".data")));
extern f32 lbl_80346498 __attribute__((section(".rodata")));
u16 TextureMgr__GetFramebufferTexture(void);
s32 TextureMgr__GetWhiteTexture(void);
void *TextureMgr__GetActiveDatabase(void);
u16 TextureSet__GetFrameBind(void *, s32);
s32 TextureMgr__AcquireScreenTexture(s32, f32, s32);
s32 fn_802475C0(void);
void ParticleDef__Fixup(void *arg0) {
    u16 v = *(u16 *)((char *)arg0 + 12);
    switch (v) {
    case 0xFFFD: {
        s32 t = TextureMgr__GetFramebufferTexture();
        s32 w;
        if ((s16)t == 0) {
            w = (s16)TextureMgr__GetWhiteTexture();
        } else {
            w = (s16)t;
        }
        *(s16 *)((char *)arg0 + 12) = (s16)w;
        *(s16 *)((char *)arg0 + 14) = (s16)w;
        break;
    }
    case 0xFFFE: {
        s32 t = fn_802475C0();
        s32 w;
        if ((s16)t == 0) {
            w = (s16)TextureMgr__GetWhiteTexture();
        } else {
            w = (s16)t;
        }
        *(s16 *)((char *)arg0 + 12) = (s16)w;
        *(s16 *)((char *)arg0 + 14) = (s16)w;
        break;
    }
    case 0xFFFC: {
        s32 t = TextureMgr__AcquireScreenTexture(0, lbl_80346490, 0);
        if (t == 0) {
            t = (s16)TextureMgr__GetWhiteTexture();
        }
        *(s16 *)((char *)arg0 + 12) = (s16)t;
        *(s16 *)((char *)arg0 + 14) = (s16)t;
        break;
    }
    case 0xFFFF:
        *(u16 *)((char *)arg0 + 12) = TextureMgr__GetWhiteTexture();
        *(u16 *)((char *)arg0 + 14) = TextureMgr__GetWhiteTexture();
        break;
    default: {
        void *db = TextureMgr__GetActiveDatabase();
        *(u16 *)((char *)arg0 + 12) = TextureSet__GetFrameBind(db, *(u16 *)((char *)arg0 + 12));
        db = TextureMgr__GetActiveDatabase();
        *(u16 *)((char *)arg0 + 14) = TextureSet__GetFrameBind(db, *(u16 *)((char *)arg0 + 14));
        break;
    }
    }
    if (*(s32 *)((char *)arg0 + 84) & 8) {
        *(f32 *)((char *)arg0 + 72) = lbl_80346494;
    }
    {
        s32 i;
        char *p = (char *)arg0 + 100;
        f32 k = lbl_80346498;
        for (i = 0; i < 6; i++, p += 36) {
        if (*(u8 *)(p + 20) == 0) {
            *(f32 *)(p - 4) *= k;
            *(f32 *)(p + 4) *= k;
        }
        }
    }
}
