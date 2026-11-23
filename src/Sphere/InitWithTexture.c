/* Sphere__InitWithTexture @ 0x8026B998 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef void (*InitFn)(void *);
void Sphere__InitWithTexture(void *arg0) {
    char *t = *(char **)((char *)arg0 + 412);
    InitFn fn = *(InitFn *)(t + 108);
    fn((char *)arg0 + *(s16 *)(t + 104));
    t = *(char **)((char *)arg0 + 412);
    fn = *(InitFn *)(t + 812);
    fn((char *)arg0 + *(s16 *)(t + 808));
}
