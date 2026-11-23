/* MenuInput__ShiftComboSequenceEntries @ 0x80101CB0 (size: 0x1A4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8;
typedef unsigned char u8;
typedef int s32;
extern char *ComboData__GetCurrentValuePointer(void *, s32, s32);
extern void *lbl_803DC71C;

void MenuInput__ShiftComboSequenceEntries(void *self, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 i;
    char *p;
    char *q;
    u8 b;

    i = 0;
    if (a2 >= 0) {
        do {
            p = ComboData__GetCurrentValuePointer(lbl_803DC71C, a1, i);
            b = p[0];
            if ((s8)b > a2) {
                p[0] = b + a4;
            }
            b = p[1];
            if ((s8)b > a2) {
                p[1] = b + a4;
            }
            i++;
        } while (i <= a2);
    }
    if (a4 > 0) {
        i = a3 - 1;
        if (i > a2) {
            do {
                p = ComboData__GetCurrentValuePointer(lbl_803DC71C, a1, i);
                q = ComboData__GetCurrentValuePointer(lbl_803DC71C, a1, i + 1);
                *(s32 *)q = *(s32 *)p;
                b = q[0];
                if (!(b & 0x80)) {
                    q[0] = b + 1;
                }
                b = q[1];
                if (!(b & 0x80)) {
                    q[1] = b + 1;
                }
                i--;
            } while (i > a2);
        }
    } else {
        for (i = a2; i < a3 - 1; ) {
            s32 k = i;
            i += 1;
            p = ComboData__GetCurrentValuePointer(lbl_803DC71C, a1, k);
            q = ComboData__GetCurrentValuePointer(lbl_803DC71C, a1, i);
            *(s32 *)p = *(s32 *)q;
            b = p[0];
            if (!(b & 0x80)) {
                p[0] = b - 1;
            }
            b = p[1];
            if (!(b & 0x80)) {
                p[1] = b - 1;
            }
        }
        p = ComboData__GetCurrentValuePointer(lbl_803DC71C, a1, a3 - 1);
        p[3] = 0;
        p[0] = -1;
        p[2] = 0;
        p[1] = -1;
    }
}
