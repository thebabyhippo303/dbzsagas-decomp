/* Fighter__SerializeExtendedState @ 0x800F02FC (size: 0x15C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct {
    u32 b31 : 1;
    u32 b30 : 1;
    u32 b29 : 1;
    u32 b28 : 1;
    u32 b27 : 1;
    u32 rest : 27;
} FighterFlags;

typedef union {
    u32 word;
    FighterFlags bits;
} FighterFlagsWord;

int Fighter__GetBaseStateSize(void *);
int Fighter__SerializeState(void *);
int WeaponInventory__GetSelectedId(void *);
void WeaponInventory__SelectById(void *, int);
M2C_UNK fn_802BCC0C(void *, void *, s32);           /* extern */

void Fighter__SerializeExtendedState(void *arg0, void *arg1, s32 arg2) {
    u32 word;
    void *src;
    void *dst;
    s32 copy8;
    s32 tmp;
    s32 copy4;

    if (arg2 != 0) {
        M2C_FIELD(arg1, s32 *, 0) = 0x12345678;
        M2C_FIELD(arg1, f32 *, 4) = M2C_FIELD(arg0, f32 *, 0x76C);
        M2C_FIELD(arg1, s32 *, 8) = WeaponInventory__GetSelectedId(arg0 + 0x5E8);
        src = arg0 + 0x778;
        dst = arg1 + 0x10;
        word = M2C_FIELD(arg1, u32 *, 0x1C);
        tmp = M2C_FIELD(arg0, s32 *, 0x760);
        M2C_FIELD(arg1, s32 *, 0xC) = tmp;
        copy4 = M2C_FIELD(arg0, u32 *, 0x764);
        ((FighterFlags *)&word)->b31 = copy4;
        M2C_FIELD(arg1, u32 *, 0x1C) = word;
        ((FighterFlags *)&word)->b30 = M2C_FIELD(arg0, u32 *, 0x768);
        M2C_FIELD(arg1, u32 *, 0x1C) = word;
        ((FighterFlags *)&word)->b29 = M2C_FIELD(arg0, u32 *, 0x774);
        M2C_FIELD(arg1, u32 *, 0x1C) = word;
        ((FighterFlags *)&word)->b28 = M2C_FIELD(arg0, u32 *, 0x770);
        M2C_FIELD(arg1, u32 *, 0x1C) = word;
        tmp = M2C_FIELD(arg0, s32 *, 0x778);
        copy8 = M2C_FIELD(src, s32 *, 8);
        copy4 = M2C_FIELD(src, s32 *, 4);
        M2C_FIELD(arg1, s32 *, 0x10) = tmp;
        M2C_FIELD(dst, s32 *, 4) = copy4;
        M2C_FIELD(dst, s32 *, 8) = copy8;
        ((FighterFlags *)(arg1 + 0x1C))->b27 = M2C_FIELD(arg0, u32 *, 0x784);
    } else {
        src = arg1 + 0x10;
        dst = arg0 + 0x778;
        M2C_FIELD(arg0, f32 *, 0x76C) = M2C_FIELD(arg1, f32 *, 4);
        M2C_FIELD(arg0, s32 *, 0x760) = M2C_FIELD(arg1, s32 *, 0xC);
        M2C_FIELD(arg0, u32 *, 0x764) = ((FighterFlags *)(arg1 + 0x1C))->b31;
        M2C_FIELD(arg0, u32 *, 0x768) = ((FighterFlags *)(arg1 + 0x1C))->b30;
        M2C_FIELD(arg0, u32 *, 0x774) = ((FighterFlags *)(arg1 + 0x1C))->b29;
        M2C_FIELD(arg0, u32 *, 0x770) = ((FighterFlags *)(arg1 + 0x1C))->b28;
        copy8 = M2C_FIELD(arg1, s32 *, 0x10);
        copy4 = M2C_FIELD(src, s32 *, 4);
        tmp = M2C_FIELD(src, s32 *, 8);
        M2C_FIELD(arg0, s32 *, 0x778) = copy8;
        copy8 = tmp;
        M2C_FIELD(dst, s32 *, 4) = copy4;
        M2C_FIELD(dst, s32 *, 8) = copy8;
        M2C_FIELD(arg0, u32 *, 0x784) = ((FighterFlags *)(arg1 + 0x1C))->b27;
        WeaponInventory__SelectById(arg0 + 0x5E8, M2C_FIELD(arg1, s32 *, 8));
    }
    fn_802BCC0C(arg0, arg1 + Fighter__GetBaseStateSize(arg0), arg2);
    Fighter__SerializeState(arg0);
}
