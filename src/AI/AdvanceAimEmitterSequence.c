/* AI__AdvanceAimEmitterSequence @ 0x8006C3A8 (size: 0x10C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32; typedef float f32;
typedef struct Vec3 { f32 x, y, z; } Vec3;
void AI__ComputeTargetingInfo(void *, void *);
void AI__SetState(void *, s32);
void AI__UpdateAimingIndicator(void *, Vec3 *, s32);
s32 AI__HasPrimaryTimerElapsed(void *, f32);
void Avatar__ClearPurpleSpiralEffects(void *);
extern f32 lbl_8031ECF4 __attribute__((section(".data")));
extern f32 lbl_803A35C0 __attribute__((section(".data")));
typedef struct Tgt { char pad[0x38]; Vec3 pos; } Tgt;
void AI__AdvanceAimEmitterSequence(char *self) {
    char info[32];
    AI__ComputeTargetingInfo(info, self);
    switch (*(s32 *)(self + 0x7C)) {
    case 0:
        *(s32 *)(self + 0x380) = 0x2D;
        AI__SetState(self, 1);
        return;
    case 1:
        {
        Vec3 *pos = (Vec3 *)info;
        *pos = ((Tgt *)*(char **)(self + 0x390))->pos;
        AI__UpdateAimingIndicator(self, pos, 0);
        }
        *(s32 *)(self + 0x380) = 0x24;
        AI__SetState(self, 2);
        *(f32 *)(self + 0xDC) = lbl_803A35C0;
        return;
    case 2:
        if (AI__HasPrimaryTimerElapsed(self, lbl_8031ECF4) != 0 && *(s32 *)(self + 0x564) == 0) {
            Avatar__ClearPurpleSpiralEffects(self);
            *(s32 *)(self + 0x380) = 0x2B;
            AI__SetState(self, 3);
        }
        return;
    }
}
