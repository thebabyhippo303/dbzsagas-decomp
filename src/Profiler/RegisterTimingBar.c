/* Profiler__RegisterTimingBar @ 0x8018567C (size: 0xC8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef struct { char pad[472]; s32 value; char name[64]; char tail[12]; } Entry;
int strlen(const char *);
char *strncpy(char *, char *, u32);
extern void *lbl_803DCBC8;
extern s32 *lbl_803DCBCC;
extern s32 lbl_803DCBD0;
extern s32 lbl_803DCBD4;
extern s32 lbl_803DCBE4;
extern s32 lbl_803DD4F4;
s32 Profiler__RegisterTimingBar(s32 idx, char *name, s32 value) {
    s32 off;
    s32 next;
    s32 cnt;
    s32 *pCount;
    if (lbl_803DCBC8 == NULL) {
        return 0;
    }
    if (idx >= lbl_803DCBD0) {
        return 0;
    }
    off = idx * 552;
    if (strlen((char *)lbl_803DCBC8 + off + 476) != 0) {
        return 0;
    }
    strncpy((char *)lbl_803DCBC8 + off + 476, name, 64);
    next = idx + 1;
    pCount = &lbl_803DD4F4;
    ((Entry *)(off + (s32)lbl_803DCBC8))->value = value;
    cnt = *pCount;
    lbl_803DCBCC[cnt] = idx;
    cnt++;
    *pCount = cnt;
    if (next > lbl_803DCBD4) {
        lbl_803DCBD4 = next;
    }
    lbl_803DCBE4 = 1;
    return 1;
}
