/* HUD__EnsureHourglassTimerWidgets @ 0x8010EB34 (size: 0x230, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * fn_801842C4(unsigned int);
s32 fn_8026B590(void *);
f32 fn_8026B86C(void);
extern f32 lbl_803263EC __attribute__((section(".data")));
extern f32 lbl_803263F0 __attribute__((section(".data")));
extern f32 lbl_803263F4 __attribute__((section(".data")));
extern f32 lbl_803263F8 __attribute__((section(".data")));
extern f32 lbl_803263FC __attribute__((section(".data")));
extern f32 lbl_80326400 __attribute__((section(".data")));
extern f32 lbl_80326404 __attribute__((section(".data")));
extern void *lbl_803DC394;


void HUD__EnsureHourglassTimerWidgets(void *arg0) {
    M2C_UNK (*temp_r9_2)(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK (*temp_r9_5)(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    char *p_2bbc;
    char *p_2bc0;
    f32 temp_f31;
    void *g;
    s32 temp_r10;
    s32 temp_r10_2;
    s32 temp_r11_2;
    s32 temp_r11_4;
    s32 temp_r30;
    void *temp_r11_3;
    s32 temp_r30_3;
    s32 temp_r3;
    s32 temp_r3_2;
    void *temp_r11;
    s32 temp_r30_2;
    void *temp_r29;
    void *temp_r29_2;
    void *temp_r29_3;
    void *temp_r29_4;
    void *temp_r9;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_6;
    void *temp_r9_7;

    temp_f31 = lbl_803263EC;
    p_2bc0 = (char *)arg0 + 0x2bc0;
    if (M2C_FIELD(p_2bc0, f32 *, 0x14) != temp_f31) {
        p_2bbc = (char *)arg0 + 0x2bbc;
        if ((s32) M2C_FIELD(p_2bbc, u32 *, 0x0) == 0) {
            temp_r3 = fn_8026B590(fn_801842C4(0x1A0U));
            g = lbl_803DC394;
            M2C_FIELD(p_2bbc, s32 *, 0x0) = temp_r3;
            temp_r9 = M2C_FIELD(temp_r3, void **, 0x19C);
            temp_r9_2 = M2C_FIELD(temp_r9, M2C_UNK (**)(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK), 0x14);
            temp_r9_2(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x10), M2C_FIELD(g, s32 *, 0xC), 0, 0, 1, 1);
            temp_r10 = M2C_FIELD(p_2bbc, s32 *, 0x0);
            temp_r11 = M2C_FIELD(temp_r10, void **, 0x19C);
            M2C_FIELD(temp_r11, M2C_UNK (**)(s32, f32, f32), 0xEC)(temp_r10 + M2C_FIELD(temp_r11, s16 *, 0xE8), lbl_803263F0, lbl_803263F0);
            temp_r30 = M2C_FIELD(p_2bbc, s32 *, 0x0);
            temp_r29 = M2C_FIELD(temp_r30, void **, 0x19C);
            temp_r29_2 = temp_r29 + 0xA8;
            temp_r30_2 = temp_r30 + M2C_FIELD(temp_r29, s16 *, 0xA8);
            M2C_FIELD(temp_r29_2, M2C_UNK (**)(s32, f32, f32), 4)(temp_r30_2, (fn_8026B86C() - lbl_803263F4) - lbl_803263F8, lbl_803263FC);
            temp_r11_2 = M2C_FIELD(p_2bbc, s32 *, 0x0);
            temp_r9_3 = M2C_FIELD(temp_r11_2, void **, 0x19C);
            M2C_FIELD(temp_r9_3, M2C_UNK (**)(s32, M2C_UNK), 0x1B4)(temp_r11_2 + M2C_FIELD(temp_r9_3, s16 *, 0x1B0), 7);
        }
        if ((s32) M2C_FIELD(p_2bc0, s32 *, 0x0) == 0) {
            temp_r3_2 = fn_8026B590(fn_801842C4(0x1A0U));
            g = lbl_803DC394;
            M2C_FIELD(p_2bc0, s32 *, 0x0) = temp_r3_2;
            temp_r9_4 = M2C_FIELD(temp_r3_2, void **, 0x19C);
            temp_r9_5 = M2C_FIELD(temp_r9_4, M2C_UNK (**)(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK), 0x14);
            temp_r9_5(temp_r3_2 + M2C_FIELD(temp_r9_4, s16 *, 0x10), M2C_FIELD(g, s32 *, 0xC), 1, 0, 1, 1);
            temp_r10_2 = M2C_FIELD(p_2bc0, s32 *, 0x0);
            temp_r11_3 = M2C_FIELD(temp_r10_2, void **, 0x19C);
            M2C_FIELD(temp_r11_3, M2C_UNK (**)(s32, f32, f32), 0xEC)(temp_r10_2 + M2C_FIELD(temp_r11_3, s16 *, 0xE8), lbl_803263F0, lbl_803263F0);
            temp_r30_3 = M2C_FIELD(p_2bc0, s32 *, 0x0);
            temp_r29_3 = M2C_FIELD(temp_r30_3, void **, 0x19C);
            temp_r29_4 = temp_r29_3 + 0xA8;
            M2C_FIELD(temp_r29_4, M2C_UNK (**)(s32, f32, f32), 4)((temp_r30_3 + M2C_FIELD(temp_r29_3, s16 *, 0xA8)), (fn_8026B86C() - lbl_803263F4) - lbl_803263F8, lbl_803263FC);
            temp_r10_2 = M2C_FIELD(p_2bc0, s32 *, 0x0);
            temp_r9_6 = M2C_FIELD(temp_r10_2, void **, 0x19C);
            M2C_FIELD(temp_r9_6, M2C_UNK (**)(s32, f32, f32, f32, f32), 0x2D4)(temp_r10_2 + M2C_FIELD(temp_r9_6, s16 *, 0x2D0), temp_f31, lbl_80326400, lbl_80326404, lbl_80326404);
            temp_r11_4 = M2C_FIELD(p_2bc0, s32 *, 0x0);
            temp_r9_7 = M2C_FIELD(temp_r11_4, void **, 0x19C);
            M2C_FIELD(temp_r9_7, M2C_UNK (**)(s32, M2C_UNK), 0x1B4)(temp_r11_4 + M2C_FIELD(temp_r9_7, s16 *, 0x1B0), 7);
        }
    }
}
