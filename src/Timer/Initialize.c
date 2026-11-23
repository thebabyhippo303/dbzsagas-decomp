/* Timer__Initialize @ 0x80185034 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32; typedef unsigned long long u64;
extern u64 lbl_803DD4D8 __attribute__((section(".sdata")));
extern u32 lbl_803DCBC4 __attribute__((section(".sdata")));
extern u32 lbl_803DCBE8 __attribute__((section(".sdata")));
extern u32 lbl_803DD4F0 __attribute__((section(".sdata")));
extern u32 lbl_803DD4D4 __attribute__((section(".sdata")));
extern u32 lbl_803A1AF8[] __attribute__((section(".data")));
extern u64 OSGetTime(void);
extern u32 Timer__GetMilliseconds(void);
void Timer__Initialize(void) {
    u64 t;
    u32 ms;
    u32 *p;
    int j;
    t = OSGetTime();
    lbl_803DD4D8 = t;
    ms = Timer__GetMilliseconds();
    lbl_803DCBC4 = ms;
    if (lbl_803DCBE8 != 0) {
        lbl_803DD4F0 = ms;
        lbl_803DCBE8 = 0;
    }
    lbl_803DD4D4 = 0;
    p = lbl_803A1AF8;
    p = p + 14;
    for (j = 0; j < 15; j++) {
        *p = ms;
        p = p - 1;
    }
}