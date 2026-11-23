/* Minimap__ConstructCategory5Marker @ 0x8004C370 (size: 0xB0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Minimap__CreateActorMarkerWidget(void *, s32, s32);
extern f32 lbl_80318DD4 __attribute__((section(".data")));
extern M2C_UNK lbl_80318DF8 __attribute__((section(".data")));

void *Minimap__ConstructCategory5Marker(void *arg0, s32 arg1, s32 arg2) {
    void *temp_r10;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r9;
    void *temp_r9_2;

    Minimap__CreateActorMarkerWidget(arg0, arg1, arg2);
    temp_r11 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_80318DF8;
    temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK), 0x74)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x70), 9, 0, 1, 1);
    temp_r11_2 = M2C_FIELD(arg0, void **, 0);
    temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 0x19C);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0x1B4)(temp_r11_2 + M2C_FIELD(temp_r9_2, s16 *, 0x1B0), 5);
    temp_r10 = M2C_FIELD(arg0, void **, 0);
    temp_r11_3 = M2C_FIELD(temp_r10, void **, 0x19C);
    M2C_FIELD(temp_r11_3, M2C_UNK (**)(void *, f32, f32), 0xCC)(temp_r10 + M2C_FIELD(temp_r11_3, s16 *, 0xC8), lbl_80318DD4, lbl_80318DD4);
    return arg0;
}
