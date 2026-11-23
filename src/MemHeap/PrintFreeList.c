/* MemHeap__PrintFreeList @ 0x80184238 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Mem__FormatPointer(s32);
void MemHeap__PrintBlock(s32, void *, void *, void *, ...);
extern char lbl_8033DBBC[];
extern char lbl_8033DBC4[] __attribute__((section(".data")));
extern volatile s32 lbl_803DCBA0 __attribute__((section(".data")));

void MemHeap__PrintFreeList(void **arg0) {
    register void *blk;

    blk = *arg0;
    if (blk != NULL) {
        do {
            if (lbl_803DCBA0 == 0) {
                lbl_803DCBA0 = 0;
            }
            MemHeap__PrintBlock(6, blk, lbl_8033DBBC, lbl_8033DBC4, (Mem__FormatPointer(M2C_FIELD(blk, s32 *, 8))), Mem__FormatPointer(M2C_FIELD(blk, s32 *, 4)));
            blk = M2C_FIELD(blk, void **, 4);
        } while (blk != NULL);
    }
}
