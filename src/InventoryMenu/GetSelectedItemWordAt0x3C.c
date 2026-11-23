/* InventoryMenu__GetSelectedItemWordAt0x3C @ 0x80104560 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef struct { s32 prefix[15]; s32 items[1][9]; } Inventory;
extern void *Game__GetPlayerImpl(void *, s32);
extern s32 InventoryMenu__GetSelectedItemIndex(void *);
extern void *lbl_803DC3C0;
s32 InventoryMenu__GetSelectedItemWordAt0x3C(void *menu) {
    void *player = Game__GetPlayerImpl(lbl_803DC3C0, 0);
    Inventory *inventory = *(Inventory **)((char *)player + 0x159C);
    s32 index = InventoryMenu__GetSelectedItemIndex(menu);
    return inventory->items[index][0];
}