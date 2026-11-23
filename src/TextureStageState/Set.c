/* TextureStageState__Set @ 0x80241BBC (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset))
#define NULL 0
extern char lbl_803B19BC[] __attribute__((section(".data")));
s32 fn_80241798(void *);
s32 TextureStageState__Set(s32 arg0, s32 arg1, s32 arg2) {
    s32 *p = (s32 *)((char *)lbl_803B19BC + arg1 * 12);
    *(s32 *)((char *)p + arg0 * 84) = arg2;
    *(s32 *)((char *)p + arg0 * 84 + 4) = 0;
    fn_80241798((void *)((char *)p + arg0 * 84));
}
