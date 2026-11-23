/* HUD__UpdateBossStatBarSphereAsset @ 0x80121C98 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void SphereAsset__LoadPresetById(void *, s32);
void HUD__UpdateBossStatBarSphereAsset(void *arg0, void *arg1) {
    s32 var_r4;
    void *temp_r11;
    void *temp_r9;
    s16 adj;
    char *fnslot;
    char *w;

    SphereAsset__LoadPresetById(M2C_FIELD(arg0, void **, 0xC), M2C_FIELD(M2C_FIELD(arg1, void **, 0x19D8), s32 *, 0xC));
    temp_r11 = M2C_FIELD(arg0, void **, 0xC);
    var_r4 = 3;
    temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
    adj = M2C_FIELD(temp_r9, s16 *, 0x1B0);
    fnslot = (char *)temp_r9 + 0x1B0;
    w = (char *)temp_r11 + adj;
    if (M2C_FIELD(arg1, s32 *, 0x7E4) != 0) {
        var_r4 = 4;
    }
    M2C_FIELD(fnslot, M2C_UNK (**)(void *, s32), 4)(w, var_r4);
}
