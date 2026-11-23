/* BaseMenu__GetFocus @ 0x80263854 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef void (*FocusFn)(void *, s32);
void *BaseMenu__GetFocus(void *arg0) {
    if (*(s32 *)((char *)arg0 + 144) == 0) {
        void *child = *(void **)((char *)arg0 + 140);
        if (child != NULL) {
            char *vt = *(char **)((char *)arg0 + 16);
            ((FocusFn)*(void **)(vt + 428))((char *)arg0 + *(s16 *)(vt + 424), *(s32 *)((char *)child + 4));
        }
    }
    return *(void **)((char *)arg0 + 144);
}
