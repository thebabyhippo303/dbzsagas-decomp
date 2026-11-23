/* MainMenu__StartScreenTransition @ 0x80140D18 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK fn_80007D88(s32);                           /* extern */
M2C_UNK fn_80266F24(void *, M2C_UNK);                       /* extern */
extern s32 lbl_803DC368;

void MainMenu__StartScreenTransition(void *arg0) {
    void *temp_r9;
    void *temp_r9_2;

    fn_80266F24(arg0, 0);
    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x1D4)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x1D0));
    fn_80007D88(lbl_803DC368);
    temp_r9_2 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x534)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0x530));
}
