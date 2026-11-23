/* FluffLoop__HandleMenuLeftInput @ 0x80056838 (size: 0x210, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_80188B94(char *, s32, f32, f32);
int fn_802687C8(void *);
extern s8 lbl_8031A858 __attribute__((section(".data")));
extern f32 lbl_8031A864 __attribute__((section(".data")));
extern f32 lbl_8031A868 __attribute__((section(".data")));
extern f32 lbl_8031A870 __attribute__((section(".data")));
extern f32 lbl_8031A874 __attribute__((section(".data")));
extern f32 lbl_8031A878 __attribute__((section(".data")));

void FluffLoop__HandleMenuLeftInput(void *arg0) {
    M2C_UNK (*var_r0)(void *);
    s16 var_r3;
    s32 temp_r3;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;

    temp_r3 = fn_802687C8(arg0 + 0xAE90);
    switch (temp_r3) {                              /* irregular */
    case 0x102:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1A640) == 0) {
            temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
            var_r3 = M2C_FIELD(temp_r9, s16 *, 0x570);
            var_r0 = M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x574);
block_11:
            var_r0(arg0 + var_r3);
            fn_80188B94(&lbl_8031A858, 0, lbl_8031A864, lbl_8031A868);
            return;
        }
        return;
    case 0x103:
        M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0lt */);
        if (0 == 0) {
            M2C_FIELD(arg0, f32 *, 0x1A658) = (f32) ((f32) (f64) (s32) (((M2C_FIELD(arg0, f32 *, 0x1A658) - lbl_8031A870) * lbl_8031A874) + lbl_8031A878) * lbl_8031A870);
            temp_r9_2 = M2C_FIELD(arg0, void **, 0x19C);
            var_r3 = M2C_FIELD(temp_r9_2, s16 *, 0x568);
            var_r0 = M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x56C);
            goto block_11;
        }
        break;
    case 0x104:
        M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0lt */);
        if (0 == 0) {
            M2C_FIELD(arg0, f32 *, 0x1A65C) = (f32) ((f32) (f64) (s32) (((M2C_FIELD(arg0, f32 *, 0x1A65C) - lbl_8031A870) * lbl_8031A874) + lbl_8031A878) * lbl_8031A870);
            temp_r9_3 = M2C_FIELD(arg0, void **, 0x19C);
            M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *), 0x56C)(arg0 + M2C_FIELD(temp_r9_3, s16 *, 0x568));
            return;
        }
        break;
    case 0x105:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1A644) == 0) {
            temp_r9_4 = M2C_FIELD(arg0, void **, 0x19C);
            M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *), 0x57C)(arg0 + M2C_FIELD(temp_r9_4, s16 *, 0x578));
            fn_80188B94(&lbl_8031A858, 0, lbl_8031A864, lbl_8031A868);
        }
        break;
    }
}

