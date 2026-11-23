/* Simple__GetSurfaceType @ 0x802CC4D4 (size: 0x8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Simple__GetSurfaceType @ 0x802CC4D4 (0x8). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

s32 Simple__GetSurfaceType(void *obj) {
    return *(s32 *)((char *)obj + 520);
}
