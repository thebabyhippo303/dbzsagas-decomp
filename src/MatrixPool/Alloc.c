/* MatrixPool__Alloc @ 0x8021B02C (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
extern char lbl_803ADCF0[];
extern char lbl_803ADCFC[];
void *SList__PopFront(void *);
void SList__PushFront(void *, void *);
void *MatrixPool__Alloc(void *arg0) {
    void *p = SList__PopFront(lbl_803ADCF0);
    if (p == NULL) {
        return NULL;
    }
    SList__PushFront(lbl_803ADCFC, p);
    *(void **)((char *)p + 8) = arg0;
    return p;
}
