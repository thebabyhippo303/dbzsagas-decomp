/* Minimap__ConstructEnemyMarker @ 0x8004C128 (size: 0xB0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void Minimap__CreateActorMarkerWidget(void *self);
extern M2C_UNK lbl_803184F8 __attribute__((section(".data")));
extern f32 lbl_803184D4 __attribute__((section(".data")));
void *Minimap__ConstructEnemyMarker(void *arg0) {
    void *temp_r11;
    void *temp_r09;
    void *obj3;
    void *vt3;
    Minimap__CreateActorMarkerWidget(arg0);
    temp_r11 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_803184F8;
    temp_r09 = M2C_FIELD(temp_r11, void **, 0x19C);
    M2C_FIELD(temp_r09, M2C_UNK (**)(void *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK), 116)(temp_r11 + M2C_FIELD(temp_r09, s16 *, 112), 7, 0, 1, 1);
    temp_r11 = M2C_FIELD(arg0, void **, 0);
    temp_r09 = M2C_FIELD(temp_r11, void **, 0x19C);
    M2C_FIELD(temp_r09, M2C_UNK (**)(void *, M2C_UNK), 436)(temp_r11 + M2C_FIELD(temp_r09, s16 *, 432), 5);
    obj3 = M2C_FIELD(arg0, void **, 0);
    vt3 = M2C_FIELD(obj3, void **, 0x19C);
    M2C_FIELD(vt3, M2C_UNK (**)(void *, f32, f32), 204)(obj3 + M2C_FIELD(vt3, s16 *, 200), lbl_803184D4, lbl_803184D4);
    return arg0;
}
