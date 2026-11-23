/* GameMenu__ShowRows @ 0x80264CA8 (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct RowVt { char pad[472]; short adjust; short unused; void (*fn)(void *); } RowVt;
typedef struct Row { char pad[412]; RowVt *vt; } Row;
void Sphere__Render(void *);
void GameMenu__ShowRows(void *self) {
    Row **p = (Row **)((char *)self + 828);
    int n = 18;
    Row *r;

    do {
        r = p[-54];
        r->vt->fn((char *)r + r->vt->adjust);
        r = p[-36];
        r->vt->fn((char *)r + r->vt->adjust);
        r = p[-18];
        r->vt->fn((char *)r + r->vt->adjust);
        r = *p;
        p++;
        r->vt->fn((char *)r + r->vt->adjust);
        n--;
    } while (n != 0);
    Sphere__Render((char *)self + 196);
    M2C_FIELD(self, s32 *, 1096) = n;
}
