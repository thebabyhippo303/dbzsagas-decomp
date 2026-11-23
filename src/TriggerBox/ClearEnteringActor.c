/* TriggerBox__ClearEnteringActor @ 0x802C7F14 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_80251650(void *, int, void *, void *, void *);
extern M2C_UNK lbl_803B1DDC __attribute__((section(".data")));
extern volatile s32 lbl_803DCF2C __attribute__((section(".sdata")));

void TriggerBox__ClearEnteringActor(void *arg0, void *arg1) {
    s32 value = lbl_803DCF2C;
    M2C_FIELD(arg0, s32 *, 0x374) = 0;
    if (value != 0) {
        fn_80251650(&lbl_803B1DDC, value, NULL, arg1, arg0);
    }
}
