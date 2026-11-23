/* BinkAX__DeinterleaveStereo16 @ 0x802EB95C (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
void BinkAX__DeinterleaveStereo16(u32 *in, u32 *outL, u32 *outR, u32 n) {
    u32 i;
    u32 cnt;
    cnt = n >> 2;
    for (i = 0; i < cnt; i++) {
        u32 a = in[0];
        u32 b = in[1];
        in += 2;
        *outL++ = (b >> 16) | (a & 0xFFFF0000);
        *outR++ = (b & 0xFFFF) | (a << 16);
    }
    if ((n & 3) != 0) {
        u32 w = *in;
        *(u16 *)outL = (u16)(w >> 16);
        *(u16 *)outR = (u16)w;
    }
}
