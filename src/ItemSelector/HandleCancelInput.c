/* ItemSelector__HandleCancelInput @ 0x80266330 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
void Callback__InvokeFunctionWithArg(void *, s32);
s32 ItemSelector__HandleCancelInput(void *arg0) {
    void *fn = *(void **)((char *)arg0 + 27500);
    if (fn != NULL) {
        Callback__InvokeFunctionWithArg(fn, 0x80000002);
    }
}
