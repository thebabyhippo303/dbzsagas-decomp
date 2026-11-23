/* AIActionPattern__Destroy @ 0x80072D8C (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_801843CC(void *);
void fn_80184430(char *);
void AIActionPattern__Destroy(s8 **arg0, s32 arg1) {
    s8 *temp_r3;

    temp_r3 = *arg0;
    if (temp_r3 != NULL) {
        fn_80184430(temp_r3);
    }
    if (arg1 & 1) {
        fn_801843CC(arg0);
    }
}
