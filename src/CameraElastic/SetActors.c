/* CameraElastic__SetActors @ 0x800BE2F0 (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern f32 lbl_803DD530;

s32 CCameraCurve__SetParameters(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) lbl_803DD530;
    M2C_FIELD(arg0, s32 *, 0x44) = arg2;
    M2C_FIELD(arg0, s32 *, 0x48) = arg3;
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
    return 1;
}
