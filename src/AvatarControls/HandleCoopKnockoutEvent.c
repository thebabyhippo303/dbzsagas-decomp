/* AvatarControls__HandleCoopKnockoutEvent @ 0x800B9368 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Actor__ToProtagonistCastImpl(void *);
void Avatar__ResetCoopKnockoutState(void *);
void Avatar__SetCoopKnockoutFlag(void *, int);
void AvatarControls__HandleCoopKnockoutEvent(void *arg0, s32 arg1) {
    if (arg1 == 0x10105) {
        Avatar__ResetCoopKnockoutState(M2C_FIELD(arg0, void **, 0x7C));
        Avatar__SetCoopKnockoutFlag(M2C_FIELD(arg0, void **, 0), 0);
        Actor__ToProtagonistCastImpl(M2C_FIELD(arg0, void **, 0));
    }
}
