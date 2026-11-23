/* FileStream__FindFreeSlot @ 0x8017F7D0 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;

extern s32 lbl_803DCB54;
extern s32 lbl_803DCB58;

void *FileStream__FindFreeSlot(void) {
    s32 i;
    s32 tbl;
    s32 off;
    s32 cur;

    i = 0;
    if (i < lbl_803DCB58) {
        tbl = lbl_803DCB54;
        off = 0;
        cur = tbl;
        do {
            if (*(s32 *)(off + tbl) == 0) {
                return (void *)cur;
            }
            i += 1;
            cur += 0x18;
            off += 0x18;
        } while (i < lbl_803DCB58);
    }
    return 0;
}
