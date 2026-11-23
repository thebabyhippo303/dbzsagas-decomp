/* Compress__DeflateBuffer @ 0x802559A8 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
s32 compress2(void *, u32 *, void *, u32, s32);
u32 Compress__DeflateBuffer(void *arg0, void *arg1, u32 arg2, u32 arg3) {
    u32 len;
    len = arg3;
    if (compress2(arg1, &len, arg0, arg2, 9) != 0) {
        return 0;
    }
    return len;
}
