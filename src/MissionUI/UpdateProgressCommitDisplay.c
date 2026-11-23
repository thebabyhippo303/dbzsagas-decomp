/* MissionUI__UpdateProgressCommitDisplay @ 0x8011C710 (size: 0x108, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void SimLoop__PauseSimulation(void *, s32, s32, s32);
void fn_8026BF14(s32);
M2C_UNK MissionUI__ShowProgressCommitDisplay(s32);
extern f32 lbl_803271B0 __attribute__((section(".data")));
extern f32 lbl_803A35C4 __attribute__((section(".data")));
extern void *lbl_803DC3C0;

void MissionUI__UpdateProgressCommit(void *arg0) {
    f32 temp_f13;
    f32 temp_f31;
    void *temp_r11;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;

    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    if (M2C_FIELD(temp_r9, s32 (**)(void *), 0x3A4)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x3A0)) != 0) {
        temp_r3 = M2C_FIELD(arg0, void **, 0xAE94);
        temp_r9_2 = M2C_FIELD(temp_r3, void **, 0x19C);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x3C)(temp_r3 + M2C_FIELD(temp_r9_2, s16 *, 0x38));
        temp_r11 = M2C_FIELD(arg0, void **, 0xAE98);
        if (temp_r11 != NULL) {
            temp_r9_3 = M2C_FIELD(temp_r11, void **, 0x19C);
            M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *), 0x3C)(temp_r11 + M2C_FIELD(temp_r9_3, s16 *, 0x38));
        }
        temp_r3_2 = M2C_FIELD(arg0, void **, 0xAEA8);
        temp_r9_4 = M2C_FIELD(temp_r3_2, void **, 0x19C);
        M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *), 0x3C)(temp_r3_2 + M2C_FIELD(temp_r9_4, s16 *, 0x38));
    } else {
        temp_f13 = M2C_FIELD(arg0, f32 *, 0xAE90);
        temp_f31 = lbl_803271B0;
        if (!(temp_f13 <= temp_f31)) {
            if (!(lbl_803A35C4 < temp_f13)) {
                SimLoop__PauseSimulation(lbl_803DC3C0, 1, 0, 1);
                MissionUI__ShowProgressCommitDisplay((s32) arg0);
                M2C_FIELD(arg0, f32 *, 0xAE90) = temp_f31;
            }
        }
    }
    fn_8026BF14(arg0);
}
