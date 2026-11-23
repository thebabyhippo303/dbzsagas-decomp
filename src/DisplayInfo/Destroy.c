/* DisplayInfo__Destroy @ 0x800098D4 (size: 0xFC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Remove(void *, s32);
void DisplayInfo__ClearPendingEntryList(void *);
void Mem__Delete(void *);
M2C_UNK PointerArray__Remove(s32, s32);
M2C_UNK fn_80272B80(s32, s32);
M2C_UNK fn_80267A1C(s32, s32);
extern M2C_UNK lbl_8030CA88 __attribute__((section(".data")));
extern s32 lbl_803DC650;

void DisplayInfo__Destroy(void *arg0, s32 arg1) {
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r3;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;

    M2C_FIELD(arg0, M2C_UNK **, 0x19C) = &lbl_8030CA88;
    PointerArray__Remove(lbl_803DC650, (s32) arg0);
    Remove(M2C_FIELD(arg0, void **, 0xB078), 0);
    temp_r11 = M2C_FIELD(arg0, void **, 0xB074);
    if (temp_r11 != NULL) {
        temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 8), 3);
    }
    temp_r11_2 = M2C_FIELD(arg0, void **, 0xB094);
    if (temp_r11_2 != NULL) {
        temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 0x19C);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_2 + M2C_FIELD(temp_r9_2, s16 *, 8), 3);
    }
    temp_r11_3 = M2C_FIELD(arg0, void **, 0xB098);
    if (temp_r11_3 != NULL) {
        temp_r9_3 = M2C_FIELD(temp_r11_3, void **, 0x19C);
        M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_3 + M2C_FIELD(temp_r9_3, s16 *, 8), 3);
    }
    DisplayInfo__ClearPendingEntryList(arg0);
    temp_r3 = M2C_FIELD(arg0, void **, 0xB09C);
    if (temp_r3 != NULL) {
        Mem__Delete(temp_r3);
    }
    fn_80272B80((s32) (arg0 + 0xAE94), 2);
    fn_80267A1C((s32) arg0, arg1);
}
