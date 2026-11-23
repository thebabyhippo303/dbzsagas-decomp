/* Mover__GetPairCellFactor @ 0x802BBA10 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
extern f32 lbl_80352348 __attribute__((section(".data")));
extern M2C_UNK lbl_803A3684 __attribute__((section(".data")));
s32 SurfSurf__GetPairCell(void *arg0);
f32 Mover__GetPairCellFactor(void)
{
    void *cell = (void *)SurfSurf__GetPairCell(&lbl_803A3684);
    f32 f;

    if (cell != NULL) {
        f = *(f32 *)((char *)cell + 8);
        return f + f;
    }
    return lbl_80352348;
}
