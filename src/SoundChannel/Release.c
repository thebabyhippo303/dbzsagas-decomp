/* SoundChannel__Release @ 0x80197140 (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void SoundChannel__Destroy(void *, s32);
void SoundChannel__Release(void *arg0, void *arg1) {
    void *temp_r0;
    void *temp_r31;

    temp_r31 = arg0 + 0x54;
    if ((void *) M2C_FIELD(arg0, void **, 0x54) == arg1) {
        M2C_FIELD(arg0, void **, 0x54) = (void *) M2C_FIELD(arg1, void **, 0x2C);
    } else {
        M2C_FIELD(M2C_FIELD(arg1, void **, 0x28), void **, 0x2C) = (void *) M2C_FIELD(arg1, void **, 0x2C);
    }
    if ((void *) M2C_FIELD(temp_r31, void **, 4) == arg1) {
        M2C_FIELD(temp_r31, void **, 4) = (void *) M2C_FIELD(arg1, void **, 0x28);
    } else {
        M2C_FIELD(M2C_FIELD(arg1, void **, 0x2C), void **, 0x28) = (void *) M2C_FIELD(arg1, void **, 0x28);
    }
    temp_r0 = M2C_FIELD(temp_r31, void **, 8);
    if (temp_r0 != NULL) {
        if (arg1 != NULL) {
            SoundChannel__Destroy(arg1, 3);
        }
    } else {
        M2C_FIELD(arg1, void **, 0x28) = temp_r0;
        M2C_FIELD(arg1, void **, 0x2C) = temp_r0;
    }
    M2C_FIELD(temp_r31, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r31, s32 *, 0xC) - 1);
}
