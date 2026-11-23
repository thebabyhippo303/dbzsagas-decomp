/* CameraShake__Construct @ 0x800CFD6C (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

extern f32 lbl_80321D40 __attribute__((section(".data")));
extern f32 lbl_80321D44 __attribute__((section(".data")));
extern f32 lbl_80321D48 __attribute__((section(".data")));
extern M2C_UNK lbl_80335710 __attribute__((section(".data")));

void CameraShake__Construct(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 4) = farg0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &lbl_80335710;
    M2C_FIELD(arg0, f32 *, 8) = (f32) (farg1 * lbl_80321D40);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) (farg2 * lbl_80321D44);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) lbl_80321D48;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_80321D48;
}

