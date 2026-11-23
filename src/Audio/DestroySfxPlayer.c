/* Audio__DestroySfxPlayer @ 0x80191978 (size: 0xF0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


s32 Audio__DestroySfxPlayer(void *arg0, s32 arg1, s32 arg2) {
    void *temp_r31;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r0;

    if (arg1 == NULL) {
        return 0;
    }
    if (arg2 == 0) {
        temp_r31 = arg0 + 0x1C8;
        if ((void *) M2C_FIELD(arg0, void **, 0x1C8) == arg1) {
            M2C_FIELD(arg0, void **, 0x1C8) = (void *) M2C_FIELD(arg1, void **, 0x38);
        } else {
            M2C_FIELD(M2C_FIELD(arg1, void **, 0x34), void **, 0x38) = (void *) M2C_FIELD(arg1, void **, 0x38);
        }
        if ((void *) M2C_FIELD(temp_r31, void **, 4) == arg1) {
            M2C_FIELD(temp_r31, void **, 4) = (void *) M2C_FIELD(arg1, void **, 0x34);
        } else {
            M2C_FIELD(M2C_FIELD(arg1, void **, 0x38), void **, 0x34) = (void *) M2C_FIELD(arg1, void **, 0x34);
        }
        temp_r0 = M2C_FIELD(temp_r31, void **, 8);
        if (temp_r0 != NULL) {
            if (arg1 != NULL) {
                temp_r9 = M2C_FIELD(arg1, void **, 0x3C);
                M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0x2C)(arg1 + M2C_FIELD(temp_r9, s16 *, 0x28), 3);
            }
        } else {
            M2C_FIELD(arg1, void **, 0x34) = temp_r0;
            M2C_FIELD(arg1, void **, 0x38) = temp_r0;
        }
        M2C_FIELD(temp_r31, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r31, s32 *, 0xC) - 1);
    } else {
        temp_r9_2 = M2C_FIELD(arg1, void **, 0x3C);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x1C)(arg1 + M2C_FIELD(temp_r9_2, s16 *, 0x18));
    }
    return 1;
}
