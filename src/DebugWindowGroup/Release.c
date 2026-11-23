/* DebugWindowGroup__Release @ 0x802CCB2C (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void DebugWindowGroup__ActivateNext(void);
void DebugWindowGroup__Destroy(void *, s32);
extern s32 lbl_803BEFF4 __attribute__((section(".data")));
extern void *lbl_803DCF38;

void DebugWindowGroup__Release(void *arg0) {
    s32 *list;
    void *head;
    void *temp_r0;

    if (arg0 == NULL) {
        return;
    }
    if (arg0 == lbl_803DCF38) {
        DebugWindowGroup__ActivateNext();
    }
    head = (void *) lbl_803BEFF4;
    list = &lbl_803BEFF4;
    if (head == arg0) {
        lbl_803BEFF4 = (s32) M2C_FIELD(arg0, void **, 0x14);
    } else {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0x14) = (void *) M2C_FIELD(arg0, void **, 0x14);
    }
    if ((void *) M2C_FIELD(list, void **, 4) == arg0) {
        M2C_FIELD(list, void **, 4) = (void *) M2C_FIELD(arg0, void **, 0x10);
    } else {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), void **, 0x10) = (void *) M2C_FIELD(arg0, void **, 0x10);
    }
    temp_r0 = M2C_FIELD(list, void **, 8);
    if (temp_r0 != NULL) {
        if (arg0 != NULL) {
            DebugWindowGroup__Destroy(arg0, 3);
        }
    } else {
        M2C_FIELD(arg0, void **, 0x10) = temp_r0;
        M2C_FIELD(arg0, void **, 0x14) = temp_r0;
    }
    M2C_FIELD(list, s32 *, 0xC) = (s32) (M2C_FIELD(list, s32 *, 0xC) - 1);
}
