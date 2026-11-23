/* TuningTable__Construct @ 0x8025429C (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
extern char lbl_803485C8[];
void EventListener__Construct(void *);
void *TuningTable__Construct(void *arg0) {
    EventListener__Construct(arg0);
    *(u32 *)((char *)arg0 + 32) = 0;
    *(void **)((char *)arg0 + 24) = lbl_803485C8;
    *(u32 *)((char *)arg0 + 28) = 0;
    return arg0;
}
