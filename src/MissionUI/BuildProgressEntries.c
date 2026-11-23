/* MissionUI__BuildProgressEntries @ 0x8011BB64 (size: 0x470, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

char * Mem__NewArray(s32);
int MissionProgress__GetCount(void);
s32 PickupManager__CountPickupsByType(void *, s32);
void Sphere__AddChild(void *, void *);
void fn_80270450(void *);
s32 *MissionProgress__GetByIndex(s32);              /* extern */
extern f32 lbl_8032717C __attribute__((section(".data")));
extern f32 lbl_80327180 __attribute__((section(".data")));
extern f32 lbl_80327184 __attribute__((section(".data")));
extern f32 lbl_80327188 __attribute__((section(".data")));
extern f32 lbl_8032718C __attribute__((section(".data")));
extern f32 lbl_80327190 __attribute__((section(".data")));
extern f32 lbl_80327194 __attribute__((section(".data")));
extern f32 lbl_80327198 __attribute__((section(".data")));
extern f32 lbl_8032719C __attribute__((section(".data")));
extern void *lbl_803DC3C0;
extern void *lbl_803DC5EC;

void MissionUI__BuildProgressEntries(void *arg0) {
    f32 temp_f1;
    f32 temp_f29;
    f32 temp_f29_2;
    f32 temp_f30;
    f32 temp_f31;
    f32 var_f31;
    s32 temp_cr0_eq;
    s32 temp_r3;
    s32 var_r26;
    s32 var_r26_2;
    s32 var_r29;
    s32 var_r29_2;
    s32 var_r31;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r29;
    void *temp_r29_2;
    void *temp_r29_3;
    void *temp_r30;
    void *temp_r30_2;
    void *temp_r30_3;
    void *temp_r30_4;
    void *temp_r31;
    void *temp_r3_10;
    void *temp_r3_11;
    void *temp_r3_12;
    void *temp_r3_13;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r3_6;
    void *temp_r3_7;
    void *temp_r3_8;
    void *temp_r3_9;
    void *temp_r9;
    void *temp_r9_10;
    void *temp_r9_11;
    void *temp_r9_12;
    void *temp_r9_13;
    void *temp_r9_14;
    void *temp_r9_15;
    void *temp_r9_16;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;
    void *temp_r9_8;
    void *temp_r9_9;
    void *var_r30;

    temp_r3 = MissionProgress__GetCount();
    M2C_FIELD(arg0, s32 *, 0xAEA0) = temp_r3;
    if ((void *) M2C_FIELD(arg0, void **, 0xAE9C) == NULL) {
        var_r29 = temp_r3 - 1;
        temp_r31 = Mem__NewArray((temp_r3 * 0x1F4) + 8) + 8;
        M2C_FIELD(temp_r31, s32 *, -8) = temp_r3;
        var_r30 = temp_r31;
        if (temp_r3 != 0) {
            do {
                fn_80270450(var_r30);
                var_r30 += 0x1F4;
                temp_cr0_eq = var_r29 == 0;
                var_r29 -= 1;
            } while (temp_cr0_eq == 0);
        }
        M2C_FIELD(arg0, void **, 0xAE9C) = temp_r31;
    }
    var_r26 = 0;
    if (var_r26 < (s32) M2C_FIELD(arg0, s32 *, 0xAEA0)) {
        temp_f29 = lbl_80327180;
        var_r31 = 0;
        do {
            Sphere__AddChild(arg0 + 0x344, M2C_FIELD(arg0, void **, 0xAE9C) + var_r31);
            temp_r30 = var_r31 + M2C_FIELD(arg0, void **, 0xAE9C);
            temp_r29 = M2C_FIELD(temp_r30, void **, 0x19C);
            temp_r29_2 = temp_r29 + 0x368;
            temp_r30_2 = temp_r30 + M2C_FIELD(temp_r29, s16 *, 0x368);
            M2C_FIELD(temp_r29_2, M2C_UNK (**)(void *, s32), 4)(temp_r30_2, *MissionProgress__GetByIndex(var_r26));
            temp_r3_2 = var_r31 + M2C_FIELD(arg0, void **, 0xAE9C);
            temp_r9 = M2C_FIELD(temp_r3_2, void **, 0x19C);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *, f32, f32), 0xEC)(temp_r3_2 + M2C_FIELD(temp_r9, s16 *, 0xE8), lbl_8032717C, lbl_8032717C);
            temp_r9_2 = M2C_FIELD(arg0, void **, 0x19C);
            temp_r30_3 = var_r31 + M2C_FIELD(arg0, void **, 0xAE9C);
            temp_r29_3 = M2C_FIELD(temp_r30_3, void **, 0x19C);
            temp_r30_4 = temp_r30_3 + M2C_FIELD(temp_r29_3, s16 *, 0x3E0);
            temp_r11 = M2C_FIELD(arg0, void **, 0xAEC0);
            temp_f31 = M2C_FIELD(temp_r9_2, f32 (**)(void *), 0x234)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0x230));
            temp_r9_3 = M2C_FIELD(temp_r11, void **, 0x19C);
            M2C_FIELD((temp_r29_3 + 0x3E0), M2C_UNK (**)(void *, f32, f32, f32), 4)(temp_r30_4, lbl_80327184, lbl_8032717C, lbl_8032717C);
            temp_r3_3 = var_r31 + M2C_FIELD(arg0, void **, 0xAE9C);
            temp_r9_4 = M2C_FIELD(temp_r3_3, void **, 0x19C);
            M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *), 0x1FC)(temp_r3_3 + M2C_FIELD(temp_r9_4, s16 *, 0x1F8));
            temp_r3_4 = var_r31 + M2C_FIELD(arg0, void **, 0xAE9C);
            temp_r9_5 = M2C_FIELD(temp_r3_4, void **, 0x19C);
            temp_r11_2 = var_r31 + M2C_FIELD(arg0, void **, 0xAE9C);
            temp_r9_6 = M2C_FIELD(temp_r11_2, void **, 0x19C);
            M2C_FIELD(temp_r9_6, M2C_UNK (**)(void *), 0x3B4)(temp_r11_2 + M2C_FIELD(temp_r9_6, s16 *, 0x3B0));
            temp_r3_5 = var_r31 + M2C_FIELD(arg0, void **, 0xAE9C);
            temp_r9_7 = M2C_FIELD(temp_r3_5, void **, 0x19C);
            M2C_FIELD(temp_r9_7, M2C_UNK (**)(void *), 0x3BC)(temp_r3_5 + M2C_FIELD(temp_r9_7, s16 *, 0x3B8));
            if ((s32) *(M2C_FIELD(temp_r9_5, u8 *(**)(void *), 0x3AC)(temp_r3_4 + M2C_FIELD(temp_r9_5, s16 *, 0x3A8))) == 0x20) {
                temp_r3_6 = var_r31 + M2C_FIELD(arg0, void **, 0xAE9C);
                temp_r9_8 = M2C_FIELD(temp_r3_6, void **, 0x19C);
                M2C_FIELD(temp_r9_8, M2C_UNK (**)(void *, f32), 0x46C)(temp_r3_6 + M2C_FIELD(temp_r9_8, s16 *, 0x468), lbl_80327188);
            } else {
                temp_r3_7 = var_r31 + M2C_FIELD(arg0, void **, 0xAE9C);
                temp_r9_9 = M2C_FIELD(temp_r3_7, void **, 0x19C);
                M2C_FIELD(temp_r9_9, M2C_UNK (**)(void *, f32), 0x46C)(temp_r3_7 + M2C_FIELD(temp_r9_9, s16 *, 0x468), lbl_8032718C);
            }
            temp_r3_8 = var_r31 + M2C_FIELD(arg0, void **, 0xAE9C);
            temp_r9_10 = M2C_FIELD(temp_r3_8, void **, 0x19C);
            M2C_FIELD(temp_r9_10, M2C_UNK (**)(void *, M2C_UNK), 0x1B4)(temp_r3_8 + M2C_FIELD(temp_r9_10, s16 *, 0x1B0), 0x258);
            temp_r3_9 = var_r31 + M2C_FIELD(arg0, void **, 0xAE9C);
            temp_r9_11 = M2C_FIELD(temp_r3_9, void **, 0x19C);
            M2C_FIELD(temp_r9_11, M2C_UNK (**)(void *), 0x3C)(temp_r3_9 + M2C_FIELD(temp_r9_11, s16 *, 0x38));
            if (((s32) M2C_FIELD(MissionProgress__GetByIndex(var_r26), s32 *, 8) != 0) || (((s32) M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4) == 2) && (PickupManager__CountPickupsByType(lbl_803DC5EC, 8) == 0) && ((u32) (var_r26 - 1) <= 1U))) {
                temp_r3_10 = var_r31 + M2C_FIELD(arg0, void **, 0xAE9C);
                temp_r9_12 = M2C_FIELD(temp_r3_10, void **, 0x19C);
                M2C_FIELD(temp_r9_12, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x10C)(temp_r3_10 + M2C_FIELD(temp_r9_12, s16 *, 0x108), lbl_80327190, lbl_80327190, lbl_80327190, lbl_80327190);
            } else {
                temp_r3_11 = var_r31 + M2C_FIELD(arg0, void **, 0xAE9C);
                temp_r9_13 = M2C_FIELD(temp_r3_11, void **, 0x19C);
                M2C_FIELD(temp_r9_13, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x10C)(temp_r3_11 + M2C_FIELD(temp_r9_13, s16 *, 0x108), lbl_80327194, lbl_80327194, lbl_80327194, lbl_80327194);
            }
            temp_r3_12 = var_r31 + M2C_FIELD(arg0, void **, 0xAE9C);
            temp_r9_14 = M2C_FIELD(temp_r3_12, void **, 0x19C);
            temp_f1 = M2C_FIELD(temp_r9_14, f32 (**)(void *), 0x3B4)(temp_r3_12 + M2C_FIELD(temp_r9_14, s16 *, 0x3B0));
            M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0lt */);
            if (0 == 0) {

            }
            var_r26 += 1;
            var_r31 += 0x1F4;
        } while (var_r26 < (s32) M2C_FIELD(arg0, s32 *, 0xAEA0));
    }
    var_r26_2 = 0;
    var_f31 = lbl_8032717C;
    if ((s32) M2C_FIELD(arg0, s32 *, 0xAEA0) > 0) {
        temp_f30 = lbl_80327198;
        var_r29_2 = 0;
        temp_f29_2 = lbl_8032719C;
        while (var_r26_2 < (s32) M2C_FIELD(arg0, s32 *, 0xAEA0)) {
            temp_r11_3 = var_r29_2 + M2C_FIELD(arg0, void **, 0xAE9C);
            var_r26_2 += 1;
            temp_r9_15 = M2C_FIELD(temp_r11_3, void **, 0x19C);
            M2C_FIELD(temp_r9_15, M2C_UNK (**)(void *, f32, f32), 0xAC)(temp_r11_3 + M2C_FIELD(temp_r9_15, s16 *, 0xA8), temp_f30, var_f31 + temp_f30);
            temp_r3_13 = var_r29_2 + M2C_FIELD(arg0, void **, 0xAE9C);
            temp_r9_16 = M2C_FIELD(temp_r3_13, void **, 0x19C);
            var_r29_2 += 0x1F4;
            var_f31 += M2C_FIELD(temp_r9_16, f32 (**)(void *), 0x3BC)(temp_r3_13 + M2C_FIELD(temp_r9_16, s16 *, 0x3B8)) + temp_f29_2;
        }
    }
}
