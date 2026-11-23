/* Avatar__PauseAllButMe @ 0x8003C66C (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__PauseAllButMe @ 0x8003C66C (0x74). ProDG -O2. */
extern int Script__PopInt(void *script, void *context);
extern void Avatar__UpdatePauseAllButMe(void *avatar, int mode);

void Avatar__PauseAllButMe(void *script, void *context) {
    void *avatar = (void *)Script__PopInt(script, context);
    int flag = Script__PopInt(script, context);
    int mode = 1;
    if (flag == 0)
        mode = 0;
    if (*(int *)((char *)avatar + 2020) != 0)
        Avatar__UpdatePauseAllButMe(avatar, mode);
    else
        Avatar__UpdatePauseAllButMe(avatar, 0);
}
