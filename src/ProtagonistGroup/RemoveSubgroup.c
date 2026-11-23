/* ProtagonistGroup__RemoveSubgroup @ 0x801E9660 (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void ProtagonistGroup__RemoveSubgroup(void *arg0, void *arg1) {
    s16 ld_8;
    void *temp_r11;
    void *temp_r9;

    if (arg1 != NULL) {
        temp_r11 = arg0 + 0x3C;
        if ((void *) M2C_FIELD(arg0, void **, 0x3C) == arg1) {
            M2C_FIELD(arg0, void **, 0x3C) = (void *) M2C_FIELD(arg1, void **, 0x10);
        } else {
            M2C_FIELD(M2C_FIELD(arg1, void **, 0xC), void **, 0x10) = (void *) M2C_FIELD(arg1, void **, 0x10);
        }
        if ((void *) M2C_FIELD(temp_r11, void **, 4) == arg1) {
            M2C_FIELD(temp_r11, void **, 4) = (void *) M2C_FIELD(arg1, void **, 0xC);
        } else {
            M2C_FIELD(M2C_FIELD(arg1, void **, 0x10), void **, 0xC) = (void *) M2C_FIELD(arg1, void **, 0xC);
        }
        M2C_FIELD(arg1, void **, 0xC) = NULL;
        M2C_FIELD(arg1, void **, 0x10) = NULL;
        M2C_FIELD(temp_r11, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r11, s32 *, 0xC) - 1);
        if (arg1 != NULL) {
            temp_r9 = M2C_FIELD(arg1, void **, 8);
            ld_8 = M2C_FIELD(temp_r9, s16 *, 8);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(arg1 + ld_8, 2);
            M2C_FIELD(arg1, void **, 0) = (void *) M2C_FIELD(arg0, void **, 0x4C);
            M2C_FIELD(arg0, void **, 0x4C) = arg1;
        }
    }
}
