/* Destroy__ProtectMeter @ 0x80043C44 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void ProtectMeter__DestroyDisplayWidgets(void *);
void ProtectMeter__DestroyWidgets(void *);
void ProtectMeter__Destroy(void *, s32);
extern void *lbl_803DC6B4;

void Destroy__ProtectMeter(void) {
    if ((void *) lbl_803DC6B4 != NULL) {
        ProtectMeter__DestroyDisplayWidgets(lbl_803DC6B4);
        ProtectMeter__DestroyWidgets(lbl_803DC6B4);
        if ((void *) lbl_803DC6B4 != NULL) {
            ProtectMeter__Destroy(lbl_803DC6B4, 3);
        }
        lbl_803DC6B4 = NULL;
    }
}

