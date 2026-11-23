/* WeaponObjectList__Construct @ 0x800DF2CC (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef unsigned int u32; typedef int s32;
void *Mem__New(u32);
void *Mem__NewArray(u32);
extern s32 lbl_803DC5DC;

void *WeaponObjectList__Construct(void *self) {
    register s32 one = 1;
    register s32 zero = 0;
    register s32 eight = 8;
    void *list = Mem__New(24);
    void *items = Mem__NewArray(32);

    *(void **)list = items;
    *(void * volatile *)self = list;
    *(s32 volatile *)((char *)self + 4) = one;
    *(s32 *)((char *)list + 4) = zero;
    *(s32 *)((char *)list + 8) = eight;
    *(s32 *)((char *)list + 16) = zero;
    *(s32 *)((char *)list + 20) = zero;
    *(s32 *)((char *)list + 12) = eight;
    lbl_803DC5DC = (s32)self;
    return self;
}