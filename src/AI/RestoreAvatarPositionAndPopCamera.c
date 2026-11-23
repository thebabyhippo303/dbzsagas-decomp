/* AI__RestoreAvatarPositionAndPopCamera @ 0x80075AA0 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0
extern f32 lbl_8031F02C __attribute__((section(".data")));
extern void *const lbl_803DC5B4 __attribute__((section(".sdata")));
void Avatar__SetPositionImpl(void *, void *, f32);
void CameraBag__Pop(void *);
s32 AI__RestoreAvatarPositionAndPopCamera(void *arg0) {
    void *t9 = *(void **)((char *)arg0 + 908);
    void *t11 = *(void **)((char *)t9 + 200);
    if (*(s32 *)((char *)t11 + 720) != 0) {
        *(f32 *)((char *)t11 + 660) = lbl_8031F02C;
    }
    if (*(s32 *)((char *)arg0 + 1408) != 0) {
        void *a = *(void **)((char *)arg0 + 912);
        Avatar__SetPositionImpl(a, (char *)arg0 + 1000, *(f32 *)((char *)a + 1884));
        *(s32 *)((char *)arg0 + 1408) = 0;
        CameraBag__Pop(lbl_803DC5B4);
    }
    return 0;
}
