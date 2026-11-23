/* Camera__GetCurrentCamPos @ 0x8002CB4C (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef float f32;

#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

void Script__PushFloat(void *, void *, float);
extern void *lbl_803DC5B4 __attribute__((section(".sdata")));

void Camera__GetCurrentCamPos(void *arg0, void *arg1) {
    volatile s32 sp8;
    volatile s32 spC;
    volatile s32 sp10;
    void *base;
    s32 a;
    s32 b;
    s32 c;
    f32 *fp;

    base = (char *)lbl_803DC5B4 + 0xA0;
    a = M2C_FIELD(base, s32 *, 0);
    b = M2C_FIELD(base, s32 *, 4);
    c = M2C_FIELD(base, s32 *, 8);
    sp8 = a;
    spC = b;
    sp10 = c;
    fp = (f32 *)&sp8;
    Script__PushFloat(arg0, arg1, fp[0]);
    Script__PushFloat(arg0, arg1, fp[1]);
    Script__PushFloat(arg0, arg1, fp[2]);
}
