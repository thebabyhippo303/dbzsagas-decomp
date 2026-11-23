/* Avatar__IsEligibleTarget @ 0x8009921C (size: 0xC8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef short s16;
typedef int s32;

extern void *lbl_803DC3C0;

int AIBoss__IsQuickRecoveryBlocked(void *avatar);

int Avatar__IsEligibleTarget(void *self, void *other) {
    int ok;
    int mode;
    void *obj;
    char *vt;

    ok = 1;
    if (*(s32 *)((char *)other + 0x7E4) == *(s32 *)((char *)self + 0x7E4)) {
        mode = *(s32 *)((char *)(*(void **)((char *)lbl_803DC3C0 + 0x238)) + 4);
        if (mode != 17) {
            ok = mode == 19;
        }
    }
    if (AIBoss__IsQuickRecoveryBlocked(other) != 0) {
        ok = 0;
    }
    if (*(s32 *)((char *)other + 0x7E4) == 0 && *(s32 *)((char *)other + 0x2D4) != 0) {
        obj = *(void **)((char *)other + 0xB8C);
        vt = *(char **)((char *)obj + 0x57C);
        if ((*(s32 (**)(void *))(vt + 0x64))((char *)obj + *(s16 *)(vt + 0x60)) != 0
            || *(s32 *)((char *)(*(void **)((char *)lbl_803DC3C0 + 0x238)) + 4) == 20) {
            ok = 0;
        }
    }
    return ok;
}
