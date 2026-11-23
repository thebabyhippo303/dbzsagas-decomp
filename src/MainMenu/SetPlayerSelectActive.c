/* MainMenu__SetPlayerSelectActive @ 0x80012018 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MainMenu__SetPlayerSelectActive @ 0x80012018 (0x3C). ProDG -O2. */
extern void MainMenu__SetPlayerSelectState(void *self, int state);

void MainMenu__SetPlayerSelectActive(void *self, int active) {
    *(int *)((char *)self + 3476) = active;
    if (active != 0)
        MainMenu__SetPlayerSelectState(self, 5);
    else
        MainMenu__SetPlayerSelectState(self, 0);
}
