/* Platform__ConstructOrDestroyStatic @ 0x801D8C94 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK Platform__Construct(M2C_UNK *);             /* extern */
M2C_UNK Platform__Destroy(M2C_UNK *, M2C_UNK);      /* extern */
extern M2C_UNK lbl_803A3718 __attribute__((section(".data")));

void Platform__ConstructOrDestroyStatic(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            Platform__Construct(&lbl_803A3718);
            return;
        }
        Platform__Destroy(&lbl_803A3718, 2);
    }
}
