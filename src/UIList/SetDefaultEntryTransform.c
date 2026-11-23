/* UIList__SetDefaultEntryTransform @ 0x80135768 (size: 0x14, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


void UIList__SetDefaultEntryTransform(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    *(volatile f32 *)((char *)arg0 + 0x378) = farg3;
    *(volatile f32 *)((char *)arg0 + 0x36C) = farg0;
    *(volatile f32 *)((char *)arg0 + 0x370) = farg1;
    *(volatile f32 *)((char *)arg0 + 0x374) = farg2;
}
