/* Missile__UpdateHomingAndTrailEffects @ 0x800D9B64 (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Missile__UpdateHomingAndTrailEffects @ 0x800D9B64 (0xA0). ProDG -O2. */
extern int lbl_803945E4[] __attribute__((section(".data")));
extern float lbl_8032299C __attribute__((section(".data")));
extern float lbl_803229A0 __attribute__((section(".data")));
extern void Missile__UpdateHomingTrajectory(void *missile, float a, float b);
extern void Missile__UpdateTrailEffects(void *missile, void *trail);

void Missile__UpdateHomingAndTrailEffects(char *self) {
    void *obj;
    char *trail;
    int homing;

    obj = *(void **)(self + 0x36C);
    trail = *(char **)(self + 0x364) + 0x5C;
    if (obj != 0 && (*(int *)obj & lbl_803945E4[1]) == lbl_803945E4[0]) {
        int *sub;

        sub = *(int **)((char *)obj + 0x159C);
        homing = 0;
        if (sub[0xF9C / 4] != 0) {
            homing = 1;
        }
        if (homing != 0) {
            Missile__UpdateHomingTrajectory(self, lbl_8032299C, lbl_803229A0);
        }
    }
    Missile__UpdateTrailEffects(self, trail);
}
