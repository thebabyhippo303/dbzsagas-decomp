/* MainMenu__BuildPlayerJoinWidgets @ 0x80010554 (size: 0x6C8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void UI__SetColorRGBA(void *, f32, f32, f32, f32);
void Sphere__AddChild(void *, void *);
void fn_8026B420(void *);
void fn_8026C508(void *, float, float);
void fn_8026C5A0(void *, float, float);
void fn_8026C6F8(void *, int);
void fn_8026C7F8(void *, f32, f32, f32, f32);
f32 fn_8026D748(void *);
f32 fn_8026D750(void *);
void fn_80270784(void *, char *);
void fn_802721F4(void *, float);
M2C_UNK fn_8026C2E4(s32, s32, s32, s32, s32, s32);
M2C_UNK fn_8026C5CC(s32, f32, f32);
M2C_UNK fn_8026D5D0(s32, s32);
M2C_UNK fn_8026D590(s32);
M2C_UNK fn_80272134(s32, f32, f32, f32, f32, f32);
extern s8 lbl_8030D798 __attribute__((section(".data")));
extern s8 lbl_8030D7B8 __attribute__((section(".data")));
extern f32 lbl_8030D7C0 __attribute__((section(".data")));
extern f32 lbl_8030D7C4 __attribute__((section(".data")));
extern f32 lbl_8030D7C8 __attribute__((section(".data")));
extern f32 lbl_8030D7CC;
extern f32 lbl_8030D7D0 __attribute__((section(".data")));
extern f32 lbl_8030D7D4 __attribute__((section(".data")));
extern f32 lbl_8030D7D8 __attribute__((section(".data")));
extern f32 lbl_8030D7DC __attribute__((section(".data")));
extern f32 lbl_8030D7E0 __attribute__((section(".data")));
extern f32 lbl_8030D7E4 __attribute__((section(".data")));
extern f32 lbl_8030D7E8 __attribute__((section(".data")));
extern f32 lbl_8030D7F8 __attribute__((section(".data")));
extern f32 lbl_8030D7FC __attribute__((section(".data")));
extern M2C_UNK lbl_8035EC98 __attribute__((section(".data")));
extern void *lbl_803DC3B4;

void MainMenu__BuildPlayerJoinWidgets(char *arg0) {
    s16 ld_E8;
    f32 ld_DBC;
    f32 temp_f29;
    f32 temp_f30;
    f32 temp_f31;
    s32 temp_r0_2;
    s32 var_r16;
    s32 var_r17;
    void *temp_r0;
    void *temp_r11;
    void *temp_r19;
    void *temp_r25;
    void *temp_r26;
    void *temp_r27;
    void *temp_r29;
    void *temp_r30;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *var_r18;

    temp_r11 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(arg0, s32 *, 0xD9C) = 0;
    temp_r30 = arg0 + 0x19DC;
    temp_r29 = arg0 + 0x1B7C;
    M2C_FIELD(temp_r11, M2C_UNK (**)(void *, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK), 0x6C)(arg0 + M2C_FIELD(temp_r11, s16 *, 0x68), M2C_FIELD(lbl_803DC3B4, s32 *, 0), 0, 0, 1, 1);
    temp_r26 = arg0 + 0x1D1C;
    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    temp_r27 = arg0 + 0x1F10;
    temp_r25 = arg0 + 0x20B0;
    temp_r19 = arg0 + 0x12E8;
    var_r17 = 0;
    var_r18 = arg0 + 0xDCC;
    var_r16 = 0;
    ld_E8 = M2C_FIELD(temp_r9, s16 *, 0xE8);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, f32, f32), 0xEC)(arg0 + ld_E8, lbl_8030D7C0, lbl_8030D7C0);
    temp_r9_2 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, f32, f32), 0xAC)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0xA8), lbl_8030D7C0, lbl_8030D7C0);
    temp_r9_3 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x10C)(arg0 + M2C_FIELD(temp_r9_3, s16 *, 0x108), lbl_8030D7C0, lbl_8030D7C0, lbl_8030D7C0, lbl_8030D7C0);
    temp_f29 = lbl_8030D7C0;
    M2C_FIELD(arg0, f32 *, 0xDC0) = temp_f29;
    M2C_FIELD(arg0, f32 *, 0xDBC) = temp_f29;
    fn_8026C2E4((s32) temp_r30, M2C_FIELD(lbl_803DC3B4, s32 *, 0x24), 0xA, 0, 1, 1);
    fn_8026C5A0(temp_r30, lbl_8030D7C4, lbl_8030D7C4);
    fn_8026C508(temp_r30, lbl_8030D7C8, lbl_8030D7CC);
    UI__SetColorRGBA(temp_r30, lbl_8030D7D0, lbl_8030D7D0, lbl_8030D7D0, temp_f29);
    fn_8026C5CC((s32) temp_r30, lbl_8030D7D4, lbl_8030D7D4);
    fn_8026D5D0((s32) temp_r30, 0);
    fn_8026C6F8(temp_r30, 0x64);
    Sphere__AddChild(arg0, temp_r30);
    fn_8026C2E4((s32) temp_r29, M2C_FIELD(lbl_803DC3B4, s32 *, 0x24), 0xB, 0, 1, 1);
    fn_8026C5A0(temp_r29, lbl_8030D7C4, lbl_8030D7C4);
    fn_8026C508(temp_r29, lbl_8030D7C8, lbl_8030D7CC);
    UI__SetColorRGBA(temp_r29, lbl_8030D7D0, lbl_8030D7D0, lbl_8030D7D0, temp_f29);
    fn_8026C5CC((s32) temp_r29, lbl_8030D7D4, lbl_8030D7D4);
    fn_8026D5D0((s32) temp_r29, 0);
    fn_8026C6F8(temp_r29, 0x64);
    Sphere__AddChild(arg0, temp_r29);
    fn_8026C508(temp_r26, M2C_FIELD(arg0, f32 *, 0xDBC) + lbl_8030D7D8, M2C_FIELD(arg0, f32 *, 0xDC0) + lbl_8030D7DC);
    fn_8026C5A0(temp_r26, lbl_8030D7C4, lbl_8030D7C4);
    fn_8026C7F8(temp_r26, lbl_8030D7D0, lbl_8030D7D0, lbl_8030D7D0, lbl_8030D7E0);
    fn_802721F4(temp_r26, lbl_8030D7E4);
    fn_8026D590((s32) temp_r26);
    fn_8026C6F8(temp_r26, 0x258);
    Sphere__AddChild(arg0, temp_r26);
    fn_8026C2E4((s32) temp_r27, M2C_FIELD(lbl_803DC3B4, s32 *, 0x24), 0xD, 0, 1, 1);
    fn_8026C5A0(temp_r27, lbl_8030D7C4, lbl_8030D7C4);
    fn_8026C508(temp_r27, lbl_8030D7C8, lbl_8030D7CC);
    fn_8026C7F8(temp_r27, lbl_8030D7D0, lbl_8030D7D0, lbl_8030D7D0, lbl_8030D7E0);
    UI__SetColorRGBA(temp_r27, lbl_8030D7D0, lbl_8030D7D0, lbl_8030D7D0, temp_f29);
    fn_8026C5CC((s32) temp_r27, lbl_8030D7D0, lbl_8030D7D0);
    fn_8026C6F8(temp_r27, 0x258);
    Sphere__AddChild(arg0, temp_r27);
    fn_80270784(temp_r25, &lbl_8030D798);
    temp_f30 = lbl_8030D7C4;
    temp_f31 = fn_8026D748(temp_r27) * temp_f30;
    fn_8026C508(temp_r25, temp_f31, fn_8026D750(temp_r27) * temp_f30);
    fn_8026C5A0(temp_r25, temp_f30, temp_f30);
    fn_8026C7F8(temp_r25, lbl_8030D7D0, lbl_8030D7D0, temp_f29, lbl_8030D7D0);
    UI__SetColorRGBA(temp_r25, lbl_8030D7D0, lbl_8030D7D0, lbl_8030D7D0, temp_f29);
    fn_80272134((s32) temp_r25, lbl_8030D7E8, temp_f29, temp_f30, temp_f29, temp_f29);
    fn_8026D590((s32) temp_r25);
    fn_8026D5D0((s32) temp_r25, 0);
    fn_8026C6F8(temp_r25, 0x320);
    Sphere__AddChild(arg0, temp_r25);
    do {
        fn_8026C2E4((s32) var_r18, M2C_FIELD(lbl_803DC3B4, s32 *, 0x20), M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x22B4) + (var_r17 << 5)), s32 *, 4), 0, 1, 1);
        ld_DBC = M2C_FIELD(arg0, f32 *, 0xDBC);
        M2C_FIELD(arg0, f32 *, 0xDB4) = (f32) (((f32) var_r17 * lbl_8030D7F8) + ld_DBC);
        M2C_FIELD(arg0, f32 *, 0xDB8) = (f32) M2C_FIELD(arg0, f32 *, 0xDC0);
        fn_8026C5A0(var_r18, lbl_8030D7C4, lbl_8030D7C4);
        fn_8026C508(var_r18, M2C_FIELD(arg0, f32 *, 0xDB4), M2C_FIELD(arg0, f32 *, 0xDB8));
        UI__SetColorRGBA(var_r18, lbl_8030D7D0, lbl_8030D7D0, lbl_8030D7D0, lbl_8030D7D0);
        fn_8026C6F8(var_r18, 0x190);
        fn_8026C7F8(var_r18, lbl_8030D7D0, lbl_8030D7D0, lbl_8030D7D0, lbl_8030D7D0);
        if (var_r17 == 3) {
            fn_8026C5CC((s32) temp_r19, lbl_8030D7D0, lbl_8030D7D0);
            UI__SetColorRGBA(temp_r19, lbl_8030D7D0, lbl_8030D7D0, lbl_8030D7D0, lbl_8030D7D0);
            fn_8026C6F8(temp_r19, 0x258);
        } else {
            fn_8026C5CC((s32) var_r18, lbl_8030D7FC, lbl_8030D7FC);
            UI__SetColorRGBA(var_r18, lbl_8030D7D0, lbl_8030D7D0, lbl_8030D7D0, lbl_8030D7C4);
        }
        if (4 != var_r17) {
            if (var_r17 == 2) {
                goto block_6;
            }
        } else {
block_6:
            fn_8026C5CC((s32) var_r18, lbl_8030D7E0, lbl_8030D7E0);
        }
        if (var_r17 != 6) {
            if (var_r17 == 0) {
                goto block_9;
            }
        } else {
block_9:
            UI__SetColorRGBA(var_r18, lbl_8030D7D0, lbl_8030D7D0, lbl_8030D7D0, lbl_8030D7C4);
        }
        if (var_r17 != 5) {
            if (var_r17 == 1) {
                goto block_12;
            }
        } else {
block_12:
            UI__SetColorRGBA(var_r18, lbl_8030D7D0, lbl_8030D7D0, lbl_8030D7D0, lbl_8030D7C4);
        }
        *(s32 *)(arg0 + 0xF6C + var_r16) = var_r17;
        *(s32 *)(arg0 + 0xF7C + var_r16) = 0;
        fn_8026D5D0((s32) var_r18, 0);
        *(s32 *)(arg0 + 0xF78 + var_r16) = 0;
        fn_8026B420(*(s32 *)(0xF30 + arg0 + var_r16));
        Sphere__AddChild(arg0, var_r18);
        *(void * *)(arg0 + 0x19BC + (var_r17 * 4)) = var_r18;
        temp_r9_2 = arg0 + 0x22A4;
        temp_r0 = M2C_FIELD(arg0, void **, 0x22A4);
        if (temp_r0 == NULL) {
            M2C_FIELD(temp_r9_2, void **, 4) = var_r18;
            M2C_FIELD(arg0, void **, 0x22A4) = var_r18;
            M2C_FIELD(var_r18, s32 *, 0x1AC) = 0;
            M2C_FIELD(var_r18, void **, 0x1B0) = NULL;
        } else {
            M2C_FIELD(var_r18, void **, 0x1B0) = temp_r0;
            M2C_FIELD(var_r18, s32 *, 0x1AC) = 0;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x22A4), void **, 0x1AC) = var_r18;
            M2C_FIELD(arg0, void **, 0x22A4) = var_r18;
        }
        var_r17 += 1;
        var_r18 += 0x1B4;
        var_r16 += 0x1B4;
        M2C_FIELD(temp_r9_2, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r9_2, s32 *, 0xC) + 1);
    } while (var_r17 <= 6);
    temp_r0_2 = *(s32 *)(M2C_FIELD(arg0, s32 *, 0x22B4) + (M2C_FIELD(M2C_FIELD(arg0, void **, 0x19C8), s32 *, 0x1A0) << 5));
    if (temp_r0_2 == -1) {
        fn_80270784(arg0 + 0x1D1C, &lbl_8030D7B8);
        return;
    }
    fn_80270784(arg0 + 0x1D1C, *(s32 *)((char *)&lbl_8035EC98 + (temp_r0_2 * 4)));
}
