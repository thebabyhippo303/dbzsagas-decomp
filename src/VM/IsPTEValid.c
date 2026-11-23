/* VM__IsPTEValid @ 0x802EA7BC (size: 0x28, .text, MWCC GC/2.0 (Dolphin SDK VM)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
void *VM__GetPTEGAddress(u32);
u32 VM__IsPTEValid(u32 arg0) {
    return *(u32 *)VM__GetPTEGAddress(arg0) >> 31;
}
