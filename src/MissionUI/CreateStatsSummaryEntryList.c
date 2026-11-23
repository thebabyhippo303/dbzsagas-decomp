/* MissionUI__CreateStatsSummaryEntryList @ 0x80124B98 (size: 0x184, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

char * Mem__NewArray(s32);
s32 MissionStats__GetSummaryEntryCount(void);
void Sphere__AddChild(void *, void *);
void fn_80270450(void *);
M2C_UNK MissionUI__ConfigureStatsSummaryEntryRow(void *, s32); /* extern */
extern f32 lbl_80327538 __attribute__((section(".data")));
extern f32 lbl_80327548 __attribute__((section(".data")));
extern f32 lbl_8032754C __attribute__((section(".data")));
extern f32 lbl_80327550;

void MissionUI__CreateStatsSummaryEntryList(void *arg0) {
    char *p_b080;
    f32 temp_f29;
    f32 temp_f30;
    s32 temp_r3;
    s32 var_r27;
    s32 var_r30;
    s32 var_r30_2;
    void *temp_r11;
    void *temp_r29;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r9;
    void *temp_r9_2;
    void *var_r31;

    temp_r3 = MissionStats__GetSummaryEntryCount();
    var_r30 = temp_r3 - 1;
    temp_r29 = Mem__NewArray((temp_r3 * 0x1F4) + 8) + 8;
    M2C_FIELD(temp_r29, s32 *, -8) = temp_r3;
    var_r31 = temp_r29;
    if (temp_r3 != 0) {
        while ((var_r30 == 0) == 0) {
            fn_80270450(var_r31);
            var_r31 += 0x1F4;
            var_r30 -= 1;
        }
    }
    p_b080 = (char *)arg0 + 0xb080;
    M2C_FIELD(p_b080, void **, 0x4) = temp_r29;
    var_r27 = 0;
    if (var_r27 < temp_r3) {
        temp_f29 = lbl_80327548;
        temp_f30 = lbl_8032754C;
        var_r30_2 = 0;
        do {
            temp_r3_2 = var_r30_2 + M2C_FIELD(p_b080, void **, 0x4);
            temp_r9 = M2C_FIELD(temp_r3_2, void **, 0x19C);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x42C)(temp_r3_2 + M2C_FIELD(temp_r9, s16 *, 0x428));
            temp_r3_3 = var_r30_2 + M2C_FIELD(p_b080, void **, 0x4);
            temp_r9_2 = M2C_FIELD(temp_r3_3, void **, 0x19C);
            M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x1FC)(temp_r3_3 + M2C_FIELD(temp_r9_2, s16 *, 0x1F8));
            if ((s32) M2C_FIELD(arg0, s32 *, 0xB7A8) == 1) {
                temp_r3_4 = var_r30_2 + M2C_FIELD(p_b080, void **, 0x4);
                temp_r11 = M2C_FIELD(temp_r3_4, void **, 0x19C);
                M2C_FIELD(temp_r11, M2C_UNK (**)(void *, f32, f32), 0xAC)(temp_r3_4 + M2C_FIELD(temp_r11, s16 *, 0xA8), lbl_80327550, ((f32) (f64) temp_f29 * var_r27) + temp_f30);
            } else {
                MissionUI__ConfigureStatsSummaryEntryRow(arg0, var_r27);
            }
            Sphere__AddChild(arg0 + 0x344, M2C_FIELD(p_b080, void **, 0x4) + var_r30_2);
            var_r27 += 1;
            var_r30_2 += 0x1F4;
        } while (var_r27 < temp_r3);
    }
}
