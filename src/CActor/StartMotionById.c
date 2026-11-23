/* CActor__StartMotionById @ 0x801DCC7C (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * AnimationTable__GetById(void *, int);
void fn_802004AC(void *, void *, void *, int, int, int, int);
void CActor__StartMotionById(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    void *temp_r30;

    temp_r30 = M2C_FIELD(arg0, void **, 0x84);
    fn_802004AC(arg0, temp_r30, AnimationTable__GetById(M2C_FIELD(temp_r30, void **, 0x168), arg1), arg2, arg3, arg4, arg5);
}
