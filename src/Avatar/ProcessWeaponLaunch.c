/* Avatar__ProcessWeaponLaunch @ 0x8009E268 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__ProcessWeaponLaunch @ 0x8009E268 (0xBC). ProDG -O2. */
typedef void (*WeaponLaunchFn)(void *self, void *a, int b, int c, void *d, short e, void *f, int g, int h, float x);

extern void *WeaponInventory__GetSelected(void *inventory, int slot);
extern float lbl_803A35BC __attribute__((section(".data")));
extern float lbl_8031FED8 __attribute__((section(".data")));
extern float lbl_8031FEDC __attribute__((section(".data")));

void Avatar__ProcessWeaponLaunch(void *arg0) {
    char *self = arg0;
    char *weapon;
    char *vtbl;

    weapon = WeaponInventory__GetSelected(self + 0x50, 1);
    if (weapon != 0) {
        vtbl = *(char **)(weapon + 0x64);
        ((WeaponLaunchFn)(*(void **)(vtbl + 0x14)))(weapon + *(short *)(vtbl + 0x10),
            *(void **)(self + 0x364), *(int *)(self + 0x334), *(int *)(self + 0x358),
            self + 0x338, (short)(lbl_803A35BC * lbl_8031FED8), self + 0x354, 0, 0,
            *(float *)(self + 0x348));
        if (*(int *)(self + 0x354) != 0) {
            *(float *)(*(char **)(self + 0x364) + 0x18E8) = lbl_8031FEDC;
            *(int *)(self + 0x354) = 0;
        }
    }
}
