/* DVD__InitializeDriveErrorDialogWidgets @ 0x80008F28 (size: 0x614, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Sphere__AddChild(void *, void *);
f32 fn_8026B86C(void);
f32 fn_8026B8B8(void);
void fn_8026C508(void *, float, float);
void fn_8026C5A0(void *, float, float);
void fn_8026C634(void *, float, float);
void fn_8026C6F8(void *, int);
void fn_8026C7F8(void *, f32, f32, f32, f32);
void fn_8026D5BC(void *, int, int, int, int);
f32 fn_8026D748(void *);
f32 fn_8026D750(void *);
M2C_UNK fn_8026C9DC(s32, f32);
M2C_UNK fn_8026C2E4(s32, s32, s32, s32, s32, s32);
M2C_UNK fn_80272134(s32, f32, f32, f32, f32, f32);
M2C_UNK fn_8027227C(s32, f32);
extern f32 lbl_80309D64 __attribute__((section(".data")));
extern f32 lbl_80309D68 __attribute__((section(".data")));
extern f32 lbl_80309D6C __attribute__((section(".data")));
extern f32 lbl_80309D70 __attribute__((section(".data")));
extern f32 lbl_80309D74 __attribute__((section(".data")));
extern f32 lbl_80309D78 __attribute__((section(".data")));
extern f32 lbl_80309D7C __attribute__((section(".data")));
extern f32 lbl_80309D80 __attribute__((section(".data")));
extern f32 lbl_80309D84 __attribute__((section(".data")));
extern f32 lbl_80309D88 __attribute__((section(".data")));
extern f32 lbl_80309D8C __attribute__((section(".data")));
extern f32 lbl_80309D90 __attribute__((section(".data")));
extern f32 lbl_80309D94 __attribute__((section(".data")));
extern void *lbl_803DC3B4;
extern void *lbl_803DC3C0;

void DVD__InitializeDriveErrorDialogWidgets(void *arg0) {
    f32 temp_f30;
    f32 temp_f30_2;
    f32 temp_f31;
    f32 temp_f31_2;
    f32 temp_f31_3;
    f32 temp_f31_4;
    f32 temp_f31_5;
    s32 var_r23;
    s32 var_r28;
    void **var_r25;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r26;
    void *temp_r26_2;
    void *temp_r27;
    void *temp_r27_2;
    void *temp_r28;
    void *temp_r29;
    void *temp_r29_2;
    void *temp_r29_3;
    void *temp_r29_4;
    void *temp_r29_5;
    void *temp_r29_6;
    void *temp_r29_7;
    void *temp_r30;
    void *temp_r30_2;
    void *temp_r30_3;
    void *temp_r30_4;
    void *temp_r30_5;
    void *temp_r30_6;
    void *temp_r30_7;
    void *temp_r30_8;
    void *temp_r9;
    void *temp_r9_10;
    void *temp_r9_11;
    void *temp_r9_13;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;
    void *temp_r9_8;
    void *temp_r9_9;
    void *var_r22;
    void *var_r24;
    void *var_r30;

    temp_r11 = M2C_FIELD(arg0, void **, 0x19C);
    temp_r26 = arg0 + 0x344;
    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r11, M2C_UNK (**)(void *, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, void *), 0x14)(arg0 + M2C_FIELD(temp_r11, s16 *, 0x10), M2C_FIELD(lbl_803DC3B4, s32 *, 0), 0, 0, 1, 1, lbl_803DC3B4);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x10C)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x108), lbl_80309D64, lbl_80309D64, lbl_80309D64, lbl_80309D68);
    temp_r9_2 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, f32, f32), 0xEC)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0xE8), lbl_80309D68, lbl_80309D68);
    temp_r9_3 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, f32, f32), 0xAC)(arg0 + M2C_FIELD(temp_r9_3, s16 *, 0xA8), lbl_80309D68, lbl_80309D68);
    temp_r29 = M2C_FIELD(arg0, void **, 0x19C);
    temp_r29_2 = temp_r29 + 0x88;
    temp_r30 = arg0 + M2C_FIELD(temp_r29, s16 *, 0x88);
    temp_f31 = fn_8026B86C();
    M2C_FIELD(temp_r29_2, M2C_UNK (**)(void *, f32, f32), 4)(temp_r30, temp_f31, fn_8026B8B8());
    temp_r9_4 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK), 0x46C)(arg0 + M2C_FIELD(temp_r9_4, s16 *, 0x468), 1, 0xFF, 2, 2);
    temp_r9_5 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x10C)(arg0 + M2C_FIELD(temp_r9_5, s16 *, 0x108), lbl_80309D68, lbl_80309D68, lbl_80309D68, lbl_80309D68);
    temp_r9_6 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_6, M2C_UNK (**)(void *, M2C_UNK), 0x1B4)(arg0 + M2C_FIELD(temp_r9_6, s16 *, 0x1B0), 0xF230);
    fn_8026C9DC((s32) temp_r26, lbl_80309D64);
    fn_8026C9DC((s32) (arg0 + 0x2BE4), lbl_80309D64);
    fn_8026C7F8(arg0 + 0x1A4, lbl_80309D68, lbl_80309D68, lbl_80309D68, lbl_80309D68);
    fn_8026C7F8(temp_r26, lbl_80309D68, lbl_80309D68, lbl_80309D68, lbl_80309D68);
    fn_8026C7F8(arg0 + 0x2F88, lbl_80309D68, lbl_80309D68, lbl_80309D68, lbl_80309D68);
    if ((s32) M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 0x1C) == 5) {
        var_r30 = arg0 + 0x10000;
        fn_8026C2E4((s32) (arg0 + 0xB084), M2C_FIELD(lbl_803DC3B4, s32 *, 0x28), 0, 0, 1, 1);
    } else {
        var_r30 = arg0 + 0x10000;
        fn_8026C2E4((s32) (arg0 + 0xB084), M2C_FIELD(lbl_803DC3B4, s32 *, 0x24), 0xE, 0, 1, 1);
    }
    temp_r30_2 = var_r30 - 0x4F7C;
    var_r23 = 0;
    fn_8026C5A0(temp_r30_2, lbl_80309D68, lbl_80309D68);
    fn_8026C508(temp_r30_2, lbl_80309D68, lbl_80309D68);
    fn_8026C7F8(temp_r30_2, lbl_80309D64, lbl_80309D64, lbl_80309D64, lbl_80309D64);
    temp_f31_2 = fn_8026B86C();
    fn_8026C634(temp_r30_2, temp_f31_2, fn_8026B8B8());
    fn_8026C6F8(temp_r30_2, 0x64);
    Sphere__AddChild(arg0, temp_r30_2);
    var_r24 = arg0 + 0xB224;
    temp_f30 = lbl_80309D6C;
    var_r25 = arg0 + 0xB3C0;
    var_r22 = var_r24;
    do {
        if ((s32) M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 0x1C) == 5) {
            temp_r9_7 = *var_r25;
            var_r28 = var_r23 * 0x1A0;
            M2C_FIELD(temp_r9_7, M2C_UNK (**)(void *, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, void *), 0x6C)(var_r22 + M2C_FIELD(temp_r9_7, s16 *, 0x68), M2C_FIELD(lbl_803DC3B4, s32 *, 0x28), 1, 0, 1, 1, temp_r9_7);
        } else {
            temp_r9_8 = *var_r25;
            var_r28 = var_r23 * 0x1A0;
            M2C_FIELD(temp_r9_8, M2C_UNK (**)(void *, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, void *), 0x6C)(var_r24 + M2C_FIELD(temp_r9_8, s16 *, 0x68), M2C_FIELD(lbl_803DC3B4, s32 *, 0x24), 0xF, 0, 1, 1, temp_r9_8);
        }
        temp_r27 = var_r28 + arg0 + 0xB224;
        temp_r26_2 = arg0 + (var_r28 + 0xB224);
        temp_r9_9 = M2C_FIELD(temp_r27, void **, 0x19C);
        M2C_FIELD(temp_r9_9, M2C_UNK (**)(void *, f32, f32), 0xEC)(temp_r26_2 + M2C_FIELD(temp_r9_9, s16 *, 0xE8), lbl_80309D6C, lbl_80309D68);
        if (!var_r23) {
            temp_r30_3 = M2C_FIELD(var_r30, void **, -0x4C40);
            temp_r30_4 = temp_r30_3 + 0xA8;
            temp_r29_3 = arg0 + 0xB224 + M2C_FIELD(temp_r30_3, s16 *, 0xA8);
            M2C_FIELD(temp_r30_4, M2C_UNK (**)(void *, f32, f32), 4)(temp_r29_3, fn_8026B86C() * temp_f30, lbl_80309D68);
        } else {
            temp_r29_4 = M2C_FIELD(temp_r27, void **, 0x19C);
            temp_r29_5 = temp_r29_4 + 0xA8;
            temp_r30_5 = temp_r26_2 + M2C_FIELD(temp_r29_4, s16 *, 0xA8);
            temp_f31_3 = fn_8026B86C() * temp_f30;
            M2C_FIELD(temp_r29_5, M2C_UNK (**)(void *, f32, f32), 4)(temp_r30_5, temp_f31_3, fn_8026B8B8());
            temp_r11_2 = M2C_FIELD(temp_r27, void **, 0x19C);
            M2C_FIELD(temp_r11_2, M2C_UNK (**)(void *, f32), 0xDC)(temp_r26_2 + M2C_FIELD(temp_r11_2, s16 *, 0xD8), lbl_80309D70);
        }
        temp_r27_2 = var_r28 + arg0 + 0xB224;
        temp_r9_10 = M2C_FIELD(temp_r27_2, void **, 0x19C);
        temp_r28 = arg0 + (var_r28 + 0xB224);
        var_r23 += 1;
        var_r24 += 0x1A0;
        var_r25 += 0x1A0;
        var_r22 += 0x1A0;
        M2C_FIELD(temp_r9_10, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x10C)(temp_r28 + M2C_FIELD(temp_r9_10, s16 *, 0x108), lbl_80309D64, lbl_80309D64, lbl_80309D64, lbl_80309D74);
        temp_r30_6 = M2C_FIELD(temp_r27_2, void **, 0x19C);
        temp_r30_7 = temp_r30_6 + 0x88;
        temp_r29_6 = temp_r28 + M2C_FIELD(temp_r30_6, s16 *, 0x88);
        temp_f31_4 = fn_8026B86C() * lbl_80309D78;
        M2C_FIELD(temp_r30_7, M2C_UNK (**)(void *, f32, f32), 4)(temp_r29_6, temp_f31_4, fn_8026B8B8() * lbl_80309D7C);
        temp_r9_11 = M2C_FIELD(temp_r27_2, void **, 0x19C);
        M2C_FIELD(temp_r9_11, M2C_UNK (**)(void *, f32, f32), 0x8C)(temp_r28 + M2C_FIELD(temp_r9_11, s16 *, 0x88), lbl_80309D80, lbl_80309D84);
        Sphere__AddChild(arg0, temp_r28);
        temp_r30_7 = M2C_FIELD(temp_r27_2, void **, 0x19C);
        M2C_FIELD(temp_r30_7, M2C_UNK (**)(void *, M2C_UNK), 0x1B4)(temp_r28 + M2C_FIELD(temp_r30_7, s16 *, 0x1B0), 0xC8);
    } while (var_r23 <= 1);
    temp_r30_8 = var_r30 - 0x5170;
    temp_r29_7 = var_r30 - 0x4F7C;
    fn_8026C5A0(temp_r30_8, lbl_80309D6C, lbl_80309D6C);
    temp_f31_5 = lbl_80309D6C;
    temp_f30_2 = fn_8026D748(temp_r29_7) * temp_f31_5;
    fn_8026C508(temp_r30_8, temp_f30_2, fn_8026D750(temp_r29_7) * temp_f31_5);
    fn_80272134((s32) temp_r30_8, lbl_80309D88, lbl_80309D68, temp_f31_5, lbl_80309D68, lbl_80309D64);
    fn_8026C7F8(temp_r30_8, lbl_80309D8C, lbl_80309D90, lbl_80309D8C, lbl_80309D64);
    fn_8027227C((s32) temp_r30_8, fn_8026B86C() * lbl_80309D94);
    fn_8026D5BC(temp_r30_8, 1, 0xFF, 2, 2);
    Sphere__AddChild(arg0, temp_r30_8);
    fn_8026C6F8(temp_r30_8, 0x12C);
    temp_r9_13 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_13, M2C_UNK (**)(void *), 0x1E4)(arg0 + M2C_FIELD(temp_r9_13, s16 *, 0x1E0));
    M2C_FIELD(var_r30, s32 *, -0x4A98) = 0;
}
