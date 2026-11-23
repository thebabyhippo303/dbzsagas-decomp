/* TexBind__CreateWhite @ 0x8024FBC4 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef signed short s16; typedef unsigned short u16; typedef signed int s32; typedef unsigned int u32;
#define NULL 0
extern s8 lbl_80347974 __attribute__((section(".data")));
extern s8 lbl_803B1317 __attribute__((section(".data")));
void Debug__FormatMessage(char *fmt, ...);
u16 TexBind__Allocate(void);
void *memset(void *s, s32 c, u32 n);
void fn_8024F100(u16 id, s32 a, s32 b, s32 c, void *buf);
void TexBind__CreateWhite(void *self) {
    s32 buf;
    Debug__FormatMessage(&lbl_80347974, 4, 4);
    *(u16 *)((char *)self + 4) = TexBind__Allocate();
    buf = (s32)&lbl_803B1317 & ~0x1F;
    memset((void *)buf, 255, 64);
    fn_8024F100(*(u16 *)((char *)self + 4), 4, 4, 4, (void *)buf);
}
