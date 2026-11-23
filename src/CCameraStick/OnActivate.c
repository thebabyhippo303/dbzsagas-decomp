/* CCameraStick__OnActivate @ 0x800CD5D4 (size: 0xB0, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: CCameraStick__Activate @ 0x800CD5D4 (0xB0). ProDG -O2. */
typedef struct {
    int x;
    int y;
    int z;
} Vec3i;

typedef struct {
    /* 0x00 */ Vec3i a;
    /* 0x0C */ Vec3i b;
    /* 0x18 */ char pad[0x6C];
    /* 0x84 */ float f84;
    /* 0x88 */ void *blockers;
} CCameraStick;

typedef struct {
    char pad[0xC4];
    int flagC4;
} CameraBag;

extern CameraBag *lbl_803DC5B4;
extern char lbl_8031F7DC[];
extern int lbl_803DC3C0;

extern int CameraBag__IsCurrentNamed(CameraBag *bag, char *name);
extern void *CameraBag__GetCurrent(CameraBag *bag);
extern void CameraCollisionBlockers__SetProtagonistCast(void *blockers);
extern void SimLoop__ActivateControls(int ctx, int enable);

void CCameraStick__Activate(CCameraStick *self, Vec3i *pos, Vec3i *aim) {
    void *cam;

    self->a = *pos;
    self->b = *aim;
    if (CameraBag__IsCurrentNamed(lbl_803DC5B4, lbl_8031F7DC) != 0) {
        cam = CameraBag__GetCurrent(lbl_803DC5B4);
        self->f84 = *(float *)((char *)cam + 0x84);
    }
    if (self->blockers != 0) {
        CameraCollisionBlockers__SetProtagonistCast(self->blockers);
    }
    if (lbl_803DC5B4->flagC4 == 0) {
        SimLoop__ActivateControls(lbl_803DC3C0, 1);
    }
}
