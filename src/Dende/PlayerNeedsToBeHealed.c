/* Dende__PlayerNeedsToBeHealed @ 0x80040920 (size: 0xCC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * Game__GetPlayerImpl(void *, s32);
void Script__PushInt(void *, s32, s32);
extern f32 lbl_80311C0C __attribute__((section(".data")));
extern f32 lbl_80311C10 __attribute__((section(".data")));
extern void *lbl_803DC3C0;

void Dende__PlayerNeedsToBeHealed(void *arg0, s32 arg1) {
    void *p0;
    s32 result;
    f32 numerator;
    f32 denominator;
    void *p1;

    result = 0;
    p0 = Game__GetPlayerImpl(lbl_803DC3C0, 0);
    p1 = Game__GetPlayerImpl(lbl_803DC3C0, 1);
    denominator = M2C_FIELD(p0, f32 *, 0x28C);
    numerator = M2C_FIELD(p0, f32 *, 0x288);
    if (!(numerator / denominator >= lbl_80311C0C) && (numerator > lbl_80311C10)) {
        result = 1;
    } else {
        if (p1 != NULL) {
            numerator = M2C_FIELD(p1, f32 *, 0x288);
            denominator = M2C_FIELD(p1, f32 *, 0x28C);
            if (!(numerator / denominator >= lbl_80311C0C)) {
                if (!(numerator <= lbl_80311C10)) {
                    result = 1;
                }
            }
        }
    }
    Script__PushInt(arg0, arg1, result);
}
