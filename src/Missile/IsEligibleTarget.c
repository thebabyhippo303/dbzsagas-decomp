/* Missile__IsEligibleTarget @ 0x800D952C (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Missile__IsEligibleTarget @ 0x800D952C (0x80). ProDG -O2. */
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

extern int lbl_803945E4[] __attribute__((section(".data")));
extern int Avatar__IsEligibleTarget(void *avatar);

int Missile__IsEligibleTarget(void *unused, void *target, void *missile) {
    void *owner = M2C_FIELD(missile, void **, 876);

    if (target == owner) {
        return 0;
    }
    if ((*(int *)target & lbl_803945E4[1]) != lbl_803945E4[0]) {
        return 0;
    }
    if ((*(int *)owner & lbl_803945E4[1]) != (*(int *)target & lbl_803945E4[1])) {
        return 0;
    }
    if (M2C_FIELD(owner, void **, 700) == target) {
        return 2;
    }
    if (Avatar__IsEligibleTarget(owner) != 0) {
        return 1;
    }
    return 0;
}
