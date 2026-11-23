/* SoundGroup__ReleaseVoice @ 0x8019D7AC (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void VoiceHandle__ClearVoice(s32 *);
s32 * Voice__GetHandle(s32);
void SoundGroup__ReleaseVoice(void *arg0, s32 arg1) {
    s32 ld_C;
    s32 *temp_r3;
    void *temp_r11;
    void *temp_r11_2;

    if (arg1 != 0) {
        temp_r3 = Voice__GetHandle(arg1);
        if (temp_r3 != NULL) {
            VoiceHandle__ClearVoice(temp_r3);
        }
        temp_r11 = arg0 + 0x48;
        if ((void *) M2C_FIELD(arg0, void **, 0x48) == arg1) {
            M2C_FIELD(arg0, void **, 0x48) = (void *) M2C_FIELD(arg1, void **, 0x50);
        } else {
            M2C_FIELD(M2C_FIELD(arg1, void **, 0x4C), void **, 0x50) = (void *) M2C_FIELD(arg1, void **, 0x50);
        }
        if ((void *) M2C_FIELD(temp_r11, void **, 4) == arg1) {
            M2C_FIELD(temp_r11, void **, 4) = (void *) M2C_FIELD(arg1, void **, 0x4C);
        } else {
            M2C_FIELD(M2C_FIELD(arg1, void **, 0x50), void **, 0x4C) = (void *) M2C_FIELD(arg1, void **, 0x4C);
        }
        M2C_FIELD(arg1, void **, 0x4C) = NULL;
        M2C_FIELD(arg1, void **, 0x50) = NULL;
        ld_C = M2C_FIELD(temp_r11, s32 *, 0xC);
        M2C_FIELD(temp_r11, s32 *, 0xC) = (s32) (ld_C - 1);
        temp_r11_2 = M2C_FIELD(arg0, void **, 0x64);
        M2C_FIELD(temp_r11_2, M2C_UNK (**)(void *, s32), 0x1C)(arg0 + M2C_FIELD(temp_r11_2, s16 *, 0x18), arg1);
    }
}
