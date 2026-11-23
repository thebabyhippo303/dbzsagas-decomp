/* MissionUI__ConstructProgressCommitListener @ 0x8011BFD4 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void PointerArray__AddUnique(void *, void *);
void MenuPanel__Construct(void);
extern f32 lbl_803271A0 __attribute__((section(".data")));
extern M2C_UNK lbl_8032E9F8 __attribute__((section(".data")));
extern void *lbl_803DC650;

void *MissionUI__ConstructProgressCommitListener(void *arg0) {
    void *list;
    MenuPanel__Construct();
    list = lbl_803DC650;
    M2C_FIELD(arg0, M2C_UNK **, 0x19C) = &lbl_8032E9F8;
    PointerArray__AddUnique(list, arg0);
    M2C_FIELD(arg0, f32 *, 0xAE90) = (f32) lbl_803271A0;
    M2C_FIELD(arg0, s32 *, 0xAE94) = 0;
    M2C_FIELD(arg0, s32 *, 0xAE98) = 0;
    M2C_FIELD(arg0, s32 *, 0xAE9C) = 0;
    M2C_FIELD(arg0, s32 *, 0xAEA8) = 0;
    M2C_FIELD(arg0, s32 *, 0xAEA0) = 0;
    M2C_FIELD(arg0, s32 *, 0xAEA4) = 0;
    return arg0;
}
