/* ProgressText__Construct @ 0x8011F6A8 (size: 0x20C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * fn_801842C4(unsigned int);
void fn_80260304(void *, float, float);
void * fn_80270450(void *);
M2C_UNK fn_802606B8(s32, f32);                      /* extern */
M2C_UNK fn_80260728(s32, M2C_UNK);                  /* extern */
M2C_UNK fn_80260788(s32, M2C_UNK);                  /* extern */
extern f32 lbl_80327318 __attribute__((section(".data")));
extern f32 lbl_8032731C __attribute__((section(".data")));
extern f32 lbl_80327320 __attribute__((section(".data")));
extern f32 lbl_80327324 __attribute__((section(".data")));
extern f32 lbl_80327328 __attribute__((section(".data")));
extern f32 lbl_8032732C __attribute__((section(".data")));
extern f32 lbl_80327330 __attribute__((section(".data")));
extern f32 lbl_80327334 __attribute__((section(".data")));
extern f32 lbl_80327338 __attribute__((section(".data")));
extern void *lbl_803DC6B0;

s32 ProgressText__Construct(void) {
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r3;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;

    temp_r3 = fn_80270450(fn_801842C4(0x1F4U));
    temp_r9 = M2C_FIELD(temp_r3, void **, 0x19C);
    lbl_803DC6B0 = temp_r3;
    {
        s16 adj = M2C_FIELD(temp_r9, s16 *, 0x110);
        void (*fn)(void *, s32, s32, s32, s32) =
            M2C_FIELD(temp_r9, void (**)(void *, s32, s32, s32, s32), 0x114);
        fn((char *)temp_r3 + adj, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    temp_r9_2 = M2C_FIELD(lbl_803DC6B0, void **, 0x19C);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, f32, f32), 0xCC)(lbl_803DC6B0 + M2C_FIELD(temp_r9_2, s16 *, 0xC8), lbl_80327318, lbl_80327318);
    temp_r11 = M2C_FIELD(lbl_803DC6B0, void **, 0x19C);
    M2C_FIELD(temp_r11, M2C_UNK (**)(void *, f32, f32), 0xEC)(lbl_803DC6B0 + M2C_FIELD(temp_r11, s16 *, 0xE8), lbl_8032731C, lbl_8032731C);
    temp_r11_2 = M2C_FIELD(lbl_803DC6B0, void **, 0x19C);
    M2C_FIELD(temp_r11_2, M2C_UNK (**)(void *, f32), 0x42C)(lbl_803DC6B0 + M2C_FIELD(temp_r11_2, s16 *, 0x428), lbl_80327320);
    temp_r11_3 = M2C_FIELD(lbl_803DC6B0, void **, 0x19C);
    M2C_FIELD(temp_r11_3, M2C_UNK (**)(void *, f32, f32), 0xAC)(lbl_803DC6B0 + M2C_FIELD(temp_r11_3, s16 *, 0xA8), lbl_80327324, lbl_80327328);
    temp_r9_3 = M2C_FIELD(lbl_803DC6B0, void **, 0x19C);
    M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, f32), 0x41C)(lbl_803DC6B0 + M2C_FIELD(temp_r9_3, s16 *, 0x418), lbl_8032732C);
    temp_r9_4 = M2C_FIELD(lbl_803DC6B0, void **, 0x19C);
    M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *), 0x1FC)(lbl_803DC6B0 + M2C_FIELD(temp_r9_4, s16 *, 0x1F8));
    temp_r9_5 = M2C_FIELD(lbl_803DC6B0, void **, 0x19C);
    M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *, M2C_UNK), 0x1EC)(lbl_803DC6B0 + M2C_FIELD(temp_r9_5, s16 *, 0x1E8), 0);
    fn_80260728(M2C_FIELD(lbl_803DC6B0, s32 *, 0x164) + 0x304, 1);
    fn_80260304(M2C_FIELD(lbl_803DC6B0, s32 *, 0x164) + 0x304, lbl_8032732C, lbl_80327318);
    fn_80260304(M2C_FIELD(lbl_803DC6B0, s32 *, 0x164) + 0x304, lbl_80327330, lbl_80327318);
    fn_80260304(M2C_FIELD(lbl_803DC6B0, s32 *, 0x164) + 0x304, lbl_80327334, lbl_8032732C);
    fn_802606B8(M2C_FIELD(lbl_803DC6B0, s32 *, 0x164) + 0x304, lbl_80327338);
    fn_80260788(M2C_FIELD(lbl_803DC6B0, s32 *, 0x164) + 0x304, 0);
    temp_r9_6 = M2C_FIELD(lbl_803DC6B0, void **, 0x19C);
    M2C_FIELD(temp_r9_6, M2C_UNK (**)(void *), 0x1DC)(lbl_803DC6B0 + M2C_FIELD(temp_r9_6, s16 *, 0x1D8));
    return 1;
}
