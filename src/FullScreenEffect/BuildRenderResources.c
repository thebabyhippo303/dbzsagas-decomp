/* FullScreenEffect__BuildRenderResources @ 0x800E1A68 (size: 0x24C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * fn_801842C4(unsigned int);
M2C_UNK FullScreenEffect__UpdateParameters();       /* extern */
M2C_UNK fn_801588CC(s32, f32, f32);                 /* extern */
M2C_UNK fn_802902B0(s32, s32, s32, f32);            /* extern */
M2C_UNK fn_80290B2C(s32, f32, f32, f32, f32);       /* extern */
M2C_UNK fn_80290F90(s32);                           /* extern */
s32 fn_802910D8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, void *, f32, f32, f32, f32, f32, f32, f32); /* extern */
M2C_UNK fn_802914E4(M2C_UNK);                       /* extern */

void FullScreenEffect__BuildRenderResources(void *arg0) {
    M2C_UNK var_r26;
    M2C_UNK var_r27;
    M2C_UNK var_r27_2;
    M2C_UNK var_r28;
    M2C_UNK var_r28_2;
    M2C_UNK var_r29;
    void *temp_r3_2;
    f32 temp_f26;
    register f32 temp_f29;
    f32 temp_f30;
    register f32 temp_f27;
    f32 temp_f29_2;
    register f32 temp_f30_2;
    f32 temp_f28;
    f32 temp_f31;
    f32 temp_f25;
    register f32 temp_f26_2;
    f32 temp_f27_2;
    f32 temp_f31_2;
    f32 temp_f28_2;
    register f32 temp_f25_2;
    void *temp_r3;

    FullScreenEffect__UpdateParameters();
    if ((s32) M2C_FIELD(arg0, s32 *, 0x9C) != 0) {
        M2C_FIELD(arg0, s32 *, 0x8C) = 0;
        M2C_FIELD(arg0, s32 *, 0x88) = 0;
        fn_802902B0(M2C_FIELD(arg0, s32 *, 0xD8), M2C_FIELD(arg0, s32 *, 0xDC), M2C_FIELD(arg0, s32 *, 0xE4), M2C_FIELD(arg0, f32 *, 0xE0));
        fn_80290F90(M2C_FIELD(arg0, s32 *, 0xB4));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xA0) != 0) {
            fn_80290B2C(M2C_FIELD(arg0, s32 *, 0xBC), M2C_FIELD(arg0, f32 *, 0xF8), M2C_FIELD(arg0, f32 *, 0xFC), M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4));
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x11C) != 0) {
            var_r26 = 1;
            temp_f28 = M2C_FIELD(arg0, f32 *, 0x120);
            temp_f27 = M2C_FIELD(arg0, f32 *, 0x124);
            temp_f26 = M2C_FIELD(arg0, f32 *, 0xC8);
            temp_f25 = M2C_FIELD(arg0, f32 *, 0xCC);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x130) == 0) {
                var_r26 = 0;
            }
            var_r27 = 1;
            temp_f31 = M2C_FIELD(arg0, f32 *, 0x194);
            temp_f30 = M2C_FIELD(arg0, f32 *, 0x198);
            temp_f29 = M2C_FIELD(arg0, f32 *, 0x19C);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x140) == 0) {
                var_r27 = 0;
            }
            var_r28 = 1;
            if ((s32) M2C_FIELD(arg0, s32 *, 0x144) == 0) {
                var_r28 = 0;
            }
            temp_r3 = fn_801842C4(0x14U);
            M2C_FIELD(temp_r3, s32 *, 0xC) = 0;
            fn_801588CC(M2C_FIELD(arg0, s32 *, 0x148), M2C_FIELD(arg0, f32 *, 0x14C), M2C_FIELD(arg0, f32 *, 0x150));
            M2C_FIELD(arg0, s32 *, 0x88) = fn_802910D8(0, var_r26, var_r27, var_r28, temp_r3, temp_f28, temp_f27, temp_f26, temp_f25, temp_f31, temp_f30, temp_f29);
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x158) != 0) {
            var_r27_2 = 1;
            temp_f28_2 = M2C_FIELD(arg0, f32 *, 0x15C);
            temp_f27_2 = M2C_FIELD(arg0, f32 *, 0x160);
            temp_f26_2 = M2C_FIELD(arg0, f32 *, 0xD0);
            temp_f25_2 = M2C_FIELD(arg0, f32 *, 0xD4);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x16C) == 0) {
                var_r27_2 = 0;
            }
            var_r28_2 = 1;
            temp_f31_2 = M2C_FIELD(arg0, f32 *, 0x194);
            temp_f30_2 = M2C_FIELD(arg0, f32 *, 0x198);
            temp_f29_2 = M2C_FIELD(arg0, f32 *, 0x19C);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x17C) == 0) {
                var_r28_2 = 0;
            }
            var_r29 = 1;
            if ((s32) M2C_FIELD(arg0, s32 *, 0x180) == 0) {
                var_r29 = 0;
            }
            temp_r3_2 = fn_801842C4(0x14U);
            M2C_FIELD(temp_r3_2, s32 *, 0xC) = 0;
            fn_801588CC(M2C_FIELD(arg0, s32 *, 0x184), M2C_FIELD(arg0, f32 *, 0x188), M2C_FIELD(arg0, f32 *, 0x18C));
            M2C_FIELD(arg0, s32 *, 0x8C) = fn_802910D8(1, var_r27_2, var_r28_2, var_r29, temp_r3_2, temp_f28_2, temp_f27_2, temp_f26_2, temp_f25_2, temp_f31_2, temp_f30_2, temp_f29_2);
        }
        if (M2C_FIELD(arg0, s32 *, 0xA4) & 2) {
            fn_802914E4(1);
        }
    }
}
