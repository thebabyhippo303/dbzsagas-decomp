/* Avatar__RequestStandardRoam @ 0x80024B8C (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__RequestStandardRoam @ 0x80024B8C (0x3C). ProDG -O2. */
extern void *lbl_803D8060;
extern void *Game__GetPlayerImpl(void *game, int index);
extern void Avatar__RequestStandardRoamImpl(void *avatar);

void Avatar__RequestStandardRoam(void) {
    void *player = Game__GetPlayerImpl(lbl_803D8060, 0);
    if (*(int *)((char *)player + 0x71C) == 5)
        Avatar__RequestStandardRoamImpl(*(void **)((char *)player + 0x7FC));
}
