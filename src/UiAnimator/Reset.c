/* UiAnimator__Reset @ 0x8025FF28 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void UiAnimator__Reset(void *arg0) {
    void *p = M2C_FIELD(arg0, void **, 44);
    ((void (*)(void *))M2C_FIELD(p, void **, 132))((char *)arg0 + M2C_FIELD(p, s16 *, 128));
    M2C_FIELD(arg0, s8 *, 16) = 4;
    M2C_FIELD(arg0, s8 *, 18) = 0;
    M2C_FIELD(arg0, s8 *, 19) = 0;
    M2C_FIELD(arg0, s32 *, 20) = 0;
    M2C_FIELD(arg0, s32 *, 24) = 0;
    M2C_FIELD(arg0, s32 *, 32) = 0;
    M2C_FIELD(arg0, s32 *, 36) = 0;
    M2C_FIELD(arg0, s32 *, 40) = 0;
}
