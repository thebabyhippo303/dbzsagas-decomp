/* WeaponInventory__RefillAmmoBySlot @ 0x800DF294 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed int s32;
int WeaponInventory__RefillAmmoBySlot(void *self, s32 slot) {
    void *item;
    int offset;
    void **base;
    if (slot == 0) goto zero;
    offset = slot * 4;
    base = (void **)((char *)self + 4);
    item = *(void **)((char *)base + offset);
    if (item != 0) goto success;
zero:
    return 0;
success:
    *(s32 *)((char *)item + 4) = *(s32 *)((char *)*(void **)item + 0x3C);
    return 1;
}