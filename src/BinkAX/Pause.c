/* BinkAX__Pause @ 0x802EC348 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
void BinkAX__StopVoices(void *);
void BinkAX__Resume(void *);
s32 BinkAX__Pause(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        if (*(u32 *)((char *)arg0 + 252) == 0) {
            *(u32 *)((char *)arg0 + 252) = 1;
            BinkAX__StopVoices(arg0);
        }
    }
    else {
        if (*(u32 *)((char *)arg0 + 252) == 1) {
            *(u32 *)((char *)arg0 + 252) = arg1;
            BinkAX__Resume(arg0);
        }
    }
    return *(s32 *)((char *)arg0 + 252);
}
