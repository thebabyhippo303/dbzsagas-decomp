/* SpatialTree__Construct @ 0x801586CC (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_801843CC(void *);
extern M2C_UNK lbl_803371D0 __attribute__((section(".data")));

void SpatialTree__Construct(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_803371D0;
    if (arg1 & 1) {
        fn_801843CC(arg0);
    }
}
