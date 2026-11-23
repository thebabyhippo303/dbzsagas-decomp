/* Mem__DeleteArray @ 0x80184430 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * MemHeap__FindRegion(void *, void *);
void memFree(void *);
extern s32 lbl_80372A00 __attribute__((section(".data")));
extern void *lbl_803DD4C4;

void Mem__DeleteArray(void *arg0) {
    s32 var_r9;

    var_r9 = 1;
    if ((s32) lbl_80372A00 == 0) {
        var_r9 = 0;
    }
    if ((var_r9 != 0) && (MemHeap__FindRegion(lbl_803DD4C4, arg0) != NULL)) {
        memFree(arg0);
    }
}
