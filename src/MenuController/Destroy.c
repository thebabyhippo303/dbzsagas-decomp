/* MenuController__Destroy @ 0x8004B31C (size: 0x108, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK PointerArray__Remove(s32, void *);          /* extern */
void MenuPanel__Destroy(char *, s32);               /* extern */
extern M2C_UNK lbl_80317330 __attribute__((section(".data")));
extern s32 lbl_803DC650;

void MenuController__Destroy(void *arg0, s32 arg1) {
    void *temp_r11;
    void *temp_r9;
    s32 list;

    M2C_FIELD(arg0, M2C_UNK **, 0x19C) = &lbl_80317330;
    temp_r11 = M2C_FIELD(arg0, void **, 0xAE9C);
    if (temp_r11 != NULL) {
        temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 8), 3);
    }
    temp_r11 = M2C_FIELD(arg0, void **, 0xAE98);
    if (temp_r11 != NULL) {
        temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 8), 3);
    }
    temp_r11 = M2C_FIELD(arg0, void **, 0xAE94);
    if (temp_r11 != NULL) {
        temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 8), 3);
    }
    temp_r11 = M2C_FIELD(arg0, void **, 0xAE90);
    if (temp_r11 != NULL) {
        temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 8), 3);
    }
    list = lbl_803DC650;
    M2C_FIELD(arg0, void **, 0xAE90) = NULL;
    M2C_FIELD(arg0, void **, 0xAE94) = NULL;
    M2C_FIELD(arg0, void **, 0xAE98) = NULL;
    M2C_FIELD(arg0, void **, 0xAE9C) = NULL;
    PointerArray__Remove(list, arg0);
    MenuPanel__Destroy(arg0, arg1);
}
