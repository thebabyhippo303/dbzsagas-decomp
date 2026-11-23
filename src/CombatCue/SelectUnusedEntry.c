/* CombatCue__SelectUnusedEntry @ 0x80133830 (size: 0xD4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
s32 Rand__RangeInt(void *, s32, s32);
s32 CombatCue__FindNthUnusedEntry(void *, s32, s32);
void sprintf(char *, const char *, ...);
extern char *lbl_803DC3C0;
extern s32 lbl_803DD634[2];

void CombatCue__SelectUnusedEntry(char *self, s32 idx, char *out) {
    s32 off = idx << 4;
    s32 *cnt = (s32 *)(self + 8);
    s32 *used;
    s32 c = *(s32 *)((char *)cnt + off);
    s32 n;
    s32 left;
    if (c != 0) {
        if (idx == 2) {
            n = *(s32 *)(*(char **)(lbl_803DC3C0 + 568) + 4) - 1;
        } else {
            n = CombatCue__FindNthUnusedEntry(self, idx, Rand__RangeInt(lbl_803DD634, 1, c));
            used = (s32 *)(self + 4);
            *(s32 *)((char *)used + off) |= 1 << (n - 1);
            left = *(s32 *)((char *)cnt + off) - 1;
            *(s32 *)((char *)cnt + off) = left;
            if (left == 0) {
                *(s32 *)((char *)cnt + off) = *(s32 *)(self + off);
                *(s32 *)((char *)used + off) = left;
            }
        }
        sprintf(out, "%02d", n);
    }
}
