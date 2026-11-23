/* CCameraStick__UpdateCameraCollision @ 0x800CDA34 (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
typedef int s32;

typedef struct {
    char pad[0x88];
    void *blockers;
} CCameraStick;

extern void *lbl_803DC3C0;
extern f32 lbl_80321C70 __attribute__((section(".rodata")));

int Game__GetConfiguredPlayerCount(void *);
void *Game__GetPlayerImpl(void *, int);
void CameraCollisionBlockers__ResolveCameraCollision(void *blockers, f32 dt);

void CCameraStick__UpdateCameraCollision(CCameraStick *self, f32 dt) {
    void *player0;
    void *player1;

    if (Game__GetConfiguredPlayerCount(lbl_803DC3C0) != 2) {
        return;
    }
    player0 = Game__GetPlayerImpl(lbl_803DC3C0, 0);
    player1 = Game__GetPlayerImpl(lbl_803DC3C0, 1);
    if (*(f32 *)((char *)player0 + 0x288) <= lbl_80321C70) {
        goto check1;
    }
    if (*(s32 *)((char *)player0 + 0x670) == 0) {
        goto body;
    }
check1:
    if (*(f32 *)((char *)player1 + 0x288) <= lbl_80321C70) {
        return;
    }
    if (*(s32 *)((char *)player1 + 0x670) != 0) {
        return;
    }
body:
    if (self->blockers != 0) {
        CameraCollisionBlockers__ResolveCameraCollision(self->blockers, dt);
    }
}
