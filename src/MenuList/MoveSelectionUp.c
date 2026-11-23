/* MenuList__MoveSelectionUp @ 0x800149C0 (size: 0x484, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__Delete(void *);
void * MenuList__GetSelectedEntry(void *);
f32 MenuList__GetSelectedEntryDepth(void *);
s32 MenuList__SubtractAndWrapIndex(void *, s32, s32);
void Sound__Play2D(s32, s32);
void fn_80260304(void *, float, float);
int fn_80260A5C(void *);
void fn_8026B0C8(void *, int);
void fn_8026B420(void *);
void fn_8026C508(void *, float, float);
void fn_8026C514(void *, float *, float *);
void fn_8026C634(void *, float, float);
void fn_802704BC(void *, int);
void fn_80270784(void *, char *);
M2C_UNK fn_8026D4A4(void *);                        /* extern */
M2C_UNK fn_8026D520(void *);                        /* extern */
extern M2C_UNK lbl_8030DA34 __attribute__((section(".data")));
extern f32 lbl_8030DA48;
extern f32 lbl_8030DA4C __attribute__((section(".data")));
extern f32 lbl_8030DA50 __attribute__((section(".data")));
extern f32 lbl_8030DA60 __attribute__((section(".data")));
extern f32 lbl_8030DA64 __attribute__((section(".data")));
extern f32 lbl_8030DA68 __attribute__((section(".data")));

void MenuList__MoveSelectionUp(s32 arg0) {
    char *p_204;
    f32 spC;
    f32 sp8;
    f64 temp_f31;
    s32 temp_r3_2;
    s32 var_r29_2;
    s32 var_r0;
    s32 var_r29;
    s32 temp_r7;
    s32 var_r9;
    void *temp_r0;
    void *temp_r28;
    void *temp_r29;
    void *temp_r30;
    void *temp_r30_2;
    void *temp_r9;
    void *temp_r9_2;
    void *var_r30;
    void *var_r30_2;
    void *var_r30_3;

    M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0lt */);
    if (0 == 0) {
        M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0lt */);
        if (0 == 0) {
            M2C_FIELD(arg0, f32 *, 0x550) = (f32) lbl_8030DA48;
            goto block_3;
        }
    } else {
block_3:
        var_r29 = 1;
        var_r30 = M2C_FIELD(arg0, void **, 0x538);
        if (var_r30 != NULL) {
            while (var_r30 != NULL) {
                var_r9 = 1;
                if (var_r29 == 0) {
                    var_r9 = 0;
                }
                var_r0 = 1;
                if ((fn_80260A5C(M2C_FIELD(var_r30, s32 *, 0x164) + 0x64)) == 0) {
                    var_r0 = 0;
                }
                var_r30 = M2C_FIELD(var_r30, void **, 0x208);
                var_r29 = var_r9 & var_r0;
            }
        }
        if (var_r29 == 0) {
            Sound__Play2D((s32) &lbl_8030DA34, 0);
            if (((s32) M2C_FIELD(arg0, s32 *, 0x54C) == 1) && (temp_r7 = M2C_FIELD(arg0, s32 *, 0x1A4), ((temp_r7 > 0) != 0))) {
                var_r29 = temp_r7 - 1;
                fn_8026C508(arg0 + 0x368, (M2C_FIELD(arg0, f32 *, 0x1BC) - lbl_8030DA4C) - lbl_8030DA50, (((f32) (f64) var_r29 * M2C_FIELD(arg0, f32 *, 0x1B0)) + M2C_FIELD(arg0, f32 *, 0x1C0)) - lbl_8030DA4C);
                M2C_FIELD(arg0, s32 *, 0x1A4) = var_r29;
            } else if ((s32) M2C_FIELD(arg0, s32 *, 0x50C) <= (s32) M2C_FIELD(arg0, s32 *, 0x1A0)) {
                temp_r30 = arg0 + 0x1C8;
                M2C_FIELD(arg0, s32 *, 0x1A4) = MenuList__SubtractAndWrapIndex(arg0, M2C_FIELD(arg0, s32 *, 0x1A4), 1);
                fn_8026C634(temp_r30, MenuList__GetSelectedEntryDepth(arg0) + lbl_8030DA60, lbl_8030DA64);
                temp_f31 = lbl_8030DA4C;
                fn_8026C508(temp_r30, M2C_FIELD(arg0, f32 *, 0x1BC) - temp_f31, (((f32) (f64) M2C_FIELD(arg0, s32 *, 0x1A4) * M2C_FIELD(arg0, f32 *, 0x1B0)) + M2C_FIELD(arg0, f32 *, 0x1C0)) - temp_f31);
                fn_8026C508(arg0 + 0x368, (M2C_FIELD(arg0, f32 *, 0x1BC) - temp_f31) - lbl_8030DA50, (((f32) (f64) M2C_FIELD(arg0, s32 *, 0x1A4) * M2C_FIELD(arg0, f32 *, 0x1B0)) + M2C_FIELD(arg0, f32 *, 0x1C0)) - temp_f31);
            } else if (((s32) M2C_FIELD(arg0, s32 *, 0x54C) == 1) && ((s32) M2C_FIELD(MenuList__GetSelectedEntry(arg0), s32 *, 0x1F4) == 0)) {
                MenuList__GetSelectedEntry(arg0);
            } else {
                var_r30_2 = M2C_FIELD(arg0, void **, 0x538);
                temp_r28 = arg0 + 0x538;
                if (var_r30_2 != NULL) {
                    do {
                        fn_8026C514(var_r30_2, &sp8, &spC);
                        fn_8026B420(M2C_FIELD(var_r30_2, void **, 0x164));
                        fn_80260304(M2C_FIELD(var_r30_2, void **, 0x164) + 0x64, lbl_8030DA48, spC);
                        fn_80260304(M2C_FIELD(var_r30_2, void **, 0x164) + 0x64, lbl_8030DA68, spC + M2C_FIELD(arg0, f32 *, 0x1B0));
                        fn_8026B0C8(M2C_FIELD(var_r30_2, void **, 0x164), 0);
                        var_r30_2 = M2C_FIELD(var_r30_2, void **, 0x208);
                    } while (var_r30_2 != NULL);
                }
                temp_r3_2 = MenuList__SubtractAndWrapIndex(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x538), s32 *, 0x1F4), 1);
                temp_r30_2 = M2C_FIELD(temp_r28, void **, 4);
                M2C_FIELD(temp_r30_2, s32 *, 0x1F4) = temp_r3_2;
                fn_80270784(temp_r30_2, M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x508) + (temp_r3_2 * 0x24)), s8 **, 0x20));
                fn_8026B420(M2C_FIELD(temp_r30_2, void **, 0x164));
                fn_80260304(M2C_FIELD(temp_r30_2, void **, 0x164) + 0x64, lbl_8030DA48, M2C_FIELD(arg0, f32 *, 0x1C0) - M2C_FIELD(arg0, f32 *, 0x1B0));
                fn_80260304(M2C_FIELD(temp_r30_2, void **, 0x164) + 0x64, lbl_8030DA68, M2C_FIELD(arg0, f32 *, 0x1C0));
                fn_8026B0C8(M2C_FIELD(temp_r30_2, void **, 0x164), 0);
                temp_r29 = M2C_FIELD(temp_r28, void **, 4);
                if ((void *) M2C_FIELD(arg0, void **, 0x538) == temp_r29) {
                    p_204 = (char *)temp_r29 + 0x204;
                    M2C_FIELD(arg0, void **, 0x538) = (void *) M2C_FIELD(p_204, void **, 0x4);
                } else {
                    M2C_FIELD(M2C_FIELD(p_204, void **, 0x0), void **, 0x208) = (void *) M2C_FIELD(p_204, void **, 0x4);
                }
                if ((void *) M2C_FIELD(temp_r28, void **, 4) == temp_r29) {
                    M2C_FIELD(temp_r28, void **, 4) = (void *) M2C_FIELD(p_204, void **, 0x0);
                } else {
                    M2C_FIELD(M2C_FIELD(p_204, void **, 0x4), void **, 0x204) = (void *) M2C_FIELD(p_204, void **, 0x0);
                }
                temp_r0 = M2C_FIELD(temp_r28, void **, 8);
                if (temp_r0 != NULL) {
                    if (temp_r29 != NULL) {
                        fn_802704BC(temp_r29, 2);
                        Mem__Delete(temp_r29);
                    }
                } else {
                    M2C_FIELD(p_204, void **, 0x4) = temp_r0;
                    M2C_FIELD(p_204, void **, 0x0) = temp_r0;
                }
                M2C_FIELD(temp_r28, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r28, s32 *, 0xC) - 1);
                temp_r9 = M2C_FIELD(arg0, void **, 0x538);
                if (temp_r9 == NULL) {
                    M2C_FIELD(temp_r28, void **, 4) = temp_r30_2;
                    M2C_FIELD(arg0, void **, 0x538) = temp_r30_2;
                    M2C_FIELD(temp_r30_2, void **, 0x208) = temp_r9;
                    M2C_FIELD(temp_r30_2, void **, 0x204) = temp_r9;
                } else {
                    M2C_FIELD(temp_r30_2, void **, 0x208) = temp_r9;
                    M2C_FIELD(temp_r30_2, void **, 0x204) = NULL;
                    M2C_FIELD(M2C_FIELD(arg0, void **, 0x538), void **, 0x204) = temp_r30_2;
                    M2C_FIELD(arg0, void **, 0x538) = temp_r30_2;
                }
                var_r29_2 = 0;
                M2C_FIELD(temp_r28, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r28, s32 *, 0xC) + 1);
                var_r30_3 = M2C_FIELD(arg0, void **, 0x538);
                if (NULL != var_r30_3) {
                    do {
                        if (var_r29_2 < (s32) M2C_FIELD(arg0, s32 *, 0x1A0)) {
                            fn_8026D4A4(var_r30_3);
                        } else {
                            fn_8026D520(var_r30_3);
                        }
                        var_r30_3 = M2C_FIELD(var_r30_3, void **, 0x208);
                        var_r29_2 += 1;
                    } while (var_r30_3 != NULL);
                }
            }
        }
        temp_r9_2 = M2C_FIELD(arg0, void **, 0x19C);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x3C)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0x38));
    }
}
