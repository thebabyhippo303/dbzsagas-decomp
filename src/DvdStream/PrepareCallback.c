/* DvdStream__PrepareCallback @ 0x80197874 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK DVDStopStreamAtEndAsync(void *, M2C_UNK);

void DvdStream__PrepareCallback(s32 arg0, void *arg1) {
    void *temp_r31;
    void *temp_r9;

    temp_r31 = M2C_FIELD(arg1, void **, 0x2C);
    M2C_FIELD(temp_r31, s32 *, 0x34) = 0;
    M2C_FIELD(temp_r31, s32 *, 0x48) = arg0;
    if (arg0 == 0) {
        temp_r9 = M2C_FIELD(temp_r31, void **, 0x28);
        M2C_FIELD(temp_r31, s32 *, 0x38) = 1;
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x14)(temp_r31 + M2C_FIELD(temp_r9, s16 *, 0x10));
        if ((s32) M2C_FIELD(temp_r31, s32 *, 0x30) == 0) {
            DVDStopStreamAtEndAsync(arg1, 0);
        }
    }
}
