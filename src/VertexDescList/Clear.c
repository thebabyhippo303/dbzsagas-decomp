/* VertexDescList__Clear @ 0x80250AF4 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef struct { u32 a; u32 b; } VDescEntry;
typedef struct { VDescEntry entries[27]; s32 count; } VertexDescList;
void VertexDescList__Clear(VertexDescList *arg0) {
    s32 i;
    for (i = 0; i < 27; i++) {
        arg0->entries[i].a = 255;
        arg0->entries[i].b = 0;
    }
    arg0->count = 0;
}
