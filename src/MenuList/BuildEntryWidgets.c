/* MenuList__BuildEntryWidgets @ 0x80013838 (size: 0x764, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void MainMenu__RebuildAvailableSelectionEntries(void *, s32);
void Sphere__AddChild(void *, void *);
void Mem__Delete(void *);
s32 Mem__New(s32);
char * Mem__NewArray(s32);
void fn_8026B420(void *);
void * fn_8026B590(void *);
void fn_8026C508(void *, float, float);
void fn_8026C5A0(void *, float, float);
void fn_8026C5AC(void *, f32, f32);
void fn_8026C634(void *, float, float);
void fn_8026C6F8(void *, int);
void fn_8026C7F8(void *, f32, f32, f32, f32);
void fn_80270450(void *);
void fn_802704BC(void *, int);
void fn_80270784(void *, char *);
void fn_802721F4(void *, float);
void * memcpy(void *, const void *, unsigned int);
void * memmove(void *, void *, unsigned int);
void * memset(void *, int, u32);
M2C_UNK fn_8026D590(s32);
M2C_UNK fn_8026D59C(s32);
M2C_UNK fn_8026D5D0(s32, s32);
M2C_UNK fn_8026C2E4(s32, s32, s32, s32, s32, s32);
M2C_UNK fn_8026C5CC(s32, f32, f32);
M2C_UNK fn_8026D4A4(s32);
M2C_UNK fn_8026D520(s32);
extern f32 lbl_8030D97C __attribute__((section(".data")));
extern f32 lbl_8030D980 __attribute__((section(".data")));
extern f32 lbl_8030D984 __attribute__((section(".data")));
extern f32 lbl_8030D988 __attribute__((section(".data")));
extern f32 lbl_8030D98C __attribute__((section(".data")));
extern f32 lbl_8030D990 __attribute__((section(".data")));
extern f32 lbl_8030D9A0 __attribute__((section(".data")));
extern f32 lbl_8030D9A4 __attribute__((section(".data")));
extern f32 lbl_8030D9A8 __attribute__((section(".data")));
extern f32 lbl_8030D9AC __attribute__((section(".data")));
extern f32 lbl_8030D9B0 __attribute__((section(".data")));
extern f32 lbl_8030D9B4 __attribute__((section(".data")));
extern void *lbl_803DC3B4;
extern void *lbl_803DC3C0;
extern s32 lbl_803DC640;

void MenuList__BuildEntryWidgets(void *arg0, s32 arg1, f32 farg0, f32 farg1) {
    void *sp8;
    f32 temp_f31;
    s32 temp_r0;
    s32 temp_r26;
    s32 temp_r28;
    s32 temp_r28_2;
    void *temp_r9_4;
    s32 temp_r7;
    s32 var_r23;
    s32 var_r25;
    s32 var_r29;
    s32 var_r31;
    s8 *temp_r31_2;
    s8 *temp_r3_2;
    s8 *temp_r3_3;
    s8 *temp_r4;
    u32 temp_r31;
    void *temp_r0_2;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r11_4;
    void *temp_r21;
    void *temp_r25;
    void *temp_r26_2;
    void *temp_r29_2;
    void *temp_r30_2;
    void *temp_r3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    s32 temp_r29;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;
    void *var_r30;

    M2C_FIELD(arg0, s32 *, 0x54C) = arg1;
    MainMenu__RebuildAvailableSelectionEntries(arg0, arg1);
    var_r25 = 0;
    temp_r11 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r11, M2C_UNK (**)(void *, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, void *), 0x6C)(arg0 + M2C_FIELD(temp_r11, s16 *, 0x68), M2C_FIELD(lbl_803DC3B4, s32 *, 0), 0, 0, 1, 1, lbl_803DC3B4);
    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x10C)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x108), lbl_8030D97C, lbl_8030D97C, lbl_8030D97C, lbl_8030D97C);
    temp_r9_2 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, f32, f32), 0xEC)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0xE8), lbl_8030D97C, lbl_8030D97C);
    temp_r11_2 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r11_2, M2C_UNK (**)(void *, f32, f32), 0x8C)(arg0 + M2C_FIELD(temp_r11_2, s16 *, 0x88), lbl_8030D980, lbl_8030D980);
    temp_r9_3 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, M2C_UNK), 0x1B4)(arg0 + M2C_FIELD(temp_r9_3, s16 *, 0x1B0), 0);
    M2C_FIELD(arg0, f32 *, 0x1BC) = farg0;
    M2C_FIELD(arg0, f32 *, 0x1C0) = farg1;
    M2C_FIELD(arg0, s32 *, 0x540) = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1A0) > 0) {
        do {
            temp_r3 = fn_8026B590(Mem__New(0x1A0));
            sp8 = temp_r3;
            temp_r9_4 = M2C_FIELD(temp_r3, void **, 0x19C);
            M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, void *), 0x6C)(temp_r3 + M2C_FIELD(temp_r9_4, s16 *, 0x68), lbl_803DC640, 0x1C, 0, 1, 1, temp_r9_4);
            temp_r9_5 = M2C_FIELD(sp8, void **, 0x19C);
            M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *, f32, f32), 0xEC)(sp8 + M2C_FIELD(temp_r9_5, s16 *, 0xE8), lbl_8030D97C, lbl_8030D97C);
            temp_r11_3 = M2C_FIELD(sp8, void **, 0x19C);
            M2C_FIELD(temp_r11_3, M2C_UNK (**)(void *, f32, f32), 0xCC)(sp8 + M2C_FIELD(temp_r11_3, s16 *, 0xC8), lbl_8030D984, lbl_8030D984);
            temp_r9_6 = M2C_FIELD(sp8, void **, 0x19C);
            M2C_FIELD(temp_r9_6, M2C_UNK (**)(void *, M2C_UNK), 0x1B4)(sp8 + M2C_FIELD(temp_r9_6, s16 *, 0x1B0), 0x190);
            Sphere__AddChild(arg0, sp8);
            temp_r28 = M2C_FIELD(arg0, s32 *, 0x524);
            if (temp_r28 == (s32) M2C_FIELD(arg0, s32 *, 0x528)) {
                temp_r31 = temp_r28 * 4;
                temp_r26 = (temp_r28 + M2C_FIELD(arg0, s32 *, 0x52c)) * 4;
                temp_r3_2 = Mem__NewArray(temp_r26);
                if (temp_r3_2 != NULL) {
                    temp_r4 = M2C_FIELD(arg0, s8 **, 0x520);
                    if (temp_r4 != NULL) {
                        memcpy(temp_r3_2, temp_r4, temp_r31);
                        temp_r3_3 = M2C_FIELD(arg0, s8 **, 0x520);
                        if (temp_r3_3 != NULL) {
                            Mem__Delete(temp_r3_3);
                        }
                    }
                    M2C_FIELD(arg0, s8 **, 0x520) = temp_r3_2;
                    M2C_FIELD(arg0, s32 *, 0x528) = (s32) (M2C_FIELD(arg0, s32 *, 0x528) + M2C_FIELD(arg0, s32 *, 0x52c));
                    if ((s32) M2C_FIELD(arg0, s32 *, 0x530) != 0) {
                        memset(temp_r3_2 + temp_r31, 0, temp_r26 - temp_r31);
                    }
                    goto block_9;
                }
            } else {
block_9:
                temp_r31_2 = M2C_FIELD(arg0, s8 **, 0x520);
                temp_r29 = temp_r28 * 4;
                temp_r3_4 = temp_r31_2 + temp_r29;
                temp_r0 = M2C_FIELD(arg0, s32 *, 0x524) - temp_r28;
                if (temp_r0 != 0) {
                    memmove(temp_r3_4 + 4, temp_r3_4, temp_r0 * 4);
                }
                *(temp_r31_2 + temp_r29) = sp8;
                M2C_FIELD(arg0, s32 *, 0x524) = (s32) (M2C_FIELD(arg0, s32 *, 0x524) + 1);
            }
            var_r25 += 1;
        } while (var_r25 < (s32) M2C_FIELD(arg0, s32 *, 0x1A0));
    }
    temp_r29_2 = arg0 + 0x538;
    temp_r21 = arg0 + 0x508;
    temp_r26_2 = arg0 + 0x1C8;
    temp_r25 = arg0 + 0x368;
    if ((void *) M2C_FIELD(arg0, void **, 0x538) != NULL) {
        do {
            temp_r30_2 = M2C_FIELD(arg0, void **, 0x538);
            M2C_FIELD(arg0, void **, 0x538) = (void *) M2C_FIELD(temp_r30_2, void **, 0x208);
            if ((void *) M2C_FIELD(temp_r29_2, void **, 4) == temp_r30_2) {
                M2C_FIELD(temp_r29_2, void **, 4) = (void *) M2C_FIELD(temp_r30_2, void **, 0x204);
            } else {
                M2C_FIELD(M2C_FIELD(temp_r30_2, void **, 0x208), void **, 0x204) = (void *) M2C_FIELD(temp_r30_2, void **, 0x204);
            }
            temp_r0_2 = M2C_FIELD(temp_r29_2, void **, 8);
            if (temp_r0_2 != NULL) {
                if (temp_r30_2 != NULL) {
                    fn_802704BC(temp_r30_2, 2);
                    Mem__Delete(temp_r30_2);
                }
            } else {
                M2C_FIELD(temp_r30_2, void **, 0x208) = temp_r0_2;
                M2C_FIELD(temp_r30_2, void **, 0x204) = temp_r0_2;
            }
            M2C_FIELD(temp_r29_2, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r29_2, s32 *, 0xC) - 1);
        } while ((void *) M2C_FIELD(arg0, void **, 0x538) != NULL);
    }
    temp_r28_2 = M2C_FIELD(temp_r21, s32 *, 4);
    var_r29 = 0;
    var_r23 = 0;
    temp_r29 = 0;
    while (var_r29 < temp_r28_2) {
        temp_r3_5 = Mem__New(0x20C);
        fn_80270450(temp_r3_5);
        fn_80270784(temp_r3_5, M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x508) + temp_r29), s8 **, 0x20));
        fn_8026C7F8(temp_r3_5, lbl_8030D988, lbl_8030D98C, lbl_8030D988, lbl_8030D990);
        fn_802721F4(temp_r3_5, M2C_FIELD(arg0, f32 *, 0x1AC));
        fn_8026C508(temp_r3_5, M2C_FIELD(arg0, f32 *, 0x1BC), ((f32) (f64) var_r29 * M2C_FIELD(arg0, s16 *, 0x1B0)) + M2C_FIELD(arg0, f32 *, 0x1C0));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x548) != 0) {
            fn_8026D590((s32) temp_r3_5);
        } else {
            fn_8026D59C((s32) temp_r3_5);
        }
        fn_8026D5D0((s32) temp_r3_5, 0);
        fn_8026B420(M2C_FIELD(temp_r3_5, void **, 0x164));
        temp_r11_4 = M2C_FIELD(arg0, void **, 0x538);
        M2C_FIELD(temp_r3_5, s32 *, 0x1F4) = var_r29;
        M2C_FIELD(temp_r3_5, s32 *, 0x200) = (s32) *(s32 *)(M2C_FIELD(arg0, s32 *, 0x508) + var_r23);
        if (temp_r11_4 == NULL) {
            M2C_FIELD(temp_r29_2, void **, 4) = temp_r3_5;
            M2C_FIELD(temp_r3_5, void **, 0x204) = temp_r11_4;
            M2C_FIELD(arg0, void **, 0x538) = temp_r3_5;
            M2C_FIELD(temp_r3_5, void **, 0x208) = temp_r11_4;
        } else {
            temp_r9_7 = M2C_FIELD(temp_r29_2, void **, 4);
            M2C_FIELD(temp_r3_5, void **, 0x208) = NULL;
            M2C_FIELD(temp_r3_5, void **, 0x204) = temp_r9_7;
            M2C_FIELD(temp_r9_7, void **, 0x208) = temp_r3_5;
            M2C_FIELD(temp_r29_2, void **, 4) = temp_r3_5;
        }
        var_r29 += 1;
        var_r23 += 0x24;
        M2C_FIELD(temp_r29_2, s32 *, 0xC) = (M2C_FIELD(temp_r29_2, s32 *, 0xC) + 1);
        temp_r29 += 0x24;
        Sphere__AddChild(arg0, temp_r3_5);
        fn_8026C6F8(temp_r3_5, 0x12C);
    }
    if ((s32) M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 0x1C) != 5) {
        fn_8026C2E4((s32) temp_r26_2, M2C_FIELD(lbl_803DC3B4, s32 *, 0x24), 0xD, 0, 1, 1);
    } else {
        fn_8026C2E4((s32) temp_r26_2, M2C_FIELD(lbl_803DC3B4, s32 *, 0x28), 0xB, 0, 1, 1);
    }
    var_r31 = 0;
    fn_8026C5A0(temp_r26_2, lbl_8030D97C, lbl_8030D97C);
    fn_8026C634(temp_r26_2, lbl_8030D9A0, lbl_8030D9A4);
    temp_f31 = lbl_8030D9A8;
    fn_8026C508(temp_r26_2, M2C_FIELD(arg0, f32 *, 0x1BC) - temp_f31, (((f32) (f64) (M2C_FIELD(arg0, s32 *, 0x1A4) - 1) * M2C_FIELD(arg0, s16 *, 0x1B0)) + M2C_FIELD(arg0, f32 *, 0x1C0)) - temp_f31);
    fn_8026C7F8(temp_r26_2, lbl_8030D990, lbl_8030D990, lbl_8030D990, lbl_8030D990);
    fn_8026C6F8(temp_r26_2, 0x12C);
    Sphere__AddChild(arg0, temp_r26_2);
    fn_8026C2E4((s32) temp_r25, M2C_FIELD(lbl_803DC3B4, s32 *, 0x28), 2, 0, 1, 1);
    fn_8026C5A0(temp_r25, lbl_8030D97C, lbl_8030D97C);
    fn_8026C5CC((s32) temp_r25, lbl_8030D9AC, lbl_8030D9AC);
    fn_8026C508(temp_r25, M2C_FIELD(arg0, f32 *, 0x1BC) - temp_f31, (((f32) (f64) (M2C_FIELD(arg0, s32 *, 0x1A4) - 1) * M2C_FIELD(arg0, s16 *, 0x1B0)) + M2C_FIELD(arg0, f32 *, 0x1C0)) - temp_f31);
    fn_8026C5AC(temp_r25, lbl_8030D9B0, lbl_8030D9B4);
    fn_8026C7F8(temp_r25, lbl_8030D990, lbl_8030D990, lbl_8030D990, lbl_8030D990);
    fn_8026C6F8(temp_r25, 0x1F4);
    Sphere__AddChild(arg0, temp_r25);
    var_r30 = M2C_FIELD(arg0, void **, 0x538);
    if (var_r30 != NULL) {
        do {
            if (var_r31 < (s32) M2C_FIELD(arg0, s32 *, 0x1A0)) {
                fn_8026D4A4((s32) var_r30);
            } else {
                fn_8026D520((s32) var_r30);
            }
            var_r30 = M2C_FIELD(var_r30, void **, 0x208);
            var_r31 += 1;
        } while (var_r30 != NULL);
    }
    temp_r7 = M2C_FIELD(arg0, s32 *, 0x1A8);
    if (temp_r7 >= (s32) M2C_FIELD(temp_r21, s32 *, 4)) {
        M2C_FIELD(arg0, s32 *, 0x1A4) = 0;
        fn_8026C508(temp_r26_2, M2C_FIELD(arg0, f32 *, 0x1BC) - lbl_8030D9A8, M2C_FIELD(arg0, f32 *, 0x1C0) - lbl_8030D9A8);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x1A4) = temp_r7;
    fn_8026C508(temp_r26_2, M2C_FIELD(arg0, f32 *, 0x1BC) - lbl_8030D9A8, (((f32) (f64) (temp_r7 - 1) * M2C_FIELD(arg0, s16 *, 0x1B0)) + M2C_FIELD(arg0, f32 *, 0x1C0)) - lbl_8030D9A8);
}
