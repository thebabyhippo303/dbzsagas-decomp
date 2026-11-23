/* MainMenu__SetAnimatedWidgetPosition @ 0x8012EB3C (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


void MainMenu__SetAnimatedWidgetPosition(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK (*temp_r9_2)(void *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    void *temp_r9;

    M2C_FIELD(arg0, s32 *, 0x1B8) = arg1;
    M2C_FIELD(arg0, s32 *, 0x1BC) = arg2;
    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    temp_r9_2 = M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK), 0x6C);
    temp_r9_2(arg0 + M2C_FIELD(temp_r9, s16 *, 0x68), arg1, arg2, 0, 1, 1);
}
