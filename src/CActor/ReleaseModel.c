/* CActor__ReleaseModel @ 0x801DC6CC (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void fn_8022AB9C(void *, int);
M2C_UNK fn_801DE884(void *, void *);                        /* extern */
M2C_UNK fn_8020374C(void *);                        /* extern */
M2C_UNK fn_8021096C(s32, M2C_UNK);                  /* extern */

void CActor__ReleaseModel(void *arg0) {
    void *temp_r9;

    fn_801DE884(arg0, M2C_FIELD(arg0, void **, 0x84));
    temp_r9 = M2C_FIELD(arg0, void **, 0x84);
    if (temp_r9 != NULL) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0xA8) == 0) {
            fn_8022AB9C(temp_r9, 0);
            fn_8020374C(M2C_FIELD(arg0, void **, 0x84));
            goto block_3;
        }
        goto block_4;
    }
block_3:
    if ((s32) M2C_FIELD(arg0, s32 *, 0xA8) != 0) {
block_4:
        fn_8021096C(M2C_FIELD(arg0, s32 *, 0xA8), 3);
    }
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
}
