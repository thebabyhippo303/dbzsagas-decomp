/* UiSpriteResources__LoadDatabases @ 0x8000E890 (size: 0x1F4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * dblLoad(const char *, void *, int);
int sprintf(char *, const char *, ...);
extern s8 lbl_8030D580 __attribute__((section(".data")));
extern s8 lbl_8030D594 __attribute__((section(".data")));
extern s8 lbl_8030D5A8 __attribute__((section(".data")));
extern s8 lbl_8030D5C4 __attribute__((section(".data")));
extern M2C_UNK lbl_8030D5E0 __attribute__((section(".data")));
extern s8 lbl_8030D600 __attribute__((section(".data")));
extern s8 lbl_8030D614 __attribute__((section(".data")));
extern s8 lbl_8030D62C __attribute__((section(".data")));
extern s8 lbl_8030D648 __attribute__((section(".data")));
extern s8 lbl_8030D660 __attribute__((section(".data")));
extern s8 lbl_8030D674 __attribute__((section(".data")));
extern s8 lbl_8030D68C __attribute__((section(".data")));
extern s8 lbl_8030D6A4 __attribute__((section(".data")));
extern M2C_UNK lbl_8030D6BC __attribute__((section(".data")));
extern s8 lbl_8030D6C8 __attribute__((section(".data")));
extern s8 lbl_80391180 __attribute__((section(".data")));
extern void *lbl_803DC3C0;

void UiSpriteResources__LoadDatabases(void *arg0) {
    s8 sp8[52];
    s32 temp_r6;
    s32 var_r30;
    void **var_r31;

    M2C_FIELD(arg0, void **, 0) = dblLoad(&lbl_8030D580, NULL, 0);
    M2C_FIELD(arg0, void **, 4) = dblLoad(&lbl_8030D594, NULL, 0);
    if ((s32) M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4) == 0) {
        M2C_FIELD(arg0, void **, 0x20) = dblLoad(&lbl_8030D5A8, NULL, 0);
        M2C_FIELD(arg0, void **, 0x24) = dblLoad(&lbl_8030D5C4, NULL, 0);
        var_r31 = arg0 + 0x34;
        var_r30 = NULL;
        do {
            var_r30 += 1;
            sprintf(sp8, &lbl_8030D5E0, var_r30);
            *var_r31 = dblLoad(sp8, NULL, 0);
            var_r31 += 4;
        } while (var_r30 <= 0x14);
    } else {
        M2C_FIELD(arg0, void **, 0x28) = dblLoad(&lbl_8030D600, NULL, 0);
        M2C_FIELD(arg0, void **, 0x10) = dblLoad(&lbl_8030D614, NULL, 0);
        M2C_FIELD(arg0, void **, 0x14) = dblLoad(&lbl_8030D62C, NULL, 0);
        M2C_FIELD(arg0, void **, 0x1C) = dblLoad(&lbl_8030D648, NULL, 0);
        M2C_FIELD(arg0, void **, 8) = dblLoad(&lbl_8030D660, NULL, 0);
        M2C_FIELD(arg0, void **, 0xC) = dblLoad(&lbl_8030D674, NULL, 0);
        M2C_FIELD(arg0, void **, 0x88) = dblLoad(&lbl_8030D68C, NULL, 0);
    }
    M2C_FIELD(arg0, void **, 0x2C) = dblLoad(&lbl_8030D6A4, NULL, 0);
    temp_r6 = M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4) - 1;
    if ((u32) (temp_r6 - 1) <= 0x13U) {
        sprintf(&lbl_80391180, &lbl_8030D6BC, &lbl_8030D6C8, temp_r6);
        M2C_FIELD(arg0, void **, 0x30) = dblLoad(&lbl_80391180, NULL, 0);
    }
}

