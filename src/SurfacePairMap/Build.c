/* SurfacePairMap__Build @ 0x801F8664 (size: 0x214, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32;
void Mem__DeleteArray(void *);
u32 Mem__NewArray(u32);
typedef struct Ent { s32 a, b, c, d; } Ent;
typedef struct Src { s32 n; s32 pad; s32 m; s32 ents; } Src;
typedef struct Map { s32 total; char pad[0x10]; Src *src; s32 rows; s32 cols; s32 a; s32 b; } Map;

s32 SurfacePairMap__Build(Map *self, Src *src) {
    s32 i, j, k;
    s32 oA, oB, oC, oD, oE;
    s32 flag;
    s32 zero;
    s32 mm, nn, t;

    if (self->src != 0 || src == 0) {
        return 0;
    }
    self->a = Mem__NewArray(src->n * 4);
    if (self->a == 0) {
        return 0;
    }
    self->b = Mem__NewArray(src->n * 4);
    if (self->b == 0) {
        if (self->a != 0) {
            Mem__DeleteArray((void *)self->a);
        }
        return 0;
    }
    i = 0;
    j = src->m;
    k = 0;
    if (k < src->n) {
        zero = 0;
        oA = 0;
        oB = 0;
        oC = 0;
        oE = j * 4;
        oD = 0;
        do {
            flag = *(s32 *)(oC + src->ents + 8);
            if (flag != 0) {
                if (i >= src->m) {
                    if (self->a != 0) {
                        Mem__DeleteArray((void *)self->a);
                    }
                    if (self->b != 0) {
                        Mem__DeleteArray((void *)self->b);
                    }
                    self->a = zero;
                    self->b = zero;
                    return 0;
                }
                *(s32 *)(oB + self->a) = i;
                i++;
                *(s32 *)(oD + self->b) = k;
                oD += 4;
            } else {
                if (j >= src->n) {
                    if (self->a != 0) {
                        Mem__DeleteArray((void *)self->a);
                    }
                    if (self->b != 0) {
                        Mem__DeleteArray((void *)self->b);
                    }
                    self->a = flag;
                    self->b = flag;
                    return 0;
                }
                *(s32 *)(oA + self->a) = j;
                j++;
                *(s32 *)(oE + self->b) = k;
                oE += 4;
            }
            k++;
            oA += 4;
            oB += 4;
            oC += 16;
        } while (k < src->n);
    }
    if (i != src->m || j != src->n) {
        if (self->a != 0) {
            Mem__DeleteArray((void *)self->a);
        }
        if (self->b != 0) {
            Mem__DeleteArray((void *)self->b);
        }
        self->a = 0;
        self->b = 0;
        return 0;
    }
    self->src = src;
    mm = src->m;
    self->rows = mm;
    t = mm - 1;
    nn = src->n;
    self->cols = nn;
    self->total = (mm * ((nn << 1) - t)) >> 1;
    return 1;
}
