/* AvaSurf__ResizeRows @ 0x800B7F70 (size: 0xF8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Near-match 98.4%: AvaSurf__ResizeRows @ 0x800B7F70. Wall: first stfsx rA/rB (target stfsx f13,r10,r11). */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0
typedef struct Surf { char pad[44]; char *rows; } Surf;
void Mem__DeleteArray(void *);
u32 Mem__NewArray(u32);
extern f32 lbl_803213D8 __attribute__((section(".data")));
extern f32 lbl_803213DC __attribute__((section(".data")));
extern f32 lbl_803213E0 __attribute__((section(".data")));
extern f32 lbl_803213E4 __attribute__((section(".data")));
void AvaSurf__ResizeRows(void *self, s32 n) {
    Surf *s = (Surf *)self;
    s32 i;
    s32 off;
    void *rows = (void *)s->rows;
    if (rows != NULL) {
        Mem__DeleteArray(rows);
    }
    s->rows = (char *)Mem__NewArray((u32)(n * 40));
    if (n > 0) {
        f32 a = lbl_803213D8;
        f32 b = lbl_803213DC;
        f32 c = lbl_803213E0;
        f32 d = lbl_803213E4;
        off = 0;
        for (i = n; i != 0; --i) {
            *(f32 *)&s->rows[off] = a;
            *(f32 *)&s->rows[off + 4] = b;
            *(f32 *)&s->rows[off + 8] = c;
            *(f32 *)&s->rows[off + 12] = d;
            *(f32 *)&s->rows[off + 16] = b;
            *(f32 *)&s->rows[off + 20] = a;
            *(f32 *)&s->rows[off + 24] = b;
            *(f32 *)&s->rows[off + 28] = b;
            *(s32 *)&s->rows[off + 32] = 0;
            *(s32 *)&s->rows[off + 36] = 0;
            off += 40;
        }
    }
}
