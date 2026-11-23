/* BinkAX__Resume @ 0x802EBC48 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
void BinkAX__SetVoicesAddr(void *, void *, s32);
void BinkAX__QueueUpload(void *);
void BinkAX__SetVoicesState(void *, s32);
void BinkAX__Resume(void *arg0) {
    void *t;
    void *a;
    u32 m;
    t = arg0;
    a = (char *)t + 120;
    m = *(u32 *)((char *)t + 248);
    BinkAX__SetVoicesAddr(a, *(void **)((char *)t + 112), 0);
    BinkAX__QueueUpload(t);
    if (m != 2) return;
    BinkAX__SetVoicesState(a, 1);
}
