/* DebugMenu__AddS8Item @ 0x80265450 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef void (*AddS8Fn)(void *, s32, s32);
void *BaseMenu__AddItem(void *, s32);
void *DebugMenu__AddS8Item(void *arg0, s32 arg1, s32 arg2) {
    void *item = BaseMenu__AddItem(arg0, arg1);
    if (item != NULL) {
        char *vt = *(char **)((char *)item + 16);
        AddS8Fn fn = *(AddS8Fn *)(vt + 620);
        fn((char *)item + *(s16 *)(vt + 616), 1, arg2);
    }
    return item;
}
