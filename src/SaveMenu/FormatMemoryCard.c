/* SaveMenu__FormatMemoryCard @ 0x8005300C (size: 0x160, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
typedef unsigned long long u64;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_80184B70(void *, f32);
void fn_80267318(void *, int, float);
extern M2C_UNK lbl_80319A54 __attribute__((section(".data")));
extern M2C_UNK lbl_80319C0C __attribute__((section(".data")));
extern M2C_UNK lbl_8031A0E4 __attribute__((section(".data")));
extern M2C_UNK lbl_8031A0F0 __attribute__((section(".data")));
extern f32 lbl_8031A278 __attribute__((section(".data")));
extern f32 lbl_8031A27C __attribute__((section(".data")));
extern f32 lbl_8031A280 __attribute__((section(".data")));
extern void *lbl_803DC348 __attribute__((section(".sdata")));
extern void *lbl_803DCC60;
extern void *lbl_803DCC70;

void SaveMenu__FormatMemoryCard(void *arg0) {
    s32 spC;
    s32 sp8;
    s32 temp_r3;
    void *temp_r11;
    void *temp_r29;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_ret;
    void *temp_ret_2;

    M2C_FIELD(lbl_803DCC60, s32 *, 8) = 1;
    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    temp_ret = M2C_FIELD(temp_r9, void *(**)(void *, M2C_UNK *, M2C_UNK *), 0x3DC)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x3D8), &lbl_8031A0E4, &lbl_80319C0C);
    fn_80184B70(temp_ret, lbl_8031A278);
    temp_r9_2 = M2C_FIELD(lbl_803DCC70, void **, 0xC);
    temp_r3 = M2C_FIELD(temp_r9_2, s32 (**)(void *), 0x54)(lbl_803DCC70 + M2C_FIELD(temp_r9_2, s16 *, 0x50));
    M2C_FIELD(lbl_803DCC60, s32 *, 8) = 0;
    if ((temp_r3 != 0) && (temp_r3 != 2)) {
        temp_r9_3 = M2C_FIELD(arg0, void **, 0x19C);
        M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, s32), 0x3BC)(arg0 + M2C_FIELD(temp_r9_3, s16 *, 0x3B8), temp_r3);
        return;
    }
    temp_r29 = arg0 + 0x1A4;
    fn_80267318(temp_r29, 0, lbl_8031A27C);
    temp_r9_4 = M2C_FIELD(arg0, void **, 0x19C);
    temp_ret_2 = M2C_FIELD(temp_r9_4, void *(**)(void *, M2C_UNK *, M2C_UNK *), 0x3DC)(arg0 + M2C_FIELD(temp_r9_4, s16 *, 0x3D8), &lbl_8031A0E4, &lbl_8031A0F0);
    fn_80184B70(temp_ret_2, lbl_8031A280);
    fn_80267318(temp_r29, 0, lbl_8031A27C);
    M2C_FIELD(M2C_FIELD(lbl_803DC348, void **, 0x5388), s32 *, 0x48) = 0;
    sp8 = M2C_FIELD(&lbl_80319A54, s32 *, 0);
    spC = M2C_FIELD(&lbl_80319A54, s32 *, 4);
    temp_r11 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r11, M2C_UNK (**)(void *, s32 *), 0x40C)(arg0 + M2C_FIELD(temp_r11, s16 *, 0x408), &sp8);
}
