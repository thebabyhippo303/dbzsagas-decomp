/* Sfx3DPlayer__Activate @ 0x801989D0 (size: 0xF0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Sfx2DPlayer__Activate(void *);
s32 SoundGroup__FirstVoiceForPlayer(s32, void *);
s32 SoundGroup__NextVoiceForPlayer(s32, void *, s32);
M2C_UNK fn_8019BFEC(s32);                           /* extern */

void Sfx3DPlayer__Activate(void *arg0) {
    s32 var_r31;
    void *temp_r11;
    void *temp_r8;
    void *temp_r9;
    void *temp_r9_2;
    s32 w0, w4, w8;

    var_r31 = SoundGroup__FirstVoiceForPlayer(M2C_FIELD(arg0, s32 *, 0x24), arg0);
    if (var_r31 != 0) {
        do {
            fn_8019BFEC(var_r31);
            var_r31 = SoundGroup__NextVoiceForPlayer(M2C_FIELD(arg0, s32 *, 0x24), arg0, var_r31);
        } while (var_r31 != 0);
    }
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x6C) == 1) {
        temp_r9 = M2C_FIELD(arg0, void **, 0x94);
        M2C_FIELD(arg0, s32 *, 0x6C) = 2;
        temp_r11 = arg0 + 0x70;
        temp_r8 = arg0 + 0x98;
        M2C_FIELD(arg0, f32 *, 0x70) = (f32) M2C_FIELD(temp_r9, f32 *, 0);
        M2C_FIELD(temp_r11, f32 *, 4) = (f32) M2C_FIELD(temp_r9, f32 *, 4);
        M2C_FIELD(temp_r11, f32 *, 8) = (f32) M2C_FIELD(temp_r9, f32 *, 8);
        M2C_FIELD(temp_r11, f32 *, 0xC) = (f32) M2C_FIELD(temp_r9, f32 *, 0xC);
        M2C_FIELD(temp_r11, f32 *, 0x10) = (f32) M2C_FIELD(temp_r9, f32 *, 0x10);
        M2C_FIELD(temp_r11, f32 *, 0x14) = (f32) M2C_FIELD(temp_r9, f32 *, 0x14);
        M2C_FIELD(temp_r11, f32 *, 0x18) = (f32) M2C_FIELD(temp_r9, f32 *, 0x18);
        M2C_FIELD(temp_r11, f32 *, 0x1C) = (f32) M2C_FIELD(temp_r9, f32 *, 0x1C);
        M2C_FIELD(temp_r11, f32 *, 0x20) = (f32) M2C_FIELD(temp_r9, f32 *, 0x20);
        temp_r9_2 = M2C_FIELD(arg0, void **, 0xA4);
        w0 = M2C_FIELD(temp_r9_2, s32 *, 0);
        w4 = M2C_FIELD(temp_r9_2, s32 *, 4);
        w8 = M2C_FIELD(temp_r9_2, s32 *, 8);
        M2C_FIELD(arg0, s32 *, 0x98) = w0;
        M2C_FIELD(temp_r8, s32 *, 4) = w4;
        M2C_FIELD(temp_r8, s32 *, 8) = w8;
    }
    Sfx2DPlayer__Activate(arg0);
}
