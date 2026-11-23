/* AI__UpdateCellJuniorGroupCompletion @ 0x800870B4 (size: 0x160, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void AI__MarkAllCellJuniorsForDeath(void);
extern M2C_UNK lbl_803945E4 __attribute__((section(".data")));
extern void *lbl_803DCCB8;

s32 AI__UpdateCellJuniorGroupCompletion(s32 arg0) {
    register void *var_r10;
    s32 var_r30;
    s32 var_r31;
    s32 var_r5;
    void *temp_r11;
    void *temp_r11_2;
    s32 var_r28;
    void *var_r10_2;

    var_r5 = 0;
    var_r28 = 0;
    var_r31 = 0;
    var_r30 = 0;
    var_r10 = M2C_FIELD(lbl_803DCCB8, void **, 0x20);
    if (var_r10 != NULL) {
        do {
            temp_r11 = M2C_FIELD(var_r10, void **, 0);
            if (((s32) (M2C_FIELD(temp_r11, s32 *, 0) & M2C_FIELD(&lbl_803945E4, s32 *, 4)) == (s32) M2C_FIELD(&lbl_803945E4, s32 *, 0)) && ((s32) M2C_FIELD(M2C_FIELD(temp_r11, void **, 0x19D8), s32 *, 0xC) == 0x29) && ((s32) M2C_FIELD(M2C_FIELD(temp_r11, void **, 0xB8C), s32 *, 0x51C) != 0)) {
                var_r30 += 1;
            }
            if (var_r10 != NULL) {
                var_r10 = M2C_FIELD(var_r10, void **, 0x14);
            } else {
                var_r10 = M2C_FIELD(lbl_803DCCB8, void **, 0x20);
            }
        } while (var_r10 != NULL);
    }
    var_r10_2 = M2C_FIELD(lbl_803DCCB8, void **, 0x14);
    if (var_r10_2 != NULL) {
        do {
            temp_r11_2 = M2C_FIELD(var_r10_2, void **, 0);
            if ((s32) M2C_FIELD(&lbl_803945E4, s32 *, 0) == (s32) (M2C_FIELD(temp_r11_2, s32 *, 0) & M2C_FIELD(&lbl_803945E4, s32 *, 4))) {
                temp_r11 = M2C_FIELD(temp_r11_2, void **, 0xB8C);
                if (((s32) M2C_FIELD(M2C_FIELD(temp_r11_2, void **, 0x19D8), s32 *, 0xC) == 0x29) && ((s32) M2C_FIELD(temp_r11, s32 *, 0x138) == 0)) {
                    var_r31 += 1;
                }
                if ((s32) M2C_FIELD(temp_r11, s32 *, 0x554) != 0) {
                    var_r5 += 1;
                }
            }
            if (var_r10_2 != NULL) {
                var_r10_2 = M2C_FIELD(var_r10_2, void **, 0x14);
            } else {
                var_r10_2 = M2C_FIELD(lbl_803DCCB8, void **, 0x14);
            }
        } while (var_r10_2 != NULL);
    }
    if (var_r5 == 6) {
        AI__MarkAllCellJuniorsForDeath();
    }
    if ((var_r30 == var_r31) && (var_r31 == 6)) {
        var_r28 = 1;
        AI__MarkAllCellJuniorsForDeath();
    }
    return var_r28;
}
