/* XZQuery__BeginQuery @ 0x8025E354 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
extern u32 lbl_803DE570 __attribute__((section(".sdata2")));
void XZQuery__BeginQuery(void *arg0) {
    char *p = (char *)arg0 + 224;
    u32 t;
    t = *(u32 *)(p + 28) & lbl_803DE570;
    *(s32 *)(p + 48) = 1;
    *(s32 *)(p + 44) = 0;
    switch (t) {
    case 16:
        *(f32 *)(p + 40) = *(f32 *)(p + 36);
        break;
    case 32:
        *(f32 *)(p + 40) = *(f32 *)(p + 32);
        break;
    }
}
