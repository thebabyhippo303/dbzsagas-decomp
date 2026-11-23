/* SwooshGenerator__Remove @ 0x802304A8 (size: 0xB0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK SwooshGenerator__Destroy(s32, s32);
extern void *lbl_803ADEA4 __attribute__((section(".data")));

void SwooshGenerator__Remove(void *arg0) {
    void *temp_r30;

    temp_r30 = lbl_803ADEA4;
    if ((void **) M2C_FIELD(temp_r30, void ***, 0) == arg0) {
        M2C_FIELD(temp_r30, void ***, 0) = (void **) M2C_FIELD(arg0, void ***, 4);
    } else {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), void ***, 4) = (void **) M2C_FIELD(arg0, void ***, 4);
    }
    if ((void *) M2C_FIELD(temp_r30, void **, 4) == arg0) {
        M2C_FIELD(temp_r30, void **, 4) = (void *) M2C_FIELD(arg0, void **, 0);
    } else {
        *M2C_FIELD(arg0, void ***, 4) = M2C_FIELD(arg0, void **, 0);
    }
    M2C_FIELD(arg0, void **, 0) = NULL;
    M2C_FIELD(arg0, void ***, 4) = NULL;
    M2C_FIELD(temp_r30, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r30, s32 *, 0xC) - 1);
    if (arg0 != NULL) {
        SwooshGenerator__Destroy((s32) arg0, 2);
        M2C_FIELD(arg0, void **, 0) = (void *) M2C_FIELD(temp_r30, void **, 0x10);
        M2C_FIELD(temp_r30, void **, 0x10) = arg0;
    }
}
