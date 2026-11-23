/* Animation__SetFrameFraction @ 0x8023E7F0 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

u16 Animation__GetLength(void *);
void Animation__SetRawFrame(s16 *, s32);

void Animation__SetFrameFraction(s16 *arg0, f32 farg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0xC);
    if ((temp_r3 != NULL) && (M2C_FIELD(arg0, s32 *, 8) & 0x800)) {
        Animation__SetRawFrame(arg0, (u16) (s32) ((f32) (f64) Animation__GetLength(temp_r3) * farg0));
    }
}
