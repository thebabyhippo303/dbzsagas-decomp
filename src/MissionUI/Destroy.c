/* MissionUI__Destroy @ 0x801233D4 (size: 0x218, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void MissionStats__ClearSummaryEntries(void);
void Sphere__DestroyCore(void *, s32);
void fn_80184430(char *);
void fn_802704BC(void *, int);
M2C_UNK PointerArray__Remove(s32, void *);          /* extern */
M2C_UNK fn_80267A1C(void *, s32);                   /* extern */
extern M2C_UNK lbl_8032D3C0 __attribute__((section(".data")));
extern s32 lbl_803DC650;

void MissionUI__Destroy(void *arg0, s32 arg1) {
    void *temp_r11;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;
    void *var_r31;
    void *var_r31_2;
    void *var_r31_3;
    void *var_r31_4;

    M2C_FIELD(arg0, M2C_UNK **, 0x19C) = &lbl_8032D3C0;
    temp_r9 = M2C_FIELD(arg0, void **, 0xB08C);
    if (temp_r9 != NULL) {
        var_r31 = temp_r9 + (M2C_FIELD(temp_r9, s32 *, -8) * 0x1F4);
        if (temp_r9 != var_r31) {
            do {
                var_r31 -= 0x1F4;
                temp_r9_2 = M2C_FIELD(var_r31, void **, 0x19C);
                M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0xC)(var_r31 + M2C_FIELD(temp_r9_2, s16 *, 8), 0);
            } while ((void *) M2C_FIELD(arg0, void **, 0xB08C) != var_r31);
        }
        fn_80184430(M2C_FIELD(arg0, void **, 0xB08C) - 8);
    }
    temp_r11 = M2C_FIELD(arg0, void **, 0xB088);
    if (temp_r11 != NULL) {
        var_r31_2 = temp_r11 + (M2C_FIELD(temp_r11, s32 *, -8) * 0x1F4);
        if (temp_r11 != var_r31_2) {
            do {
                var_r31_2 -= 0x1F4;
                temp_r9_3 = M2C_FIELD(var_r31_2, void **, 0x19C);
                M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, M2C_UNK), 0xC)(var_r31_2 + M2C_FIELD(temp_r9_3, s16 *, 8), 0);
            } while ((void *) M2C_FIELD(arg0, void **, 0xB088) != var_r31_2);
        }
        fn_80184430(M2C_FIELD(arg0, void **, 0xB088) - 8);
    }
    temp_r9_4 = M2C_FIELD(arg0, void **, 0xB084);
    if (temp_r9_4 != NULL) {
        var_r31_3 = temp_r9_4 + (M2C_FIELD(temp_r9_4, s32 *, -8) * 0x1F4);
        if (temp_r9_4 != var_r31_3) {
            do {
                var_r31_3 -= 0x1F4;
                temp_r9_5 = M2C_FIELD(var_r31_3, void **, 0x19C);
                M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *, M2C_UNK), 0xC)(var_r31_3 + M2C_FIELD(temp_r9_5, s16 *, 8), 0);
            } while ((void *) M2C_FIELD(arg0, void **, 0xB084) != var_r31_3);
        }
        fn_80184430(M2C_FIELD(arg0, void **, 0xB084) - 8);
    }
    temp_r9_6 = M2C_FIELD(arg0, void **, 0xB2C4);
    if (temp_r9_6 != NULL) {
        var_r31_4 = temp_r9_6 + (M2C_FIELD(temp_r9_6, s32 *, -8) * 0x1F4);
        if (temp_r9_6 != var_r31_4) {
            do {
                var_r31_4 -= 0x1F4;
                temp_r9_7 = M2C_FIELD(var_r31_4, void **, 0x19C);
                M2C_FIELD(temp_r9_7, M2C_UNK (**)(void *, M2C_UNK), 0xC)(var_r31_4 + M2C_FIELD(temp_r9_7, s16 *, 8), 0);
            } while ((void *) M2C_FIELD(arg0, void **, 0xB2C4) != var_r31_4);
        }
        fn_80184430(M2C_FIELD(arg0, void **, 0xB2C4) - 8);
    }
    *(void * volatile *)((char *)arg0 + 0xB08C) = NULL;
    *(void * volatile *)((char *)arg0 + 0xB2C4) = NULL;
    *(void * volatile *)((char *)arg0 + 0xB084) = NULL;
    *(void * volatile *)((char *)arg0 + 0xB088) = NULL;
    MissionStats__ClearSummaryEntries();
    PointerArray__Remove(lbl_803DC650, arg0);
    Sphere__DestroyCore(arg0 + 0xB608, 2);
    Sphere__DestroyCore(arg0 + 0xB468, 2);
    Sphere__DestroyCore(arg0 + 0xB2C8, 2);
    fn_802704BC(arg0 + 0xB0D0, 2);
    fn_802704BC(arg0 + 0xAE90, 2);
    fn_80267A1C(arg0, arg1);
}

