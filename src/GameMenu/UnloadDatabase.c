/* GameMenu__UnloadDatabase @ 0x80263BB8 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 Remove(void *, s32);

s32 GameMenu__UnloadDatabase(void *arg0) {
    void *b;

    if (M2C_FIELD(arg0, s32 *, 1108) == M2C_FIELD(arg0, s32 *, 1112)) {
        M2C_FIELD(arg0, s32 *, 1108) = 0;
    }
    b = *(void * volatile *)((char *)arg0 + 1112);
    if (b != NULL) {
        Remove(b, 0);
    }
    M2C_FIELD(arg0, s32 *, 1112) = 0;
    return 0;
}
