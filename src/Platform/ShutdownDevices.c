/* Platform__ShutdownDevices @ 0x801D6080 (size: 0xD0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Audio__Shutdown(void *);
void PadManager__DestroyControllers(u32);
void CmdCon__SetOutputSink(void *, s32);
f32 fn_80202FEC(void);
extern void *lbl_803DC364;

void Platform__ShutdownDevices(void *arg0) {
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;

    temp_r9 = M2C_FIELD(lbl_803DC364, void **, 0xA8);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x3C)(lbl_803DC364 + M2C_FIELD(temp_r9, s16 *, 0x38));
    Audio__Shutdown(arg0 + 0x500);
    PadManager__DestroyControllers(arg0 + 0x480);
    if ((void *) M2C_FIELD(arg0, void **, 0x71C) != NULL) {
        CmdCon__SetOutputSink(M2C_FIELD(arg0, void **, 0x718), 0);
        temp_r11 = M2C_FIELD(arg0, void **, 0x71C);
        if (temp_r11) {
            temp_r9_2 = M2C_FIELD(temp_r11, void **, 4);
            M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11 + M2C_FIELD(temp_r9_2, s16 *, 8), 3);
        }
        M2C_FIELD(arg0, void **, 0x71C) = NULL;
    }
    temp_r11_2 = M2C_FIELD(arg0, void **, 0x838);
    if (temp_r11_2 != NULL) {
        temp_r9_3 = M2C_FIELD(temp_r11_2, void **, 8);
        M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_2 + M2C_FIELD(temp_r9_3, s16 *, 8), 3);
        M2C_FIELD(arg0, void **, 0x838) = NULL;
    }
    fn_80202FEC();
}
