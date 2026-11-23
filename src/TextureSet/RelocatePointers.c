/* TextureSet__RelocatePointers @ 0x80246F64 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
void TextureSet__RelocatePointers(void *, u32);
void TextureSet__RelocatePointers(void *arg0, u32 arg1) {
    void *child;
    if (*(u32 *)((char *)arg0 + 12) != 0) {
        *(u32 *)((char *)arg0 + 12) = arg1 + *(u32 *)((char *)arg0 + 12);
    }
    if (*(u32 *)((char *)arg0 + 28) != 0) {
        *(u32 *)((char *)arg0 + 28) = arg1 + *(u32 *)((char *)arg0 + 28);
    }
    if (*(u32 *)((char *)arg0 + 4) == 0) return;
    child = (void *)(arg1 + *(u32 *)((char *)arg0 + 4));
    *(void **) ((char *)arg0 + 4) = child;
    TextureSet__RelocatePointers(child, arg1);
}
