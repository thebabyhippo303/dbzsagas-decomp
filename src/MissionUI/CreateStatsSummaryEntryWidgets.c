/* MissionUI__CreateStatsSummaryEntryWidgets @ 0x80124DE4 (size: 0x30C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 MissionStats__GetSummaryEntryCount(void);
void Sphere__AddChild(void *, void *);
char * Mem__NewArray(s32);
void fn_80270450(void *);
extern f32 lbl_80327568 __attribute__((section(".data")));
extern f32 lbl_8032756C __attribute__((section(".data")));
extern f32 lbl_80327578 __attribute__((section(".data")));
extern f32 lbl_8032757C __attribute__((section(".data")));

void MissionUI__CreateStatsSummaryEntryWidgets(u8 *arg0) {
    M2C_UNK spC;
    f32 sp8;
    f32 temp_f28;
    f32 temp_f30;
    f32 temp_f31;
    s32 temp_cr0_eq;
    s32 temp_r3;
    s32 var_r27;
    s32 var_r30;
    s32 var_r30_2;
    s32 var_r30_3;
    void *temp_r10;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r29;
    void *temp_r29_2;
    void *temp_r29_3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r3_6;
    void *temp_r3_7;
    void *temp_r3_8;
    void *temp_r3_9;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;
    void *temp_r9_8;
    void *temp_r9_9;
    void *var_r31;
    void *var_r31_2;

    temp_r3 = MissionStats__GetSummaryEntryCount();
    var_r30 = temp_r3 - 1;
    temp_r29 = Mem__NewArray((temp_r3 * 0x1F4) + 8) + 8;
    M2C_FIELD(temp_r29, s32 *, -8) = temp_r3;
    var_r31 = temp_r29;
    if (temp_r3 != 0) {
        do {
            fn_80270450(var_r31);
            var_r31 += 0x1F4;
            temp_cr0_eq = var_r30 == 0;
            var_r30 -= 1;
        } while (temp_cr0_eq == 0);
    }
    M2C_FIELD(arg0, void **, 0xB088) = temp_r29;
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB7A8) == 2) {
        var_r30_2 = temp_r3 - 1;
        temp_r29_2 = Mem__NewArray((temp_r3 * 0x1F4) + 8) + 8;
        M2C_FIELD(temp_r29_2, s32 *, -8) = temp_r3;
        var_r31_2 = temp_r29_2;
        if (temp_r3 != 0) {
            do {
                fn_80270450(var_r31_2);
                var_r31_2 += 0x1F4;
                var_r30_2 -= 1;
            } while ((var_r30_2 == 0) == 0);
        }
        M2C_FIELD(arg0, void **, 0xB08C) = temp_r29_2;
    }
    var_r27 = 0;
    if (temp_r3 > 0) {
        temp_f28 = lbl_8032757C;
        var_r30_3 = 0;
        do {
            temp_r11 = M2C_FIELD(arg0, void **, 0xB2C4);
            temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *, f32 *, M2C_UNK *), 0xB4)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0xB0), &sp8, &spC);
            temp_r3_2 = var_r30_3 + M2C_FIELD(arg0, void **, 0xB088);
            temp_r9_2 = M2C_FIELD(temp_r3_2, void **, 0x19C);
            M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, f32), 0x42C)(temp_r3_2 + M2C_FIELD(temp_r9_2, s16 *, 0x428), lbl_80327568);
            if ((s32) M2C_FIELD(arg0, s32 *, 0xB7A8) == 2) {
                temp_r3_3 = var_r30_3 + M2C_FIELD(arg0, void **, 0xB088);
                temp_r11 = M2C_FIELD(temp_r3_3, void **, 0x19C);
                M2C_FIELD(temp_r11, M2C_UNK (**)(void *, f32, f32), 0xEC)(temp_r3_3 + M2C_FIELD(temp_r11, s16 *, 0xE8), lbl_8032756C, lbl_8032756C);
            }
            temp_r29_3 = arg0 + 0x344;
            temp_r11_2 = var_r30_3 + M2C_FIELD(arg0, void **, 0xB088);
            temp_f30 = lbl_80327578;
            temp_r10 = M2C_FIELD(temp_r11_2, void **, 0x19C);
            temp_f31 = ((f32) (f64) var_r27 * temp_f30) + temp_f28;
            M2C_FIELD(temp_r10, M2C_UNK (**)(void *, f32, f32), 0xAC)(temp_r11_2 + M2C_FIELD(temp_r10, s16 *, 0xA8), sp8, temp_f31);
            temp_r3_4 = var_r30_3 + M2C_FIELD(arg0, void **, 0xB088);
            temp_r9_4 = M2C_FIELD(temp_r3_4, void **, 0x19C);
            M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *, f32), 0x3EC)(temp_r3_4 + M2C_FIELD(temp_r9_4, s16 *, 0x3E8), temp_f30);
            Sphere__AddChild(temp_r29_3, M2C_FIELD(arg0, void **, 0xB088) + var_r30_3);
            if ((s32) M2C_FIELD(arg0, s32 *, 0xB7A8) == 2) {
                temp_r3_5 = M2C_FIELD(arg0, void **, 0xB2C4);
                temp_r9_5 = M2C_FIELD(temp_r3_5, void **, 0x390);
                M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *, f32 *, M2C_UNK *), 0xB4)(temp_r3_5 + 0x1F4 + M2C_FIELD(temp_r9_5, s16 *, 0xB0), &sp8, &spC);
                temp_r3_6 = var_r30_3 + M2C_FIELD(arg0, void **, 0xB08C);
                temp_r9_6 = M2C_FIELD(temp_r3_6, void **, 0x19C);
                M2C_FIELD(temp_r9_6, M2C_UNK (**)(void *, f32), 0x42C)(temp_r3_6 + M2C_FIELD(temp_r9_6, s16 *, 0x428), lbl_80327568);
                temp_r3_7 = var_r30_3 + M2C_FIELD(arg0, void **, 0xB08C);
                temp_r9_7 = M2C_FIELD(temp_r3_7, void **, 0x19C);
                M2C_FIELD(temp_r9_7, M2C_UNK (**)(void *, f32, f32), 0xEC)(temp_r3_7 + M2C_FIELD(temp_r9_7, s16 *, 0xE8), lbl_8032756C, lbl_8032756C);
                temp_r3_8 = var_r30_3 + M2C_FIELD(arg0, void **, 0xB08C);
                temp_r9_8 = M2C_FIELD(temp_r3_8, void **, 0x19C);
                M2C_FIELD(temp_r9_8, M2C_UNK (**)(void *, f32, f32), 0xAC)(temp_r3_8 + M2C_FIELD(temp_r9_8, s16 *, 0xA8), sp8, temp_f31);
                temp_r3_9 = var_r30_3 + M2C_FIELD(arg0, void **, 0xB08C);
                temp_r9_9 = M2C_FIELD(temp_r3_9, void **, 0x19C);
                M2C_FIELD(temp_r9_9, M2C_UNK (**)(void *, f32), 0x3EC)(temp_r3_9 + M2C_FIELD(temp_r9_9, s16 *, 0x3E8), temp_f30);
                Sphere__AddChild(temp_r29_3, M2C_FIELD(arg0, void **, 0xB08C) + var_r30_3);
            }
            var_r27 += 1;
            var_r30_3 += 0x1F4;
        } while (var_r27 < temp_r3);
    }
}
