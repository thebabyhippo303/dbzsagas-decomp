/* TuningTable__Destroy @ 0x802542E4 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
extern char lbl_803485C8[];
void Mem__DeleteArray(void *);
void EventListener__Destroy(void *, s32);
void TuningTable__Destroy(void *arg0, s32 arg1) {
    void *p = *(void **)((char *)arg0 + 28);
    *(void **)((char *)arg0 + 24) = lbl_803485C8;
    if (p != NULL) {
        Mem__DeleteArray(p);
    }
    EventListener__Destroy(arg0, arg1);
}
