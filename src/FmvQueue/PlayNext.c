/* FmvQueue__PlayNext @ 0x801DA7F4 (size: 0xF0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__Delete(void *);
M2C_UNK Fmv__PlayFile(s32, void *, s32, M2C_UNK *, void *); /* extern */
extern M2C_UNK fn_801DAAAC __attribute__((section(".data")));

s32 FmvQueue__PlayNext(void *arg0, s32 arg1) {
    s32 var_r3;
    void *temp_r11;
    void *temp_r31;

    if (((s32) M2C_FIELD(arg0, s32 *, 0) == 0) || (temp_r31 = M2C_FIELD(arg0, void **, 4), temp_r11 = arg0 + 4, ((temp_r31 == NULL) != 0))) {
        return 0;
    }
    M2C_FIELD(arg0, void **, 4) = (void *) M2C_FIELD(temp_r31, void **, 0x88);
    if ((s32) M2C_FIELD(temp_r11, s32 *, 4) == temp_r31) {
        M2C_FIELD(temp_r11, s32 *, 4) = (s32) M2C_FIELD(temp_r31, s32 *, 0x84);
    } else {
        M2C_FIELD(M2C_FIELD(temp_r31, void **, 0x88), s32 *, 0x84) = (s32) M2C_FIELD(temp_r31, s32 *, 0x84);
    }
    M2C_FIELD(temp_r31, s32 *, 0x84) = 0;
    M2C_FIELD(temp_r31, void **, 0x88) = NULL;
    M2C_FIELD(temp_r11, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r11, s32 *, 0xC) - 1);
    if ((s32) M2C_FIELD(temp_r31, s32 *, 0x80) != 0) {
        Fmv__PlayFile(M2C_FIELD(arg0, s32 *, 0), temp_r31, arg1, &fn_801DAAAC, arg0);
    } else {
        Fmv__PlayFile(M2C_FIELD(arg0, s32 *, 0), temp_r31, arg1, NULL, NULL);
    }
    Mem__Delete(temp_r31);
    var_r3 = 1;
    if ((void *) M2C_FIELD(arg0, void **, 4) == NULL) {
        var_r3 = 0;
    }
    return var_r3;
}
