/* MIXReleaseChannel @ 0x802D6DA4 (size: 0x20, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
extern char lbl_803D89C0[] __attribute__((section(".data")));
void MIXReleaseChannel(void *arg0)
{
    register s32 idx = *(s32 *)((char *)arg0 + 24);

    *(s32 *)(lbl_803D89C0 + idx * 96) = 0;
}
