/* Avatar__MeleeWarnAI @ 0x8003FD14 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__MeleeWarnAI @ 0x8003FD14 (0x70). ProDG -O2. */
typedef int s32;

extern void *Script__PopInt(void *script, void *context);
extern void *Game__FindNearestEligibleAvatar(void *actor);
extern s32 lbl_803945E4[] __attribute__((section(".data")));

void Avatar__MeleeWarnAI(void *script, void *context) {
    char *avatar = Game__FindNearestEligibleAvatar(Script__PopInt(script, context));

    if (avatar != 0 && (*(s32 *)avatar & lbl_803945E4[1]) == lbl_803945E4[0] && *(s32 *)(avatar + 0x7E4) == 0) {
        char *state = *(char **)(avatar + 0xB8C);

        if (*(s32 *)(state + 0xC0) == 0)
            *(s32 *)(state + 0xC0) = 2;
    }
}
