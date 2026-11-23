/* CmdCon__FindContextIndex @ 0x8018B424 (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

int String__CompareIgnoreCase(const char *, const char *);
s32 CmdCon__FindContextIndex(s32 arg0, s8 *arg1) {
    void *arr;
    s32 i;
    s32 idx;
    s32 cnt;
    s8 **p;

    i = 0;
    if (i < M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 4)) {
        do {
            arr = M2C_FIELD(arg0, void **, 8);
            idx = i;
            if (i < 0) {
                idx = M2C_FIELD(arr, s32 *, 4) - 1;
            }
            cnt = M2C_FIELD(arr, s32 *, 4);
            if ((idx >= cnt) || (cnt == 0)) {
                p = NULL;
            } else {
                p = (s8 **)(M2C_FIELD(arr, s32 *, 0) + idx * 4);
            }
            if (String__CompareIgnoreCase(arg1, *p) == 0) {
                return i;
            }
            i++;
        } while (i < M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 4));
    }
    return -1;
}
