/* UI__DestroyButtonSymbolWidgets @ 0x80113230 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Mem__Delete(void *);
extern M2C_UNK lbl_80333A00 __attribute__((section(".data")));
extern M2C_UNK lbl_803371D0 __attribute__((section(".data")));

void UI__DestroyButtonSymbolWidgets(void *arg0, s32 arg1) {
    s32 var_r30;
    char *var_r31;
    void *temp_r11;
    void *temp_r9;

    M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_80333A00;
    var_r31 = arg0 + 0x74;
    var_r30 = 0x18;
    do {
        temp_r11 = *(void **)var_r31;
        var_r31 += 4;
        if (temp_r11 != NULL) {
            temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 8), 3);
        }
        var_r30 -= 1;
    } while (var_r30 != 0);
    M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_803371D0;
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}

