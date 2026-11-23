/* Avatar__SetCoopPlayerPositions @ 0x800B9134 (size: 0xD0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3i;

extern void *Game__GetPlayerImpl(void *game, int index);
extern void Avatar__SetPositionImpl(void *avatar, void *pos, f32 yaw);
extern f32 lbl_80321574 __attribute__((section(".data")));
extern void *lbl_803DC3C0;

void Avatar__SetCoopPlayerPositions(void **self) {
    Vec3i pos;
    void *obj;
    f32 yaw;
    void *player0;
    void *player1;

    obj = *self;
    pos = *(Vec3i *)((char *)obj + 0x38);
    yaw = *(f32 *)((char *)obj + 0x75C);
    player0 = Game__GetPlayerImpl(lbl_803DC3C0, 0);
    player1 = Game__GetPlayerImpl(lbl_803DC3C0, 1);
    if (player0 == *self) {
        Avatar__SetPositionImpl(player1, &pos, yaw);
        Avatar__SetPositionImpl(*self, (char *)lbl_803DC3C0 + 0x74, lbl_80321574);
        return;
    }
    Avatar__SetPositionImpl(player0, &pos, yaw);
    Avatar__SetPositionImpl(*self, (char *)lbl_803DC3C0 + 0x80, lbl_80321574);
}
