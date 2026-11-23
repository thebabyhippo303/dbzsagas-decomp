/* RenderNode__ScaleBounds @ 0x8029F7DC (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef void (*UpdateFn)(void *);
void RenderNode__ScaleBounds(void *arg0, void *arg1, f32 farg0) {
    register void *dst;
    void *vt;
    dst = arg1;
    *(f32 *)((char *)dst + 92) = *(f32 *)((char *)arg0 + 16) * farg0;
    vt = *(void **)arg0;
    ((UpdateFn)*(void **)((char *)vt + 36))((char *)arg0 + *(s16 *)((char *)vt + 32));
}
