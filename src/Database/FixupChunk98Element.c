/* Database__FixupChunk98Element @ 0x802139D0 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef float f32;

void *Database__GetArrayElement(void *, s32);
extern f32 lbl_8034648C __attribute__((section(".data")));

void Database__FixupChunk98Element(s32 arg0, void *arg1) {
    f32 flt = lbl_8034648C;
    void *a1 = arg1;
    int flag = 0;
    int z = 0;
    char *fp = (char *)arg0 + 8;
    char *idxp = (char *)0;
    int cnt = 2;
    f32 v;

    do {
        if (flag != 0) {
            *(s32 *)(idxp + arg0) = z;
        } else {
            *(s32 *)(idxp + arg0) = (s32)Database__GetArrayElement(a1, *(s32 *)(idxp + arg0));
        }
        v = *(f32 *)fp;
        idxp += 4;
        fp += 4;
        if (v == flt) {
            flag = 1;
        }
        cnt--;
    } while (cnt != 0);
}
