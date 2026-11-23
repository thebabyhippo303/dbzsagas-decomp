/* SoundDriver__LinkActiveChannel @ 0x8019692C (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void SoundDriver__LinkActiveChannel(void **arg0, void *arg1) {
    void *temp_r0;
    void *temp_r10;
    void *temp_r3;

    temp_r3 = *arg0;
    temp_r0 = M2C_FIELD(temp_r3, void **, 0x4DC);
    temp_r10 = temp_r3 + 0x4DC;
    if (temp_r0 == NULL) {
        M2C_FIELD(temp_r10, void **, 4) = arg1;
        M2C_FIELD(temp_r3, void **, 0x4DC) = arg1;
        M2C_FIELD(arg1, void **, 0x2C) = temp_r0;
        M2C_FIELD(arg1, void **, 0x28) = temp_r0;
    } else {
        M2C_FIELD(arg1, void **, 0x2C) = NULL;
        M2C_FIELD(arg1, void **, 0x28) = M2C_FIELD(temp_r10, void **, 4);
        M2C_FIELD(M2C_FIELD(temp_r10, void **, 4), void **, 0x2C) = arg1;
        M2C_FIELD(temp_r10, void **, 4) = arg1;
    }
    M2C_FIELD(temp_r10, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r10, s32 *, 0xC) + 1);
}
