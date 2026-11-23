/* TriggerBox__OnExit @ 0x800FD974 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void TriggerBox__ClearEnteringActor(void *, void *);
s32 TriggerBox__GetExitEventId(void *);
void fn_80251510(void *, int, void *, void *, int);
extern M2C_UNK lbl_803B1DDC __attribute__((section(".data")));

void TriggerBox__OnExit(void *arg0, void *arg1) {
    s32 temp_r9;

    temp_r9 = M2C_FIELD(arg0, s32 *, 0x550) - 1;
    M2C_FIELD(arg0, s32 *, 0x550) = temp_r9;
    if (temp_r9 <= 0) {
        if ((M2C_FIELD(arg0, s32 *, 0x554) & 4) && (TriggerBox__GetExitEventId(arg0) != 0)) {
            fn_80251510(&lbl_803B1DDC, TriggerBox__GetExitEventId(arg0), NULL, arg1, (s32) (arg0 + 0x19C));
        }
        M2C_FIELD(arg0, s32 *, 0x550) = 0;
    }
    TriggerBox__ClearEnteringActor(arg0, arg1);
}

