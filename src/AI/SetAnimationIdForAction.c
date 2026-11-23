/* AI__SetAnimationIdForAction @ 0x800750D4 (size: 0x190, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
void AI__SetAnimationIdForAction(void *self, s32 id) {
    s32 v;
    if (id == 0) {
        M2C_FIELD(self, s32 *, 0x5A0) = id;
        return;
    }
    v = 0;
    id += 7;
    M2C_FIELD(self, s32 *, 0x5A0) = 0;
    switch (id) {
    case 7:
        v = 5;
    case 22:
    case 25:
done:
        M2C_FIELD(self, s32 *, 0x5A0) = v;
        return;
    case 8: v = 17; goto done;
    case 9: v = 30; goto done;
    case 11: v = 37; goto done;
    case 12: v = 38; goto done;
    case 13: v = 39; goto done;
    case 14: v = 40; goto done;
    case 15: v = 29; goto done;
    case 16: v = 26; goto done;
    case 17: v = 28; goto done;
    case 18: v = 33; goto done;
    case 19: v = 27; goto done;
    case 20: v = 19; goto done;
    case 23: v = 18; goto done;
    case 21: v = 36; goto done;
    case 10: v = 31; goto done;
    case 24: v = 32; goto done;
    case 26: v = 20; goto done;
    case 27: v = 8; goto done;
    }
}
