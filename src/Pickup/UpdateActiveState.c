/* Pickup__UpdateActiveState @ 0x800F1B90 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
void Simple__ApplyStateFlags(void *);
void Mover__UpdateEnabledState(void *);
void Pickup__UpdateActiveState(void *arg0) {
    if (*(s32 *)((char *)arg0 + 1568) == 0) {
        if (*(s32 *)((char *)arg0 + 1584) == 0) {
            goto mover;
        }
    }
    if (*(s32 *)((char *)arg0 + 596) != 0) {
        goto mover;
    }
    *(s32 *)((char *)arg0 + 600) = 1;
    Simple__ApplyStateFlags(arg0);
    return;
mover:
    Mover__UpdateEnabledState(arg0);
}
