/* EnvSoundPoint__Destroy @ 0x8019A5E8 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void EnvSoundSource__Destroy(void *, s32);
extern M2C_UNK lbl_80340080 __attribute__((section(".data")));

void EnvSoundPoint__Destroy(void *arg0, s32 arg1) {
    void **temp_r11;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg0, void ***, 0x34);
    M2C_FIELD(arg0, M2C_UNK **, 0x28) = &lbl_80340080;
    if (temp_r11 != NULL) {
        temp_r9 = *temp_r11;
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32), 0xC)((char *)temp_r11 + M2C_FIELD(temp_r9, s16 *, 8), 3);
    }
    EnvSoundSource__Destroy(arg0, arg1);
}
