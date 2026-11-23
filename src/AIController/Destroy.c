/* AIController__Destroy @ 0x80086A60 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_801843CC(void *);
extern M2C_UNK lbl_803345C0 __attribute__((section(".data")));

void AIController__Destroy(void *arg0, s32 arg1) {
    void *temp_r11;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg0, void **, 0x88);
    M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_803345C0;
    if (temp_r11 != NULL) {
        temp_r9 = M2C_FIELD(temp_r11, void **, 0x57C);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 8), 3);
    }
    if (arg1 & 1) {
        fn_801843CC(arg0);
    }
}
