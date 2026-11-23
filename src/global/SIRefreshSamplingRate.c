/* SIRefreshSamplingRate @ 0x80178ACC (size: 0x24, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


s32 SISetSamplingRate(s32);                     /* extern */
extern s32 SamplingRate __attribute__((section(".sbss")));

void SIRefreshSamplingRate(void) {
    SISetSamplingRate(SamplingRate);
}
