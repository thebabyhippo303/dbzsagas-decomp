/* AnimeFaceZoomOut__OnActivate @ 0x800BA344 (size: 0xB0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed short s16;
typedef int s32;
typedef struct { s32 x, y, z; } Vec3;
typedef void (*AnimFn)(void *, s32);
extern void *lbl_803DC3C0;
extern void Camera__DeactivatePlayerControls(void *, Vec3 *, Vec3 *);
extern void *Game__GetPlayerImpl(void *, s32);
extern s32 Game__GetConfiguredPlayerCount(void *);
void AnimeFaceZoomOut__OnActivate(void *self, Vec3 *position, Vec3 *target) {
    Vec3 localPosition = *position;
    Vec3 localTarget = *target;
    s32 index = 0;
    Camera__DeactivatePlayerControls(self, &localPosition, &localTarget);
    while (index < Game__GetConfiguredPlayerCount(lbl_803DC3C0)) {
        void *player = Game__GetPlayerImpl(lbl_803DC3C0, index);
        void *vtable = *(void **)((char *)player + 0x34);
        s16 adjustment = *(s16 *)((char *)vtable + 0x60);
        AnimFn fn = *(AnimFn *)((char *)vtable + 0x64);
        fn((char *)player + adjustment, 1);
        index += 1;
    }
}
