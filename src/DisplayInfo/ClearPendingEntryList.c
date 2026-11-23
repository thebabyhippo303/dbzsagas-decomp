/* DisplayInfo__ClearPendingEntryList @ 0x8000B834 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_801843CC(void *);
void DisplayInfo__ClearPendingEntryList(void *arg0) {
    void *temp_r30;
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0xB09C);
    temp_r30 = arg0 + 0xB09C;
    if (temp_r3 != NULL) {
        fn_801843CC(temp_r3);
    }
    M2C_FIELD(temp_r30, s32 *, 4) = 0;
    M2C_FIELD(temp_r30, s32 *, 8) = 0;
    M2C_FIELD(arg0, void **, 0xB09C) = NULL;
}
