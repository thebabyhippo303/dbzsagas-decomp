/* Avatar__ResetMoveTowardTargetControl @ 0x800A5754 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
extern f32 lbl_803202F8 __attribute__((section(".data")));
void Avatar__ResetMoveTowardTargetControl(void *arg0) {
    void *t1 = *(void **)((char *)arg0 + 124);
    f32 f = lbl_803202F8;
    void *t2;
    void *t3;
    *(s32 *)((char *)arg0 + 420) = 0;
    *(f32 *)((char *)arg0 + 424) = f;
    *(f32 *)((char *)arg0 + 428) = f;
    *(s32 *)((char *)t1 + 1380) = 5;
    t2 = *(void **)((char *)arg0 + 124);
    *(s32 *)((char *)t2 + 1364) = 3;
    *(f32 *)((char *)t2 + 1376) = f;
    t3 = *(void **)((char *)arg0 + 124);
    *(s32 *)((char *)t3 + 1380) = 0;
    *(f32 *)((char *)t3 + 1384) = f;
}
