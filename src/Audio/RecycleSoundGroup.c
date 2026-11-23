/* Audio__RecycleSoundGroup @ 0x80191E3C (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void Audio__RecycleSoundGroup(void *arg0, void *arg1) {
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;

    if (arg1 != NULL) {
        temp_r9 = M2C_FIELD(arg1, void **, 0x64);
        if (M2C_FIELD(temp_r9, s32 (**)(void *), 0xC)(arg1 + M2C_FIELD(temp_r9, s16 *, 8)) == 0) {
            temp_r9_2 = M2C_FIELD(arg1, void **, 0x64);
            M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0x24)(arg1 + M2C_FIELD(temp_r9_2, s16 *, 0x20), 2);
            M2C_FIELD(arg1, void **, 0) = (void *) M2C_FIELD(arg0, void **, 0x198);
            M2C_FIELD(arg0, void **, 0x198) = arg1;
            return;
        }
        temp_r9_3 = M2C_FIELD(arg1, void **, 0x64);
        M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, M2C_UNK), 0x24)(arg1 + M2C_FIELD(temp_r9_3, s16 *, 0x20), 2);
        M2C_FIELD(arg1, void **, 0) = (void *) M2C_FIELD(arg0, void **, 0x1A8);
        M2C_FIELD(arg0, void **, 0x1A8) = arg1;
    }
}
