/* MenuList__MoveSelectionDown @ 0x80014500 (size: 0x4C0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Sound__Play2D(s32, s32);
s32 MenuList__AddAndWrapIndex(void *, s32, s32);
f32 MenuList__GetSelectedEntryDepth(void *);
void * MenuList__GetSelectedEntry(void *);
void Mem__Delete(void *);
void fn_80260304(void *, float, float);
int fn_80260A5C(void *);
void fn_8026B0C8(void *, int);
void fn_8026B420(void *);
void fn_8026C508(void *, float, float);
void fn_8026C514(void *, float *, float *);
void fn_8026C634(void *, float, float);
void fn_802704BC(void *, int);
void fn_80270784(void *, char *);
M2C_UNK fn_8026D4A4(s32);
M2C_UNK fn_8026D520(s32);
extern M2C_UNK lbl_8030D9FC __attribute__((section(".data")));
extern f32 lbl_8030DA0C __attribute__((section(".data")));
extern f32 lbl_8030DA10 __attribute__((section(".data")));
extern f32 lbl_8030DA14 __attribute__((section(".data")));
extern f32 lbl_8030DA18 __attribute__((section(".data")));
extern f32 lbl_8030DA1C __attribute__((section(".data")));
extern f32 lbl_8030DA28 __attribute__((section(".data")));
extern f32 lbl_8030DA2C __attribute__((section(".data")));
extern f32 lbl_8030DA30 __attribute__((section(".data")));

void MenuList__MoveSelectionDown(void *arg0) {
    s32 ld_508;
    f32 spC;
    f32 sp8;
    f32 temp_f13;
    f32 temp_f31;
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r7;
    s32 temp_r7_2;
    s32 var_r0;
    s32 var_r30;
    s32 var_r30_2;
    register s32 var_r9;
    char *temp_r0_2;
    void *temp_r0_3;
    void *temp_r27;
    void *temp_r28;
    void *temp_r29;
    void *temp_r30;
    void *temp_r30_2;
    void *var_r29;
    void *var_r29_2;
    void *var_r29_3;

    temp_f13 = M2C_FIELD(arg0, f32 *, 0x550);
    var_r30 = 1;
    if (!(temp_f13 <= lbl_8030DA0C)) {
        if (!(temp_f13 <= lbl_8030DA10)) {
            M2C_FIELD(arg0, f32 *, 0x550) = (f32) lbl_8030DA14;
            goto block_3;
        }
    } else {
block_3:
        var_r29 = M2C_FIELD(arg0, void **, 0x538);
        if (var_r29 != NULL) {
            do {
                temp_r3 = fn_80260A5C(M2C_FIELD(var_r29, s32 *, 0x164) + 0x64);
                var_r9 = 1;
                if (var_r30 == 0) {
                    var_r9 = 0;
                }
                var_r0 = 1;
                if (temp_r3 == 0) {
                    var_r0 = 0;
                }
                var_r29 = M2C_FIELD(var_r29, void **, 0x208);
                var_r30 = var_r9 & var_r0;
            } while (var_r29 != NULL);
        }
        if (!var_r30) {
            Sound__Play2D((s32) &lbl_8030D9FC, 0);
            if (M2C_FIELD(arg0, s32 *, 0x54C) == 1) {
                temp_r7 = M2C_FIELD(arg0, s32 *, 0x1A4);
                if (temp_r7 < (s32) M2C_FIELD(arg0, s32 *, 0x1A0)) {
                    temp_r7_2 = temp_r7 + 1;
                    M2C_FIELD(arg0, s32 *, 0x1A4) = temp_r7_2;
                    fn_8026C508(arg0 + 0x368, (M2C_FIELD(arg0, f32 *, 0x1BC) - lbl_8030DA18) - lbl_8030DA1C, (((f64) temp_r7_2 * M2C_FIELD(arg0, f32 *, 0x1B0)) + M2C_FIELD(arg0, f32 *, 0x1C0)) - lbl_8030DA18);
                    return;
                }
            }
            temp_r0 = M2C_FIELD(arg0, s32 *, 0x54C);
            temp_r27 = arg0 + 0x508;
            if ((temp_r0 == 0) && ((s32) M2C_FIELD(temp_r27, s32 *, 4) <= (s32) M2C_FIELD(arg0, s32 *, 0x1A0))) {
                temp_r30 = arg0 + 0x1C8;
                M2C_FIELD(arg0, s32 *, 0x1A4) = MenuList__AddAndWrapIndex(arg0, M2C_FIELD(arg0, s32 *, 0x1A4), 1);
                fn_8026C634(temp_r30, lbl_8030DA28 + MenuList__GetSelectedEntryDepth(arg0), lbl_8030DA2C);
                temp_f31 = lbl_8030DA18;
                fn_8026C508(temp_r30, M2C_FIELD(arg0, f32 *, 0x1BC) - temp_f31, (((f32) (f64) M2C_FIELD(arg0, s32 *, 0x1A4) * M2C_FIELD(arg0, f32 *, 0x1B0)) + M2C_FIELD(arg0, f32 *, 0x1C0)) - temp_f31);
                fn_8026C508(arg0 + 0x368, (M2C_FIELD(arg0, f32 *, 0x1BC) - temp_f31) - lbl_8030DA1C, (((f32) (f64) M2C_FIELD(arg0, s32 *, 0x1A4) * M2C_FIELD(arg0, f32 *, 0x1B0)) + M2C_FIELD(arg0, f32 *, 0x1C0)) - temp_f31);
                return;
            }
            if ((temp_r0 == 1) && ((s32) M2C_FIELD(MenuList__GetSelectedEntry(arg0), s32 *, 0x1F4) == (s32) (M2C_FIELD(temp_r27, s32 *, 4) - 1))) {
                MenuList__GetSelectedEntry(arg0);
                return;
            }
            var_r29_2 = M2C_FIELD(arg0, void **, 0x538);
            temp_r28 = arg0 + 0x538;
            if (var_r29_2 != NULL) {
                do {
                    fn_8026C514(var_r29_2, &sp8, &spC);
                    fn_8026B420(M2C_FIELD(var_r29_2, void **, 0x164));
                    fn_80260304(M2C_FIELD(var_r29_2, void **, 0x164) + 0x64, lbl_8030DA14, spC);
                    fn_80260304(M2C_FIELD(var_r29_2, void **, 0x164) + 0x64, lbl_8030DA30, spC - M2C_FIELD(arg0, f32 *, 0x1B0));
                    fn_8026B0C8(M2C_FIELD(var_r29_2, void **, 0x164), 0);
                    var_r29_2 = M2C_FIELD(var_r29_2, void **, 0x208);
                } while (var_r29_2 != NULL);
            }
            temp_r29 = M2C_FIELD(arg0, void **, 0x538);
            temp_r3_2 = MenuList__AddAndWrapIndex(arg0, M2C_FIELD(M2C_FIELD(temp_r28, void **, 4), s32 *, 0x1F4), 1);
            M2C_FIELD(temp_r29, s32 *, 0x1F4) = temp_r3_2;
            ld_508 = M2C_FIELD(arg0, s32 *, 0x508);
            fn_80270784(temp_r29, M2C_FIELD((ld_508 + (temp_r3_2 * 0x24)), s8 **, 0x20));
            fn_8026B420(M2C_FIELD(temp_r29, void **, 0x164));
            fn_80260304(M2C_FIELD(temp_r29, void **, 0x164) + 0x64, lbl_8030DA14, ((f32) (f64) M2C_FIELD(temp_r27, s32 *, 4) * M2C_FIELD(arg0, f32 *, 0x1B0)) + M2C_FIELD(arg0, f32 *, 0x1C0));
            fn_80260304(M2C_FIELD(temp_r29, void **, 0x164) + 0x64, lbl_8030DA30, ((f32) (f64) (M2C_FIELD(temp_r27, s32 *, 4) - 1) * M2C_FIELD(arg0, f32 *, 0x1B0)) + M2C_FIELD(arg0, f32 *, 0x1C0));
            fn_8026B0C8(M2C_FIELD(temp_r29, void **, 0x164), 0);
            temp_r30_2 = M2C_FIELD(arg0, void **, 0x538);
            M2C_FIELD(arg0, void **, 0x538) = (void *) M2C_FIELD(temp_r30_2, void **, 0x208);
            if ((void *) M2C_FIELD(temp_r28, void **, 4) == temp_r30_2) {
                M2C_FIELD(temp_r28, void **, 4) = (void *) M2C_FIELD(temp_r30_2, void **, 0x204);
            } else {
                M2C_FIELD(M2C_FIELD(temp_r30_2, void **, 0x208), void **, 0x204) = (void *) M2C_FIELD(temp_r30_2, void **, 0x204);
            }
            temp_r0_2 = M2C_FIELD(temp_r28, void **, 8);
            if (temp_r0_2 != NULL) {
                if (temp_r30_2 != NULL) {
                    fn_802704BC(temp_r30_2, 2);
                    Mem__Delete(temp_r30_2);
                }
            } else {
                M2C_FIELD(temp_r30_2, void **, 0x204) = temp_r0_2;
                M2C_FIELD(temp_r30_2, void **, 0x208) = temp_r0_2;
            }
            M2C_FIELD(temp_r28, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r28, s32 *, 0xC) - 1);
            temp_r0_3 = M2C_FIELD(arg0, void **, 0x538);
            if (temp_r0_3 == NULL) {
                M2C_FIELD(temp_r28, void **, 4) = temp_r29;
                M2C_FIELD(arg0, void **, 0x538) = temp_r29;
                M2C_FIELD(temp_r29, void **, 0x208) = temp_r0_3;
                M2C_FIELD(temp_r29, void **, 0x204) = temp_r0_3;
            } else {
                M2C_FIELD(temp_r29, void **, 0x208) = NULL;
                M2C_FIELD(temp_r29, void **, 0x204) = (void *) M2C_FIELD(temp_r28, void **, 4);
                M2C_FIELD(M2C_FIELD(temp_r28, void **, 4), void **, 0x208) = temp_r29;
                M2C_FIELD(temp_r28, void **, 4) = temp_r29;
            }
            var_r30_2 = 0;
            M2C_FIELD(temp_r28, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r28, s32 *, 0xC) + 1);
            var_r29_3 = M2C_FIELD(arg0, void **, 0x538);
            if (var_r29_3 != NULL) {
                do {
                    if (var_r30_2 <= (s32) M2C_FIELD(arg0, s32 *, 0x1A0)) {
                        fn_8026D4A4((s32) var_r29_3);
                    } else {
                        fn_8026D520((s32) var_r29_3);
                    }
                    var_r29_3 = M2C_FIELD(var_r29_3, void **, 0x208);
                    var_r30_2 += 1;
                } while (var_r29_3 != NULL);
            }
        }
    }
}
