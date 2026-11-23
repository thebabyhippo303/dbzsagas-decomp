/* HUD__InitializeHourglassTimerWidgets @ 0x8010F160 (size: 0x268, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
#define VFIELD(p, o) (*(volatile f32 *)((char *)(p) + (o)))

void HUD__ClearHourglassTimerWidgets(void *);
void * fn_801842C4(unsigned int);
s32 fn_8026B590(void *);
f32 fn_8026B86C(void);
extern f32 lbl_80326440 __attribute__((section(".data")));
extern f32 lbl_80326444 __attribute__((section(".data")));
extern f32 lbl_80326448 __attribute__((section(".data")));
extern f32 lbl_8032644C __attribute__((section(".data")));
extern f32 lbl_80326450 __attribute__((section(".data")));
extern f32 lbl_80326454 __attribute__((section(".data")));
extern f32 lbl_80326458 __attribute__((section(".data")));
extern f32 lbl_8032645C __attribute__((section(".data")));
extern f32 lbl_80326460 __attribute__((section(".data")));
extern M2C_UNK lbl_803A35A0 __attribute__((section(".data")));
extern void *lbl_803DC3B4;

void HUD__InitializeHourglassTimerWidgets(void *arg0) {
    M2C_UNK (*temp_r9_2)(void *, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK (*temp_r9_5)(void *, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    f32 temp_f31;
    f32 temp_f13;
    f32 temp_f12;
    f32 temp_base;
    char *globalBase;
    void *temp_r10;
    void *temp_r10_2;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r11_4;
    void *temp_r29;
    void *temp_r29_2;
    void *temp_r29_3;
    void *temp_r29_4;
    void *temp_r30;
    void *temp_r30_2;
    void *temp_r30_3;
    void *temp_r30_4;
    void *temp_r8;
    void *temp_r9;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_6;
    s32 temp_created;
    void *temp_r9_7;
    void *g;

    HUD__ClearHourglassTimerWidgets(arg0);
    globalBase = (char *)&lbl_803A35A0;

    temp_base = M2C_FIELD(globalBase, f32 *, 0x24);
    temp_f13 = lbl_80326440;
    temp_f12 = lbl_80326444;
    VFIELD(arg0, 0x2BD4) = temp_base;
    temp_f31 = lbl_80326448;
    temp_base = M2C_FIELD(globalBase, f32 *, 0x24);
    VFIELD(arg0, 0x2BC4) = temp_base;
    VFIELD(arg0, 0x2BC8) = temp_base + temp_f13;
    if ((void *) M2C_FIELD(arg0, void **, 0x2BBC) == NULL) {
        VFIELD(arg0, 0x2BCC) = temp_f31;
        VFIELD(arg0, 0x2BD0) = temp_base + temp_f12;
        temp_created = fn_8026B590(fn_801842C4(0x1A0U));
        g = lbl_803DC3B4;
        M2C_FIELD(arg0, s32 *, 0x2BBC) = temp_created;
        temp_r9 = M2C_FIELD((void *)temp_created, void **, 0x19C);
        temp_r9_2 = M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32, s32, s32, s32, s32), 0x14);
        temp_r9_2((char *)temp_created + M2C_FIELD(temp_r9, s16 *, 0x10), M2C_FIELD(g, s32 *, 0xC), 0, 0, 1, 1);
        temp_r10 = M2C_FIELD(arg0, void **, 0x2BBC);
        temp_r11 = M2C_FIELD(temp_r10, void **, 0x19C);
        M2C_FIELD(temp_r11, M2C_UNK (**)(void *, f32, f32), 0xEC)(temp_r10 + M2C_FIELD(temp_r11, s16 *, 0xE8), lbl_8032644C, lbl_8032644C);
        temp_r30 = M2C_FIELD(arg0, void **, 0x2BBC);
        temp_r29 = M2C_FIELD(temp_r30, void **, 0x19C);
        temp_r29_2 = temp_r29 + 0xA8;
        temp_r30_2 = temp_r30 + M2C_FIELD(temp_r29, s16 *, 0xA8);
        M2C_FIELD(temp_r29_2, M2C_UNK (**)(void *, f32, f32), 4)(temp_r30_2, (fn_8026B86C() - lbl_80326450) - lbl_80326454, lbl_80326458);
        temp_r11_2 = M2C_FIELD(arg0, void **, 0x2BBC);
        temp_r9_3 = M2C_FIELD(temp_r11_2, void **, 0x19C);
        M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, M2C_UNK), 0x1B4)(temp_r11_2 + M2C_FIELD(temp_r9_3, s16 *, 0x1B0), 7);
    }
    if ((void *) M2C_FIELD(arg0, void **, 0x2BC0) == NULL) {
        temp_created = fn_8026B590(fn_801842C4(0x1A0U));
        g = lbl_803DC3B4;
        M2C_FIELD(arg0, s32 *, 0x2BC0) = temp_created;
        temp_r9_4 = M2C_FIELD((void *)temp_created, void **, 0x19C);
        temp_r9_5 = M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *, s32, s32, s32, s32, s32), 0x14);
        temp_r9_5((char *)temp_created + M2C_FIELD(temp_r9_4, s16 *, 0x10), M2C_FIELD(g, s32 *, 0xC), 1, 0, 1, 1);
        temp_r10_2 = M2C_FIELD(arg0, void **, 0x2BC0);
        temp_r11_3 = M2C_FIELD(temp_r10_2, void **, 0x19C);
        M2C_FIELD(temp_r11_3, M2C_UNK (**)(void *, f32, f32), 0xEC)(temp_r10_2 + M2C_FIELD(temp_r11_3, s16 *, 0xE8), lbl_8032644C, lbl_8032644C);
        temp_r30_3 = M2C_FIELD(arg0, void **, 0x2BC0);
        temp_r29_3 = M2C_FIELD(temp_r30_3, void **, 0x19C);
        temp_r29_4 = temp_r29_3 + 0xA8;
        temp_r30_4 = temp_r30_3 + M2C_FIELD(temp_r29_3, s16 *, 0xA8);
        M2C_FIELD(temp_r29_4, M2C_UNK (**)(void *, f32, f32), 4)(temp_r30_4, (fn_8026B86C() - lbl_80326450) - lbl_80326454, lbl_80326458);
        temp_r8 = M2C_FIELD(arg0, void **, 0x2BC0);
        temp_r9_6 = M2C_FIELD(temp_r8, void **, 0x19C);
        M2C_FIELD(temp_r9_6, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x2D4)(temp_r8 + M2C_FIELD(temp_r9_6, s16 *, 0x2D0), lbl_8032645C, lbl_80326460, temp_f31, temp_f31);
        temp_r11_4 = M2C_FIELD(arg0, void **, 0x2BC0);
        temp_r9_7 = M2C_FIELD(temp_r11_4, void **, 0x19C);
        M2C_FIELD(temp_r9_7, M2C_UNK (**)(void *, M2C_UNK), 0x1B4)(temp_r11_4 + M2C_FIELD(temp_r9_7, s16 *, 0x1B0), 7);
    }
}
