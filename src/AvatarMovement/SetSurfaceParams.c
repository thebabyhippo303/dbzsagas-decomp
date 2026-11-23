/* AvatarMovement__SetSurfaceParams @ 0x800B6810 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
extern u8 lbl_803B1DDC[] __attribute__((section(".data")));
void EventDispatcher__Send(void *, s32, s32, s32, s32);
void AvatarMovement__SetSurfaceParams(void *arg0, void *arg1) {
    if (arg1 == NULL) {
        arg1 = (char *)arg0 + 8;
    }
    if (arg1 == *(void **)arg0) {
        return;
    }
    *(void **)arg0 = arg1;
    EventDispatcher__Send(lbl_803B1DDC, 0x10010, 0, 0, 0);
}
