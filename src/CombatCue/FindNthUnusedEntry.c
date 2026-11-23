/* CombatCue__FindNthUnusedEntry @ 0x80133904 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef unsigned int u32;

typedef struct {
    int field_0;
    int field_4;
    int field_8;
    char name[4];
} CombatCueEntry;

s32 CombatCue__FindNthUnusedEntry(CombatCueEntry *entries, s32 idx, s32 n) {
    s32 i = 0;
    u32 mask = 1;
    s32 found = 0;
    if (i != n) {
        s32 off = idx * 16;
        char *base = (char *)entries + 4;
        s32 w = *(s32 *)(base + off);
        do {
            if ((w & mask) != (s32)mask) {
                found++;
            }
            mask <<= 1;
            i++;
        } while (found != n);
    }
    return i;
}
