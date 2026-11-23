/* AI__AdvanceRangeGatedAction11Sequence @ 0x80064D5C (size: 0x128, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned char u8;
typedef float f32;

void AI__SetState(void *, s32);
s32 AI__HasPrimaryTimerElapsed(void *, f32);
void AI__ComputeTargetingInfo(void *, void *);
void *Game__FindNearestEligibleAvatar(void *);
extern f32 lbl_8031E7E0 __attribute__((section(".data")));
extern f32 lbl_8031E7E4 __attribute__((section(".data")));
extern f32 lbl_803A35C0 __attribute__((section(".data")));

void AI__AdvanceRangeGatedAction11Sequence(char *self) {
    u8 info[0x20];
    s32 state;
    void *avatar;
    f32 limit;

    state = *(s32 *)(self + 0x7C);
    switch (state) {
    case 0:
        AI__ComputeTargetingInfo(info, self);
        *(s32 *)(self + 0x558) = 1;
        AI__SetState(self, 1);
        limit = lbl_8031E7E0;
        *(s32 *)(self + 0x380) = 0x2D;
        if (!(*(f32 *)(info + 0x18) <= limit)) {
            AI__SetState(self, 3);
            *(s32 *)(self + 0x558) = state;
        }
        break;
    case 1:
        AI__SetState(self, 2);
        *(s32 *)(self + 0x380) = 0xB;
        *(f32 *)(self + 0xDC) = lbl_803A35C0;
        break;
    case 2:
        if (AI__HasPrimaryTimerElapsed(self, lbl_8031E7E4) != 0) {
            avatar = Game__FindNearestEligibleAvatar(*(void **)(self + 0x390));
            if (avatar != 0) {
                if (*(s32 *)((char *)avatar + 0x71C) != 4) {
                    *(s32 *)(self + 0x380) = 0x2D;
                    AI__SetState(self, 3);
                    *(s32 *)(self + 0x558) = 0;
                }
            } else {
                *(s32 *)(self + 0x380) = 0x2D;
                AI__SetState(self, 3);
                *(void **)(self + 0x558) = avatar;
            }
        }
        break;
    }
}
