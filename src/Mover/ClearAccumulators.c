/* Mover__ClearAccumulators @ 0x802B6F34 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void MathUtil__AdvanceBallisticPathTime(void *, f32);
M2C_UNK Simple__ClearAccumulators(s32);
M2C_UNK Simple__ApplyStateFlags(s32);
M2C_UNK Mover__CheckBallisticEnd(void *);

void Mover__ClearAccumulators(void *arg0, f32 farg0) {
    s32 temp_r30;
    void *path;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x258) != 0) {
        Simple__ClearAccumulators((s32) arg0);
        path = (char *)arg0 + 0x554;
        if (*(s32 *)path != 0) {
            MathUtil__AdvanceBallisticPathTime(path, farg0);
            temp_r30 = M2C_FIELD(arg0, s32 *, 0x554);
            if (temp_r30 == 0) {
                Mover__CheckBallisticEnd(arg0);
                M2C_FIELD(arg0, s32 *, 0x538) = temp_r30;
                Simple__ApplyStateFlags((s32) arg0);
            }
        }
    }
}
