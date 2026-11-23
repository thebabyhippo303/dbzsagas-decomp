/* Sphere__FreeDropShadowHandles @ 0x8026F504 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
void Mem__Delete(void *);
int EffectHandle__Release(unsigned handle);
typedef struct { u8 pad[372]; u32 *handles; s32 count; } SphereH;
void Sphere__FreeDropShadowHandles(SphereH *arg0) {
    s32 i;
    if (arg0->handles != NULL) {
        for (i = 0; i < arg0->count; i++) {
            u32 h = arg0->handles[i];
            if (h != 0) {
                EffectHandle__Release(h);
            }
            arg0->handles[i] = 0;
        }
        Mem__Delete(arg0->handles);
        arg0->handles = NULL;
        arg0->count = 0;
    }
}
