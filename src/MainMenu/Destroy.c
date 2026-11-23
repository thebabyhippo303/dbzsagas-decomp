/* MainMenu__Destroy @ 0x80139424 (size: 0x8EC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void FmvQueue__Destroy(void *, s32);
void MainMenu__DestroyPlayerSelectWidgetGroup(void *, s32);
void MainMenu__DestroySelectionListState(void *, s32);
void Sphere__DestroyCore(void *, s32);
void fn_802704BC(void *, int);
M2C_UNK MainMenu__DestroyLetterAnimationChildList(void *, M2C_UNK); /* extern */
M2C_UNK MainMenu__DestroyLetterAnimationState(void *, M2C_UNK); /* extern */
M2C_UNK MainMenu__DestroyWidgetCollection(void *, M2C_UNK); /* extern */
M2C_UNK MenuWidgetArray__Destroy(void *, M2C_UNK);  /* extern */
M2C_UNK PointerArray__Remove(s32, void *);          /* extern */
M2C_UNK UIList__Destroy(void *, M2C_UNK);           /* extern */
M2C_UNK fn_80267A1C(void *, s32);                   /* extern */
extern M2C_UNK lbl_8030DEB8 __attribute__((section(".data")));
extern M2C_UNK lbl_8030E220 __attribute__((section(".data")));
extern M2C_UNK lbl_803106B8 __attribute__((section(".data")));
extern M2C_UNK lbl_80310AD0 __attribute__((section(".data")));
extern M2C_UNK lbl_8032DF40 __attribute__((section(".data")));
extern M2C_UNK lbl_80336270 __attribute__((section(".data")));
extern s32 lbl_803DC630;

void MainMenu__Destroy(void *arg0, s32 arg1) {
    s32 flag;
    void *temp_r0;
    void *temp_r0_10;
    void *temp_r0_11;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r0_8;
    void *temp_r0_9;
    void *temp_r11;
    void *temp_r25;
    void *temp_r26;
    void *temp_r26_2;
    void *temp_r27;
    void *temp_r27_2;
    void *temp_r29;
    void *temp_r29_2;
    void *temp_r31;
    void *temp_r31_2;
    void *temp_r3;
    void *temp_r9;
    void *temp_r9_10;
    void *temp_r9_11;
    void *temp_r9_12;
    void *temp_r9_13;
    void *temp_r9_14;
    void *temp_r9_15;
    void *temp_r9_16;
    void *temp_r9_17;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;
    void *temp_r9_8;
    void *temp_r9_9;
    void *var_r30;
    void *var_r30_10;
    void *var_r30_11;
    void *var_r30_12;
    void *var_r30_13;
    void *var_r30_14;
    void *var_r30_2;
    void *var_r30_3;
    void *var_r30_4;
    void *var_r30_5;
    void *var_r30_6;
    void *var_r30_7;
    void *var_r30_8;
    void *var_r30_9;

    M2C_FIELD(arg0, M2C_UNK **, 0x19C) = &lbl_8032DF40;
    temp_r11 = M2C_FIELD(arg0, void **, 0x22340);
    if (temp_r11 != NULL) {
        temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK, void *), 0xC)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 8), 3, temp_r9);
        M2C_FIELD(arg0, void **, 0x22340) = NULL;
    }
    PointerArray__Remove(lbl_803DC630, arg0);
    temp_r3 = M2C_FIELD(arg0, void **, 0x22358);
    if (temp_r3 != NULL) {
        FmvQueue__Destroy(temp_r3, 3);
        M2C_FIELD(arg0, void **, 0x22358) = NULL;
    }
    temp_r0 = arg0 + 0x21FD0;
    if (temp_r0 != NULL) {
        var_r30 = arg0 + 0x22310;
        if (temp_r0 != var_r30) {
            do {
                var_r30 -= 0x1A0;
                temp_r9_2 = M2C_FIELD(var_r30, void **, 0x19C);
                M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0xC)(var_r30 + M2C_FIELD(temp_r9_2, s16 *, 8), 0);
            } while (temp_r0 != var_r30);
        }
    }
    temp_r0_2 = arg0 + 0x21950;
    if (temp_r0_2 != NULL) {
        var_r30_2 = arg0 + 0x21FD0;
        if (temp_r0_2 != var_r30_2) {
            do {
                var_r30_2 -= 0x1A0;
                temp_r9_3 = M2C_FIELD(var_r30_2, void **, 0x19C);
                M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, M2C_UNK), 0xC)(var_r30_2 + M2C_FIELD(temp_r9_3, s16 *, 8), 0);
            } while (temp_r0_2 != var_r30_2);
        }
    }
    Sphere__DestroyCore(arg0 + 0x217B0, 2);
    temp_r29 = arg0 + 0x20058;
    MainMenu__DestroySelectionListState(arg0 + 0x2125C, 2);
    temp_r0_3 = arg0 + 0x20B14;
    M2C_FIELD(temp_r29, M2C_UNK **, 0x19C) = &lbl_803106B8;
    if (temp_r0_3 != NULL) {
        var_r30_3 = arg0 + 0x21214;
        if (temp_r0_3 != var_r30_3) {
            do {
                var_r30_3 -= 0x1C0;
                temp_r9_4 = M2C_FIELD(var_r30_3, void **, 0x19C);
                M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *, M2C_UNK), 0xC)(var_r30_3 + M2C_FIELD(temp_r9_4, s16 *, 8), 0);
            } while (temp_r0_3 != var_r30_3);
        }
    }
    Sphere__DestroyCore(temp_r29 + 0x91C, 2);
    temp_r27 = arg0 + 0x1BA40;
    Sphere__DestroyCore(temp_r29 + 0x77C, 2);
    temp_r26 = arg0 + 0x1C474;
    fn_802704BC(temp_r29 + 0x588, 2);
    fn_802704BC(temp_r29 + 0x394, 2);
    fn_802704BC(temp_r29 + 0x1A0, 2);
    Sphere__DestroyCore(temp_r29, 2);
    MainMenu__DestroyWidgetCollection(arg0 + 0x1FB0C, 2);
    temp_r9_5 = arg0 + 0x1F94C;
    M2C_FIELD(temp_r9_5, M2C_UNK **, 0x19C) = &lbl_80310AD0;
    Sphere__DestroyCore(temp_r9_5, 2);
    temp_r9_6 = arg0 + 0x1F78C;
    M2C_FIELD(temp_r9_6, M2C_UNK **, 0x19C) = &lbl_80310AD0;
    Sphere__DestroyCore(temp_r9_6, 2);
    M2C_FIELD(temp_r27, M2C_UNK **, 0x19C) = &lbl_8030E220;
    fn_802704BC(arg0 + 0x1F594, 2);
    fn_802704BC(arg0 + 0x1F3A0, 2);
    fn_802704BC(arg0 + 0x1F1AC, 2);
    fn_802704BC(arg0 + 0x1EFB8, 2);
    fn_802704BC(arg0 + 0x1EDC4, 2);
    fn_802704BC(arg0 + 0x1EBD0, 2);
    fn_802704BC(arg0 + 0x1E9DC, 2);
    fn_802704BC(arg0 + 0x1E7E8, 2);
    fn_802704BC(arg0 + 0x1E5F4, 2);
    fn_802704BC(arg0 + 0x1E400, 2);
    fn_802704BC(arg0 + 0x1E20C, 2);
    fn_802704BC(arg0 + 0x1E018, 2);
    fn_802704BC(arg0 + 0x1DE24, 2);
    fn_802704BC(arg0 + 0x1DC30, 2);
    fn_802704BC(arg0 + 0x1DA3C, 2);
    fn_802704BC(arg0 + 0x1D848, 2);
    fn_802704BC(arg0 + 0x1D654, 2);
    Sphere__DestroyCore(arg0 + 0x1D4B4, 2);
    Sphere__DestroyCore(arg0 + 0x1D314, 2);
    Sphere__DestroyCore(arg0 + 0x1D174, 2);
    Sphere__DestroyCore(arg0 + 0x1CFD4, 2);
    Sphere__DestroyCore(arg0 + 0x1CE34, 2);
    Sphere__DestroyCore(arg0 + 0x1CC94, 2);
    Sphere__DestroyCore(arg0 + 0x1CAF4, 2);
    Sphere__DestroyCore(arg0 + 0x1C954, 2);
    Sphere__DestroyCore(arg0 + 0x1C7B4, 2);
    Sphere__DestroyCore(arg0 + 0x1C614, 2);
    Sphere__DestroyCore(temp_r26, 2);
    temp_r0_4 = arg0 + 0x1C134;
    if (temp_r0_4 != NULL) {
        var_r30_4 = temp_r26;
        if (temp_r0_4 != var_r30_4) {
            do {
                var_r30_4 -= 0x1A0;
                temp_r9_7 = M2C_FIELD(var_r30_4, void **, 0x19C);
                M2C_FIELD(temp_r9_7, M2C_UNK (**)(void *, M2C_UNK), 0xC)(var_r30_4 + M2C_FIELD(temp_r9_7, s16 *, 8), 0);
            } while (temp_r0_4 != var_r30_4);
        }
    }
    MainMenu__DestroySelectionListState(temp_r27 + 0x1A0, 2);
    temp_r31 = arg0 + 0x16890;
    Sphere__DestroyCore(temp_r27, 2);
    var_r30_5 = temp_r31 + 0x4E18;
    M2C_FIELD(temp_r31, M2C_UNK **, 0x19C) = &lbl_8030DEB8;
    UIList__Destroy(var_r30_5, 2);
    temp_r0_5 = temp_r31 + 0x3E78;
    if ((temp_r0_5 != NULL) && (temp_r0_5 != var_r30_5)) {
        do {
            var_r30_5 -= 0x1F4;
            temp_r9_8 = M2C_FIELD(var_r30_5, void **, 0x19C);
            M2C_FIELD(temp_r9_8, M2C_UNK (**)(void *, M2C_UNK), 0xC)(var_r30_5 + M2C_FIELD(temp_r9_8, s16 *, 8), 0);
        } while (temp_r0_5 != var_r30_5);
    }
    temp_r0_6 = temp_r31 + 0x37F8;
    temp_r27_2 = temp_r31 + 0x3178;
    temp_r26_2 = temp_r31 + 0x2AF8;
    temp_r25 = temp_r31 + 0x2478;
    if (temp_r0_6 != NULL) {
        var_r30_6 = temp_r31 + 0x3E78;
        if (temp_r0_6 != var_r30_6) {
            do {
                var_r30_6 -= 0x1A0;
                temp_r9_9 = M2C_FIELD(var_r30_6, void **, 0x19C);
                M2C_FIELD(temp_r9_9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(var_r30_6 + M2C_FIELD(temp_r9_9, s16 *, 8), 0);
            } while (temp_r0_6 != var_r30_6);
        }
    }
    if (temp_r27_2 != NULL) {
        var_r30_7 = temp_r0_6;
        if (temp_r27_2 != var_r30_7) {
            do {
                var_r30_7 -= 0x1A0;
                temp_r9_10 = M2C_FIELD(var_r30_7, void **, 0x19C);
                M2C_FIELD(temp_r9_10, M2C_UNK (**)(void *, M2C_UNK), 0xC)(var_r30_7 + M2C_FIELD(temp_r9_10, s16 *, 8), 0);
            } while (temp_r27_2 != var_r30_7);
        }
    }
    if (temp_r26_2 != NULL) {
        var_r30_8 = temp_r27_2;
        if (temp_r26_2 != var_r30_8) {
            do {
                var_r30_8 -= 0x1A0;
                temp_r9_11 = M2C_FIELD(var_r30_8, void **, 0x19C);
                M2C_FIELD(temp_r9_11, M2C_UNK (**)(void *, M2C_UNK), 0xC)(var_r30_8 + M2C_FIELD(temp_r9_11, s16 *, 8), 0);
            } while (temp_r26_2 != var_r30_8);
        }
    }
    if (temp_r25 != NULL) {
        var_r30_9 = temp_r26_2;
        if (temp_r25 != var_r30_9) {
            do {
                var_r30_9 -= 0x1A0;
                temp_r9_12 = M2C_FIELD(var_r30_9, void **, 0x19C);
                M2C_FIELD(temp_r9_12, M2C_UNK (**)(void *, M2C_UNK), 0xC)(var_r30_9 + M2C_FIELD(temp_r9_12, s16 *, 8), 0);
            } while (temp_r25 != var_r30_9);
        }
    }
    fn_802704BC(temp_r31 + 0x2284, 2);
    var_r30_10 = arg0 + 0x16504;
    fn_802704BC(temp_r31 + 0x2090, 2);
    fn_802704BC(temp_r31 + 0x1E9C, 2);
    fn_802704BC(temp_r31 + 0x1CA8, 2);
    fn_802704BC(temp_r31 + 0x1AB4, 2);
    MenuWidgetArray__Destroy(temp_r31 + 0x1258, 2);
    MenuWidgetArray__Destroy(temp_r31 + 0x9FC, 2);
    MenuWidgetArray__Destroy(temp_r31 + 0x1A0, 2);
    Sphere__DestroyCore(temp_r31, 2);
    UIList__Destroy(var_r30_10, 2);
    temp_r0_7 = arg0 + 0x159A4;
    if ((temp_r0_7 != NULL) && (temp_r0_7 != var_r30_10)) {
        do {
            var_r30_10 -= 0x1A0;
            temp_r9_13 = M2C_FIELD(var_r30_10, void **, 0x19C);
            M2C_FIELD(temp_r9_13, M2C_UNK (**)(void *, M2C_UNK), 0xC)(var_r30_10 + M2C_FIELD(temp_r9_13, s16 *, 8), 0);
        } while (temp_r0_7 != var_r30_10);
    }
    temp_r0_8 = arg0 + 0x14BF8;
    if (temp_r0_8 != NULL) {
        var_r30_11 = arg0 + 0x159A4;
        if (temp_r0_8 != var_r30_11) {
            do {
                var_r30_11 -= 0x1F4;
                temp_r9_14 = M2C_FIELD(var_r30_11, void **, 0x19C);
                M2C_FIELD(temp_r9_14, M2C_UNK (**)(void *, M2C_UNK), 0xC)(var_r30_11 + M2C_FIELD(temp_r9_14, s16 *, 8), 0);
            } while (temp_r0_8 != var_r30_11);
        }
    }
    fn_802704BC(arg0 + 0x14A04, 2);
    temp_r29_2 = arg0 + 0xF238;
    fn_802704BC(arg0 + 0x14810, 2);
    fn_802704BC(arg0 + 0x1461C, 2);
    fn_802704BC(arg0 + 0x14428, 2);
    fn_802704BC(arg0 + 0x14234, 2);
    MainMenu__DestroyPlayerSelectWidgetGroup(arg0 + 0x11F68, 2);
    MainMenu__DestroyPlayerSelectWidgetGroup(arg0 + 0xFC9C, 2);
    temp_r0_9 = arg0 + 0xF578;
    M2C_FIELD(temp_r29_2, M2C_UNK **, 0x19C) = &lbl_80336270;
    if (temp_r0_9 != NULL) {
        var_r30_12 = arg0 + 0xFC78;
        if (temp_r0_9 != var_r30_12) {
            do {
                var_r30_12 -= 0x1C0;
                temp_r9_15 = M2C_FIELD(var_r30_12, void **, 0x19C);
                M2C_FIELD(temp_r9_15, M2C_UNK (**)(void *, M2C_UNK), 0xC)(var_r30_12 + M2C_FIELD(temp_r9_15, s16 *, 8), 0);
            } while (temp_r0_9 != var_r30_12);
        }
    }
    Sphere__DestroyCore(temp_r29_2 + 0x1A0, 2);
    temp_r31_2 = arg0 + 0xD838;
    Sphere__DestroyCore(temp_r29_2, 2);
    MainMenu__DestroyLetterAnimationState(arg0 + 0xE844, 2);
    MainMenu__DestroyLetterAnimationChildList(arg0 + 0xE688, 2);
    fn_802704BC(arg0 + 0xE494, 2);
    fn_802704BC(arg0 + 0xE2A0, 2);
    fn_802704BC(arg0 + 0xE0AC, 2);
    fn_802704BC(arg0 + 0xDEB8, 2);
    Sphere__DestroyCore(arg0 + 0xDD18, 2);
    Sphere__DestroyCore(arg0 + 0xDB78, 2);
    Sphere__DestroyCore(arg0 + 0xD9D8, 2);
    Sphere__DestroyCore(temp_r31_2, 2);
    temp_r0_10 = arg0 + 0xD4F8;
    if (temp_r0_10 != NULL) {
        var_r30_13 = temp_r31_2;
        if (temp_r0_10 != var_r30_13) {
            do {
                var_r30_13 -= 0x1A0;
                temp_r9_16 = M2C_FIELD(var_r30_13, void **, 0x19C);
                M2C_FIELD(temp_r9_16, M2C_UNK (**)(void *, M2C_UNK), 0xC)(var_r30_13 + M2C_FIELD(temp_r9_16, s16 *, 8), 0);
            } while (temp_r0_10 != var_r30_13);
        }
    }
    temp_r0_11 = arg0 + 0xD1B8;
    flag = temp_r0_11 != var_r30_14;
    if (temp_r0_11 != NULL) {
        var_r30_14 = arg0 + 0xD4F8;
        if (flag) {
            do {
                var_r30_14 -= 0x1A0;
                temp_r9_17 = M2C_FIELD(var_r30_14, void **, 0x19C);
                M2C_FIELD(temp_r9_17, M2C_UNK (**)(void *, M2C_UNK), 0xC)(var_r30_14 + M2C_FIELD(temp_r9_17, s16 *, 8), 0);
            } while (flag);
        }
    }
    Sphere__DestroyCore(arg0 + 0xD018, 2);
    Sphere__DestroyCore(arg0 + 0xCE78, 2);
    Sphere__DestroyCore(arg0 + 0xCCD8, 2);
    Sphere__DestroyCore(arg0 + 0xCB38, 2);
    Sphere__DestroyCore(arg0 + 0xC998, 2);
    Sphere__DestroyCore(arg0 + 0xC7F8, 2);
    Sphere__DestroyCore(arg0 + 0xC658, 2);
    Sphere__DestroyCore(arg0 + 0xC4B8, 2);
    Sphere__DestroyCore(arg0 + 0xC318, 2);
    fn_802704BC(arg0 + 0xC124, 2);
    fn_802704BC(arg0 + 0xBF30, 2);
    fn_802704BC(arg0 + 0xBD3C, 2);
    fn_802704BC(arg0 + 0xBB48, 2);
    Sphere__DestroyCore(arg0 + 0xB9A8, 2);
    Sphere__DestroyCore(arg0 + 0xB808, 2);
    fn_802704BC(arg0 + 0xB614, 2);
    fn_802704BC(arg0 + 0xB420, 2);
    fn_802704BC(arg0 + 0xB22C, 2);
    Sphere__DestroyCore(arg0 + 0xB08C, 2);
    fn_802704BC(arg0 + 0xAE98, 2);
    fn_80267A1C(arg0, arg1);
}
