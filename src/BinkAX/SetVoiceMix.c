/* BinkAX__SetVoiceMix @ 0x802EB3C0 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0

void *memset(void *, int, u32);

void BinkAX__SetVoiceMix(void *obj, u16 a, u16 b, u16 c) {
    u8 *mix = (u8 *)((char *)obj + 330);
    u32 f;
    memset(mix, 0, 36);
    *(u16 *)mix = b;
    *(u16 *)(mix + 4) = c;
    *(u16 *)((char *)obj + 412) = a;
    f = *(u32 *)((char *)obj + 28);
    *(u16 *)((char *)obj + 414) = 0;
    f |= 530;
    *(u16 *)((char *)obj + 324) = 3;
    *(u32 *)((char *)obj + 28) = f;
}
