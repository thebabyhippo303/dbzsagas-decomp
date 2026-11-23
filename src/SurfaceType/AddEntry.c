/* SurfaceType__AddEntry @ 0x801F905C (size: 0x1B8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32;
u32 Mem__NewArray(u32);
char *strncpy(char *, char *, u32);
typedef struct Row { char *name; s32 f4; s32 f8; s32 fC; } Row;
typedef struct ST { s32 count; void *vt; s32 f8; Row *rows; s32 maxlen; } ST;
#define RP(s) ((Row *)(s->count * 16 + (s32)s->rows))

s32 SurfaceType__AddEntry(ST *s, char *name, u32 len, s32 flag, s32 mode) {
    char *dst;
    s32 off;
    s32 base;

    base = (s32)s->rows;
    off = s->count * 16;
    *(char **)(off + base) = (char *)Mem__NewArray(len + 1);
    dst = RP(s)->name;
    if (dst == 0) {
        return 0;
    }
    strncpy(dst, name, len);
    RP(s)->name[len] = 0;
    if ((s32)len > s->maxlen) {
        s->maxlen = len;
    }
    if (flag != 0) {
        RP(s)->f4 = 0;
    } else {
        RP(s)->f4 = 1;
    }
    switch (mode) {
    case 0:
        RP(s)->f8 = mode;
        RP(s)->fC = 1;
        break;
    case 1:
        RP(s)->f8 = mode;
        RP(s)->fC = mode;
        break;
    case 2:
        RP(s)->f8 = flag ^ 1;
        RP(s)->fC = 0;
        break;
    }
    if (RP(s)->f8 != 0) {
        s->f8 = s->f8 + 1;
    }
    s->count = s->count + 1;
    return 1;
}
