/* AvatarInventory__Construct @ 0x8009B164 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void AvatarInventory__InitializeDefaults(void *);
extern M2C_UNK lbl_80335270 __attribute__((section(".data")));
extern M2C_UNK lbl_80337E44 __attribute__((section(".data")));

void *AvatarInventory__Construct(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x1158) = &lbl_80335270;
    M2C_FIELD(arg0, s32 *, 0x1154) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x1128) = &lbl_80337E44;
    AvatarInventory__InitializeDefaults(arg0);
    return arg0;
}
