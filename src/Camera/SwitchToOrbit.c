/* Camera__SwitchToOrbit @ 0x8002D18C (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Camera__SwitchToOrbit @ 0x8002D18C (0x74). ProDG -O2. */
typedef struct OrbitOps {
    char pad[64];
    signed short offset;
    char pad42[2];
    void (*fn)(void *self, void *actor, float value);
} OrbitOps;

extern void *Script__PopInt(void *script, void *context);
extern void *CameraBag__SetTop(void *bag, char *name);
extern void SimLoop__ActivateControls(int loop, int flag);
extern void *lbl_803DC5B4 __attribute__((section(".sdata")));
extern int lbl_803DC3C0 __attribute__((section(".sdata")));
extern char lbl_8031165C[] __attribute__((section(".data")));
extern float lbl_80311668 __attribute__((section(".data")));

void Camera__SwitchToOrbit(void *script, void *context) {
    void *actor = Script__PopInt(script, context);
    void *camera = CameraBag__SetTop(lbl_803DC5B4, lbl_8031165C);

    if (camera != 0) {
        OrbitOps *ops = *(OrbitOps **)((char *)camera + 60);

        ops->fn((char *)camera + ops->offset, actor, lbl_80311668);
        SimLoop__ActivateControls(lbl_803DC3C0, 0);
    }
}
