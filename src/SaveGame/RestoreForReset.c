/* SaveGame__RestoreForReset @ 0x8014EFB4 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0
void SaveGame__PrepareRestoreForReset(void *);
typedef struct { s32 f0; s32 f4; } SaveGlob;
extern SaveGlob lbl_803946C4 __attribute__((section(".data")));
void SaveGame__RestoreForReset(void *self) {
    s32 saved;
    s32 zero = 0;
    saved = lbl_803946C4.f4;
    lbl_803946C4.f4 = 99;
    *(s32 *)((char *)self + 76) = zero;
    *(s32 *)((char *)self + 80) = 1;
    *(s32 *)((char *)self + 20) = 2;
    SaveGame__PrepareRestoreForReset(self);
    *(s32 *)((char *)self + 80) = zero;
    lbl_803946C4.f4 = saved;
}