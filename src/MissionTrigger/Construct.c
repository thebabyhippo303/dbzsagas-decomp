/* MissionTrigger__Construct @ 0x8011A3E0 (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef double f64; typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void MenuPanel__Construct(void *);
void PointerArray__AddUnique(void *, void *);
extern char lbl_8032CDF0[] __attribute__((section(".data")));
extern f32 lbl_80327088 __attribute__((section(".data")));
extern f32 lbl_8032708C __attribute__((section(".data")));
extern void *lbl_803DC650;

void *MissionTrigger__Construct(void *arg0) {
    void *glob;
    f32 a;
    f32 b;

    MenuPanel__Construct(arg0);
    glob = lbl_803DC650;
    M2C_FIELD(arg0, char **, 0x19C) = lbl_8032CDF0;
    PointerArray__AddUnique(glob, arg0);
    a = lbl_80327088;
    b = lbl_8032708C;
    M2C_FIELD(arg0, f32 *, 0xAE94) = a;
    M2C_FIELD(arg0, f32 *, 0xAE98) = b;
    M2C_FIELD(arg0, s32 *, 0xAEA8) = 1;
    M2C_FIELD(arg0, s32 *, 0xAEB4) = 0;
    M2C_FIELD(arg0, s32 *, 0xAEB8) = 0;
    M2C_FIELD(arg0, s32 *, 0xAEBC) = 0;
    M2C_FIELD(arg0, s32 *, 0xAEC0) = 0;
    M2C_FIELD(arg0, s32 *, 0xAEC4) = 0;
    M2C_FIELD(arg0, s32 *, 0xAEC8) = 0;
    M2C_FIELD(arg0, s32 *, 0xAECC) = 0;
    M2C_FIELD(arg0, s32 *, 0xAED0) = 0;
    M2C_FIELD(arg0, s32 *, 0xAE90) = 0;
    M2C_FIELD(arg0, s32 *, 0xAE9C) = 0;
    M2C_FIELD(arg0, s32 *, 0xAEA0) = 0;
    M2C_FIELD(arg0, s32 *, 0xAEAC) = 0;
    M2C_FIELD(arg0, s32 *, 0xAEB0) = 0;
    return arg0;
}
