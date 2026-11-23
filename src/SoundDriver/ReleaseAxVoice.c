/* SoundDriver__ReleaseAxVoice @ 0x80196834 (size: 0xF8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK fn_802D2728(s32);                           /* extern */
M2C_UNK fn_802D6DA4(s32);                           /* extern */

void SoundDriver__ReleaseAxVoice(void *arg0, void *arg1) {
    s32 temp_r30;
    void *temp_r0;
    void *temp_r11;
    void *temp_r8;

    temp_r30 = M2C_FIELD(arg1, s32 *, 8);
    if (temp_r30 != 0) {
        fn_802D6DA4(temp_r30);
        fn_802D2728(temp_r30);
        M2C_FIELD(arg1, s32 *, 8) = 0;
    }
    temp_r11 = arg0 + 0x4EC;
    if ((void *) M2C_FIELD(arg0, void **, 0x4EC) == arg1) {
        M2C_FIELD(arg0, void **, 0x4EC) = (void *) M2C_FIELD(arg1, void **, 0);
    } else {
        *M2C_FIELD(arg1, void ***, 4) = M2C_FIELD(arg1, void **, 0);
    }
    if ((void **) M2C_FIELD(temp_r11, void ***, 4) == arg1) {
        M2C_FIELD(temp_r11, void ***, 4) = (void **) M2C_FIELD(arg1, void ***, 4);
    } else {
        M2C_FIELD(M2C_FIELD(arg1, void **, 0), void ***, 4) = (void **) M2C_FIELD(arg1, void ***, 4);
    }
    temp_r8 = arg0 + 0x4FC;
    M2C_FIELD(arg1, void ***, 4) = NULL;
    M2C_FIELD(arg1, void **, 0) = NULL;
    M2C_FIELD(temp_r11, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r11, s32 *, 0xC) - 1);
    temp_r0 = M2C_FIELD(arg0, void **, 0x4FC);
    if (temp_r0 == NULL) {
        M2C_FIELD(temp_r8, void **, 4) = arg1;
        M2C_FIELD(arg0, void **, 0x4FC) = arg1;
        M2C_FIELD(arg1, void **, 0) = NULL;
        M2C_FIELD(arg1, void ***, 4) = NULL;
    } else {
        M2C_FIELD(arg1, void **, 0) = temp_r0;
        M2C_FIELD(arg1, void ***, 4) = NULL;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x4FC), void **, 4) = arg1;
        M2C_FIELD(arg0, void **, 0x4FC) = arg1;
    }
    M2C_FIELD(temp_r8, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r8, s32 *, 0xC) + 1);
}
