/* DefaultWeaponDefinition__Construct @ 0x800D0AE4 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * WeaponDefinition__Construct(void *);
extern f32 lbl_80322874 __attribute__((section(".data")));
extern M2C_UNK lbl_80334BC0 __attribute__((section(".data")));

void *DefaultWeaponDefinition__Construct(void *arg0) {
    WeaponDefinition__Construct(arg0);
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_80322874;
    M2C_FIELD(arg0, M2C_UNK **, 0x54) = &lbl_80334BC0;
    M2C_FIELD(arg0, s32 *, 0x3C) = -1;
    return arg0;
}
