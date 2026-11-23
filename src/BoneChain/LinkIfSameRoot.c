/* BoneChain__LinkIfSameRoot @ 0x801DFE18 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


s32 BoneChain__LinkIfSameRoot(void *arg0, void *arg1) {
    void *temp_r11;
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 0xC);
    if ((temp_r9 != NULL) && (arg1 != NULL)) {
        temp_r11 = M2C_FIELD(arg1, void **, 0xC);
        if ((temp_r11 != NULL) && ((s32) M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_r9, void **, 0x34), void **, 0xD8), u8 *, 0xC8) == (s32) M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_r11, void **, 0x34), void **, 0xD8), u8 *, 0xC8))) {
            M2C_FIELD(arg1, void **, 0) = (void *) M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(arg0, void **, 0) = arg1;
            return 1;
        }
    }
    return 0;
}
