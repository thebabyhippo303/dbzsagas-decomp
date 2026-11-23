/* SaveMenu__MarkSelectedSlotOccupied @ 0x80050DDC (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void MenuPanel__Hide(void *, s32, f32);
extern void *lbl_803DC368;
extern f32 lbl_80319D60 __attribute__((section(".data")));
extern M2C_UNK lbl_80319D50 __attribute__((section(".data")));

typedef struct { s32 x0; s32 x4; } MarkTmp;

void SaveMenu__MarkSelectedSlotOccupied(void *arg0) {
    s32 *p;

    p = M2C_FIELD(lbl_803DC368, s32 *, 0x5388);
    {
        s32 i = M2C_FIELD(p, s32 *, 72);

        p = (s32 *) ((char *) p + 96);
        p[i] = 1;
    }
    MenuPanel__Hide((char *) arg0 + 0x3DA28, 0, lbl_80319D60);
    {
        MarkTmp tmp;
        void *vt;

        tmp = *(MarkTmp *) &lbl_80319D50;
        vt = M2C_FIELD(arg0, void **, 0x19C);
        M2C_FIELD(vt, void (**)(void *, void *), 1036)((char *) arg0 + M2C_FIELD(vt, s16 *, 1032), &tmp);
    }
}
