/* Bink__FillSoundSilence @ 0x802EC69C (size: 0xCC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * memset(void *, int, u32);
u32 Bink__FillSoundSilence(void *arg0) {
    u32 temp_r28;
    u32 temp_r29;
    u32 temp_r30;
    u32 temp_r5;
    u32 temp_r8;
    void *temp_r3;
    void *temp_r9;

    temp_r8 = M2C_FIELD(arg0, u32 *, 0x40);
    temp_r5 = M2C_FIELD(arg0, u32 *, 0x4C);
    if (temp_r8 < temp_r5) {
        temp_r29 = temp_r5 - temp_r8;
        temp_r3 = M2C_FIELD(arg0, void **, 0x2C);
        temp_r9 = M2C_FIELD(arg0, void **, 0x38) - temp_r29;
        M2C_FIELD(arg0, void **, 0x38) = temp_r9;
        temp_r28 = (u32) (temp_r29 * 0x3E8) / (u32) ((u32) (M2C_FIELD(arg0, s32 *, 0x6C) * M2C_FIELD(arg0, s32 *, 0x70) * M2C_FIELD(arg0, s32 *, 0x74)) >> 3U);
        if (temp_r9 < temp_r3) {
            temp_r30 = temp_r3 - temp_r9;
            M2C_FIELD(arg0, void **, 0x38) = (void *) (temp_r9 + M2C_FIELD(arg0, s32 *, 0x28));
            memset(temp_r3, 0, temp_r29 - temp_r30);
            memset(M2C_FIELD(arg0, void **, 0x38), 0, temp_r30);
        } else {
            memset(temp_r9, 0, temp_r29);
        }
        M2C_FIELD(arg0, u32 *, 0x40) = (u32) (M2C_FIELD(arg0, u32 *, 0x40) + temp_r29);
        return temp_r28;
    }
    return 0U;
}
