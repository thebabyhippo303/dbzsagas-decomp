/* Menu__RebuildButtonPromptWidget @ 0x8001780C (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * UI__BuildButtonSymbolWidgets(void *, void *, s32);
s32 Mem__New(s32);
void fn_8026BF14(void *);
void fn_80270784(void *, char *);
void * fn_80271BF0(void *);
M2C_UNK fn_8026D520(s32);
M2C_UNK fn_80271B58(s32, s32);
extern s8 lbl_8030DC3C __attribute__((section(".data")));

void Menu__RebuildButtonPromptWidget(s32 arg0) {
    void *temp_r29;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r9;
    void *temp_r9_2;

    temp_r29 = arg0 + 0x2DA8;
    fn_8026D520(arg0);
    temp_r3 = fn_80271BF0(arg0 + 0x3B54);
    temp_r9 = M2C_FIELD(temp_r3, void **, 8);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x1C)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x18));
    temp_r3_2 = fn_80271BF0(temp_r29);
    temp_r9_2 = M2C_FIELD(temp_r3_2, void **, 8);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x1C)(temp_r3_2 + M2C_FIELD(temp_r9_2, s16 *, 0x18));
    fn_80270784(temp_r29, &lbl_8030DC3C);
    fn_80271B58((s32) temp_r29, UI__BuildButtonSymbolWidgets(Mem__New(0xD4), temp_r29, 1));
    fn_8026BF14(temp_r29);
}

