/* MinimapSpriteMarker__Construct @ 0x8004BB30 (size: 0x188, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Mem__New(s32);
void * fn_8026B590(void *);
M2C_UNK Minimap__CreateActorMarkerWidget();         /* extern */
extern f32 lbl_80318004 __attribute__((section(".data")));
extern f32 lbl_80318008 __attribute__((section(".data")));
extern f32 lbl_8031800C __attribute__((section(".data")));
extern f32 lbl_80318010;
extern M2C_UNK lbl_80318078 __attribute__((section(".data")));
extern void *lbl_803DC3B4 __attribute__((section(".data")));

void *MinimapSpriteMarker__Construct(char *arg0) {
    M2C_UNK (*temp_r9_4)(void *, s32, M2C_UNK, M2C_UNK, M2C_UNK);
    void *temp_r10;
    void *temp_r10_2;
    void *temp_r10_3;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r11_4;
    void *temp_r11_5;
    void *temp_r11_6;
    void *temp_r3;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_5;

    Minimap__CreateActorMarkerWidget();
    temp_r11 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_80318078;
    temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK), 0x74)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x70), 2, 0, 1, 1);
    temp_r11_2 = M2C_FIELD(arg0, void **, 0);
    temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 0x19C);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0x1B4)(temp_r11_2 + M2C_FIELD(temp_r9_2, s16 *, 0x1B0), 5);
    temp_r3 = fn_8026B590(Mem__New(0x1A0));
    M2C_FIELD(arg0, void **, 0xC) = temp_r3;
    temp_r9_3 = M2C_FIELD(temp_r3, void **, 0x19C);
    temp_r9_4 = M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK), 0x14);
    temp_r9_4(temp_r3 + M2C_FIELD(temp_r9_3, s16 *, 0x10), M2C_FIELD(lbl_803DC3B4, s32 *, 8), 8, 0, 1);
    temp_r10 = M2C_FIELD(arg0, void **, 0xC);
    temp_r11_3 = M2C_FIELD(temp_r10, void **, 0x19C);
    M2C_FIELD(temp_r11_3, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x10C)(temp_r10 + M2C_FIELD(temp_r11_3, s16 *, 0x108), lbl_80318004, lbl_80318004, lbl_80318004, lbl_80318004);
    temp_r10_2 = M2C_FIELD(arg0, void **, 0xC);
    temp_r11_4 = M2C_FIELD(temp_r10_2, void **, 0x19C);
    M2C_FIELD(temp_r11_4, M2C_UNK (**)(void *, f32, f32), 0xCC)(temp_r10_2 + M2C_FIELD(temp_r11_4, s16 *, 0xC8), lbl_80318008, lbl_80318008);
    temp_r10_3 = M2C_FIELD(arg0, void **, 0xC);
    temp_r11_5 = M2C_FIELD(temp_r10_3, void **, 0x19C);
    M2C_FIELD(temp_r11_5, M2C_UNK (**)(void *, f32, f32), 0xEC)(temp_r10_3 + M2C_FIELD(temp_r11_5, s16 *, 0xE8), lbl_8031800C, lbl_8031800C);
    temp_r11_6 = M2C_FIELD(arg0, void **, 0xC);
    temp_r9_5 = M2C_FIELD(temp_r11_6, void **, 0x19C);
    M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *, M2C_UNK), 0x1B4)(temp_r11_6 + M2C_FIELD(temp_r9_5, s16 *, 0x1B0), 6);
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_80318010;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) lbl_80318010;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_80318010;
    return arg0;
}
