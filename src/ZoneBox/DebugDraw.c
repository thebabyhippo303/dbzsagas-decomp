/* ZoneBox__DebugDraw @ 0x8025EBB0 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
void OrientedBox__DebugDraw(void *, s32);
void ZoneBox__DebugDraw(void *arg0) {
    if (((void *(*)(void *))*(void **)(*(char **)((char *)arg0 + 4) + 44))((char *)arg0 + *(s16 *)(*(char **)((char *)arg0 + 4) + 40)) != NULL) {
        OrientedBox__DebugDraw((char *)arg0 + 8, 0);
    }
    else {
        OrientedBox__DebugDraw((char *)arg0 + 8, 2);
    }
}
