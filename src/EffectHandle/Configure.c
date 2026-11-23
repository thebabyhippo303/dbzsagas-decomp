/* EffectHandle__Configure @ 0x8022F190 (size: 0x1E8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern M2C_UNK lbl_80373F98 __attribute__((section(".data")));
extern M2C_UNK lbl_803AD8B8 __attribute__((section(".data")));
extern s32 lbl_803ADD8C __attribute__((section(".data")));

s32 EffectHandle__Configure(u32 arg0, s16 arg1, s16 arg2, s32 arg3, void *arg4, M2C_UNK *arg5, M2C_UNK *arg6) {
    M2C_UNK *var_r12;
    M2C_UNK *var_r8;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r11;
    s32 temp_r6;
    s32 var_cr0_eq;
    s32 var_r11;
    s32 var_r5;
    s32 var_r9_2;
    void *temp_r30;
    void *temp_r9;
    void *var_r11_2;
    void *var_r7;
    void *var_r9;

    var_r7 = arg4;
    var_r8 = arg5;
    var_r5 = arg3;
    var_r12 = arg6;
    temp_r30 = lbl_803ADD8C + ((arg0 >> 0x10U) * 0x94);
    if ((s32) M2C_FIELD(temp_r30, s32 *, 0x18) != (s32) arg0) {
        return 0;
    }
    if (var_r5 & 0x10) {
        var_r8 = &lbl_803AD8B8;
        M2C_FIELD(temp_r30, s32 *, 8) = (s32) (M2C_FIELD(temp_r30, s32 *, 8) & 0xFFFFFFFD);
    }
    if (var_r5 & 8) {
        var_r12 = &lbl_80373F98;
        var_r5 |= 0x20;
        M2C_FIELD(temp_r30, s32 *, 8) = (s32) (M2C_FIELD(temp_r30, s32 *, 8) & 0xFFFFFFFB);
    }
    if (arg1 != -1) {
        M2C_FIELD(temp_r30, s16 *, 0x12) = arg1;
    }
    if (arg2 != -1) {
        M2C_FIELD(temp_r30, s16 *, 0x14) = arg2;
    }
    var_cr0_eq = var_r7 == NULL;
    M2C_ERROR(/* "cmpwi $cr7, $r8, 0x0" is not supported, the first arg is not $cr0 */);
    M2C_ERROR(/* "cmpwi $cr6, $r12, 0x0" is not supported, the first arg is not $cr0 */);
    if (var_cr0_eq == 0) {
        var_r9 = temp_r30 + 0x28;
        var_r11 = 0x30;
        do {
            var_r11 -= 0x18;
            var_cr0_eq = var_r11 == 0;
            M2C_FIELD(var_r9, s32 *, 0) = (s32) M2C_FIELD(var_r7, s32 *, 0);
            M2C_FIELD(var_r9, s32 *, 4) = (s32) M2C_FIELD(var_r7, s32 *, 4);
            M2C_FIELD(var_r9, s32 *, 8) = (s32) M2C_FIELD(var_r7, s32 *, 8);
            M2C_FIELD(var_r9, s32 *, 0xC) = (s32) M2C_FIELD(var_r7, s32 *, 0xC);
            M2C_FIELD(var_r9, s32 *, 0x10) = (s32) M2C_FIELD(var_r7, s32 *, 0x10);
            temp_r0 = M2C_FIELD(var_r7, s32 *, 0x14);
            var_r7 += 0x18;
            M2C_FIELD(var_r9, s32 *, 0x14) = temp_r0;
            var_r9 += 0x18;
        } while (var_cr0_eq == 0);
    }
    if (var_cr0_eq == 0) {
        var_r11_2 = temp_r30 + 0x5C;
        var_r9_2 = 0x18;
        do {
            var_r9_2 -= 0x18;
            var_cr0_eq = var_r9_2 == 0;
            M2C_FIELD(var_r11_2, s32 *, 0) = (s32) M2C_FIELD(var_r8, s32 *, 0);
            M2C_FIELD(var_r11_2, s32 *, 4) = (s32) M2C_FIELD(var_r8, s32 *, 4);
            M2C_FIELD(var_r11_2, s32 *, 8) = (s32) M2C_FIELD(var_r8, s32 *, 8);
            M2C_FIELD(var_r11_2, s32 *, 0xC) = (s32) M2C_FIELD(var_r8, s32 *, 0xC);
            M2C_FIELD(var_r11_2, s32 *, 0x10) = (s32) M2C_FIELD(var_r8, s32 *, 0x10);
            temp_r0_2 = M2C_FIELD(var_r8, s32 *, 0x14);
            var_r8 += 0x18;
            M2C_FIELD(var_r11_2, s32 *, 0x14) = temp_r0_2;
            var_r11_2 += 0x18;
        } while (var_cr0_eq == 0);
        M2C_FIELD(var_r11_2, s32 *, 0) = (s32) M2C_FIELD(var_r8, s32 *, 0);
        M2C_FIELD(var_r11_2, s32 *, 4) = (s32) M2C_FIELD(var_r8, s32 *, 4);
        M2C_FIELD(temp_r30, s32 *, 8) = (s32) ((M2C_FIELD(temp_r30, s32 *, 8) & 0xFFFFFFEF) | (var_r5 & 0x10));
    }
    if (var_cr0_eq == 0) {
        temp_r9 = temp_r30 + 0x80;
        M2C_FIELD(temp_r30, s32 *, 0x80) = (s32) M2C_FIELD(var_r12, s32 *, 0);
        M2C_FIELD(temp_r9, s32 *, 0xC) = (s32) M2C_FIELD(var_r12, s32 *, 0xC);
        M2C_FIELD(temp_r9, s32 *, 4) = (s32) M2C_FIELD(var_r12, s32 *, 4);
        M2C_FIELD(temp_r9, s32 *, 8) = (s32) M2C_FIELD(var_r12, s32 *, 8);
        temp_r6 = (M2C_FIELD(temp_r30, s32 *, 8) & ~0x28) | (var_r5 & 0x28);
        M2C_FIELD(temp_r30, s32 *, 8) = temp_r6;
        if (!(temp_r6 & 0x20)) {
            temp_r11 = M2C_FIELD(var_r12, s32 *, 0);
            if ((temp_r11 == (s32) M2C_FIELD(var_r12, s32 *, 4)) && (temp_r11 == (s32) M2C_FIELD(var_r12, s32 *, 8)) && (temp_r11 == (s32) M2C_FIELD(var_r12, s32 *, 0xC))) {
                M2C_FIELD(temp_r30, s32 *, 8) = (s32) (temp_r6 | 0x20);
            }
        }
    }
    return 1;
}

