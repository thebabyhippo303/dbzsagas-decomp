/* SurfaceType__FormatHeader @ 0x801F93A8 (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef struct ST { s32 f0; void *vt; s32 f8; s32 fC; s32 width; } ST;
extern int sprintf(char *, const char *, ...);
extern char *strcat(char *, const char *);
extern char lbl_8034472C[] __attribute__((section(".data")));
extern char lbl_80344734[] __attribute__((section(".data")));
extern char lbl_8034473C[] __attribute__((section(".data")));
extern char lbl_80344748[] __attribute__((section(".data")));
extern char lbl_80344754[] __attribute__((section(".data")));

s32 SurfaceType__FormatHeader(ST *self, char *dest, s32 size) {
    s32 remain;
    s32 width;

    *dest = 0;
    remain = size - 1;
    width = self->width;
    remain -= width;
    if (remain >= 0) {
        sprintf(dest, lbl_8034472C, width, lbl_80344734);
        remain -= 10;
        if (remain < 0) {
            return 1;
        }
        strcat(dest, lbl_8034473C);
        remain -= 10;
        if (remain < 0) {
            return 1;
        }
        strcat(dest, lbl_80344748);
        remain -= 10;
        if (remain < 0) {
            return 1;
        }
        strcat(dest, lbl_80344754);
    }
    return 1;
}
