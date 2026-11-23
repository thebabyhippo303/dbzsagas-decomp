/* TevMaterialCache__Alloc @ 0x8024C1E4 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef unsigned int u32;
extern void *MemHeap__Alloc(u32, u32);
extern u32 OSGetArenaLo(void);
extern void OSSetArenaLo(u32);
extern int lbl_80372A00 __attribute__((section(".data")));

u32 TevMaterialCache__Alloc(u32 size) {
    u32 result;
    int useHeap = 1;

    if (lbl_80372A00 == 0) {
        useHeap = 0;
    }
    if (useHeap != 0) {
        result = (u32)MemHeap__Alloc(size, 32);
    } else {
        result = (OSGetArenaLo() + 0x1F) & ~0x1F;
        size = (size + 0x1F) & ~0x1F;
        OSSetArenaLo(result + size);
    }
    return result;
}
