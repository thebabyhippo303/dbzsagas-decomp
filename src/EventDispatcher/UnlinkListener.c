/* EventDispatcher__UnlinkListener @ 0x802514C4 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void EventDispatcher__UnlinkListener(void *arg0, void *arg1) {
    void *temp_r9;
    void *temp_r9_2;

    temp_r9 = M2C_FIELD(arg1, void **, 8);
    if (temp_r9 != NULL) {
        M2C_FIELD(temp_r9, void **, 0xC) = (void *) M2C_FIELD(arg1, void **, 0xC);
    }
    temp_r9_2 = M2C_FIELD(arg1, void **, 0xC);
    if (temp_r9_2 != NULL) {
        M2C_FIELD(temp_r9_2, void **, 8) = (void *) M2C_FIELD(arg1, void **, 8);
    }
    if ((void *) M2C_FIELD(arg0, void **, 4) == arg1) {
        M2C_FIELD(arg0, void **, 4) = (void *) M2C_FIELD(arg1, void **, 0xC);
    }
    M2C_FIELD(arg1, void **, 8) = NULL;
    M2C_FIELD(arg1, void **, 0xC) = NULL;
}
