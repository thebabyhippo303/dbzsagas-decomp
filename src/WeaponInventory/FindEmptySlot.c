/* WeaponInventory__FindEmptySlot @ 0x800DF1D4 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef unsigned int u32;
typedef signed int s32;
typedef struct { u32 pad; void *slots[92]; s32 current; } WeaponInventory;

s32 WeaponInventory__FindEmptySlot(WeaponInventory *self) {
    s32 start;
    s32 idx;
    u32 tmp;
    u32 nxt;
    void **slots;

    if ((self->current != 92) && (self->slots[self->current] == 0)) {
        return self->current;
    }
    start = self->current;
    idx = 1;
    tmp = start + 1;
    if (tmp <= 91) {
        idx = (s32)tmp;
    }
    slots = self->slots;
    for (;;) {
        if (slots[idx] == 0) {
            return idx;
        }
        nxt = (u32)idx + 1;
        idx = 1;
        if (nxt <= 91) {
            idx = (s32)nxt;
        }
        if (idx == start) {
            return 0;
        }
    }
}
