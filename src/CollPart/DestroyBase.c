/* CollPart__DestroyBase @ 0x8029E748 (size: 0x104, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern void Mem__Delete(void *p);
extern void Mem__DeleteArray(void *p);
extern char lbl_80350480[] __attribute__((section(".data")));
void CollPart__DestroyBase(char *self, int flags) {
    int i;
    int off;
    *(char **)self = lbl_80350480;
    Mem__Delete(*(void **)(self + 24));
    i = 0;
    if (i < *(int *)(self + 8)) {
        off = 0;
        do {
            i++;
            Mem__Delete(*(void **)(off + *(int *)(self + 16)));
            off += 4;
        } while (i < *(int *)(self + 8));
    }
    if (*(void **)(self + 16) != 0) {
        Mem__DeleteArray(*(void **)(self + 16));
    }
    *(int *)(self + 16) = 0;
    *(int *)(self + 8) = 0;
    i = 0;
    if (i < *(int *)(self + 12)) {
        off = 0;
        do {
            i++;
            Mem__Delete(*(void **)(off + *(int *)(self + 20)));
            off += 4;
        } while (i < *(int *)(self + 12));
    }
    if (*(void **)(self + 20) != 0) {
        Mem__DeleteArray(*(void **)(self + 20));
    }
    *(int *)(self + 20) = 0;
    *(int *)(self + 12) = 0;
    if (*(void **)(self + 4) != 0) {
        Mem__DeleteArray(*(void **)(self + 4));
        *(int *)(self + 4) = 0;
    }
    if (flags & 1) {
        Mem__Delete(self);
    }
}
