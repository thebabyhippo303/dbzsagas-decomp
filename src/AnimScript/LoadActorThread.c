/* AnimScript__LoadActorThread @ 0x802ABE70 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
void *AnimScript__LoadThread(void *, s32, void *, s32, s32);
void *AnimScript__LoadActorThread(void *arg0, void *arg1, s32 arg2) {
    void *t = AnimScript__LoadThread(arg0, 3, arg1, 37, 1);
    if (t == NULL) {
        goto done;
    }
    if (arg2 == 0) {
        goto done;
    }
    *(u8 *)((char *)*(void **)((char *)arg0 + 252) + 4) |= 1;
done:
    return t;
}
