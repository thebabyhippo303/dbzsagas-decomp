/* Timer__UpdateFrameDelta @ 0x80185124 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


u32 Timer__GetMilliseconds(void);
extern f32 lbl_8033DD18 __attribute__((section(".data")));
extern f32 lbl_8033DD1C __attribute__((section(".data")));
extern u32 lbl_803A1AF8[15] __attribute__((section(".data")));
extern f32 lbl_803DCBA0;
extern s32 lbl_803DD4B4;

/* Keep the int-to-float constant pool at the same low 16 bits as the DOL. */
static const char pool_pad[0xDD10] = {1};

void Timer__UpdateFrameDelta(void) {
    u32 now;
    s32 idx;
    f32 delta;

    now = Timer__GetMilliseconds();
    idx = lbl_803DD4B4;
    delta = (f32)(now - lbl_803A1AF8[idx]) * lbl_8033DD18;
    lbl_803DCBA0 = delta;
    if (!(delta <= lbl_8033DD1C)) {
        lbl_803DCBA0 = lbl_8033DD1C;
    }
    lbl_803A1AF8[idx] = now;
    lbl_803DD4B4 = idx + 1;
    if (lbl_803DD4B4 == 15) {
        lbl_803DD4B4 = 0;
    }
}
