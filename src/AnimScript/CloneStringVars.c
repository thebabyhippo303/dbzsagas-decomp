/* AnimScript__CloneStringVars @ 0x80235024 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
int strlen(const char *);
void *MemHeap__Alloc(unsigned int, unsigned int);
char *strcpy(char *, const char *);
void AnimScript__CloneStringVars(void *arg0, void *arg1) {
    void *self = arg0;
    void *inner = M2C_FIELD(self, void **, 0x1C);
    u32 n = M2C_FIELD(inner, u32 *, 0x14);
    u32 i;
    s32 strOff;
    char *cursor;
    char *offp;
    if (n == 0) {
        return;
    }
    if (M2C_FIELD(self, s32 *, 0x40) == 0) {
        return;
    }
    strOff = M2C_FIELD(self, s32 *, 0x3C);
    cursor = (char *)arg1 + (strOff + 52);
    i = 0;
    if (i >= n) {
        return;
    }
    offp = NULL;
    do {
        u8 *types = M2C_FIELD(self, u8 **, 0x2C);
        if (types[i] == 5) {
            s32 allocLen = strlen(cursor) + 1;
            char *newstr = (char *)MemHeap__Alloc(allocLen, 8);
            s32 arr;
            strcpy(newstr, cursor);
            cursor += allocLen;
            arr = M2C_FIELD(self, s32 *, 0x28);
            *(s32 *)(offp + arr) = (s32)newstr;
        }
        i++;
        offp += 4;
    } while (i < M2C_FIELD(M2C_FIELD(self, void **, 0x1C), u32 *, 0x14));
}
