/* CollPart__DestroyRowTable @ 0x80280EE8 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
extern char lbl_80350390[];
extern char lbl_80350410[];
void CollPart__FreeRows(void *);
void CollPart__DestroyBase(void *, s32);
void TableFile__Destroy(void *, u32);
void CollPart__DestroyRowTable(void *arg0, u32 arg1) {
    *(void **)((char *)arg0 + 12) = lbl_80350390;
    *(void **)((char *)arg0 + 8) = lbl_80350410;
    CollPart__FreeRows(arg0);
    CollPart__DestroyBase((char *)arg0 + 12, 0);
    TableFile__Destroy(arg0, arg1);
}
