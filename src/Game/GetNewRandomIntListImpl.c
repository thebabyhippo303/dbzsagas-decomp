/* Game__GetNewRandomIntListImpl @ 0x800F0970 (size: 0xCC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
extern char lbl_803DD634 __attribute__((section(".sbss")));
s32 Rand__RangeInt(void *, s32, s32);
void Game__GetNewRandomIntListImpl(s32 *list, s32 n, s32 lo, s32 hi) {
    s32 tries = 0;
    s32 found;
    s32 r;
    s32 i;
    do {
        found = 0;
        r = Rand__RangeInt(&lbl_803DD634, lo, hi);
        for (i = 0; i < n; i++) {
            if (r == list[i]) {
                found = 1;
                break;
            }
        }
        tries++;
    } while (found && tries < 20);
    for (i = n - 1; i > 0; i--) {
        list[i] = list[i - 1];
    }
    list[0] = r;
}
