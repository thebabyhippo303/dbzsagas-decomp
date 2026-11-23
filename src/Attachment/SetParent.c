/* Attachment__SetParent @ 0x801E817C (size: 0x11C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


s32 Attachment__SetParent(void *arg0, void *arg1) {
    M2C_UNK (*temp_r9_5)(void *, void *);
    void *temp_r11;
    void *temp_r3;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;

    if (arg1 != NULL) {
        if ((void *) M2C_FIELD(arg1, void **, 0x188) == NULL) {
            return 3;
        }
        goto block_3;
    }
block_3:
    temp_r9 = M2C_FIELD(arg0, void **, 0x54);
    if (arg1 == temp_r9) {
        return 1;
    }
    if (temp_r9 != NULL) {
        temp_r11 = M2C_FIELD(arg0, void **, 0x58);
        if (temp_r11 != NULL) {
            M2C_FIELD(M2C_FIELD(temp_r11, void **, 0x188), void **, 0x5C) = (void *) M2C_FIELD(arg0, void **, 0x5C);
        } else {
            M2C_FIELD(M2C_FIELD(temp_r9, void **, 0x188), void **, 0x60) = M2C_FIELD(arg0, void **, 0x5C);
        }
        temp_r9_2 = M2C_FIELD(arg0, void **, 0x5C);
        if (temp_r9_2 != NULL) {
            M2C_FIELD(M2C_FIELD(temp_r9_2, void **, 0x188), void **, 0x58) = (void *) M2C_FIELD(arg0, void **, 0x58);
        }
        M2C_FIELD(arg0, void **, 0x58) = NULL;
        M2C_FIELD(arg0, void **, 0x5C) = NULL;
    }
    if (arg1 != NULL) {
        M2C_FIELD(arg0, void **, 0x5C) = (void *) M2C_FIELD(M2C_FIELD(arg1, void **, 0x188), void **, 0x60);
        M2C_FIELD(M2C_FIELD(arg1, void **, 0x188), void **, 0x60) = (void *) M2C_FIELD(arg0, void **, 0);
        temp_r9_3 = M2C_FIELD(arg0, void **, 0x5C);
        if (temp_r9_3 != NULL) {
            M2C_FIELD(M2C_FIELD(temp_r9_3, void **, 0x188), void **, 0x58) = (void *) M2C_FIELD(arg0, void **, 0);
        }
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) != (void *) M2C_FIELD(arg0, void **, 0x54)) {
        temp_r3 = M2C_FIELD(arg0, void **, 0);
        temp_r9_4 = M2C_FIELD(temp_r3, void **, 0x34);
        temp_r9_5 = M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *, void *, M2C_UNK), 0x14C);
        temp_r9_5(temp_r3 + M2C_FIELD(temp_r9_4, s16 *, 0x148), arg1);
    }
    M2C_FIELD(arg0, void **, 0x54) = arg1;
    return 0;
}
