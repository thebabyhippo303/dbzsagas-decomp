/* Game__StopFullScreenEffect @ 0x8003338C (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Game__StopFullScreenEffect @ 0x8003338C (0x2C). ProDG -O2. */
void *fn_8023A310(void *a, void *b);
extern void *lbl_803DC5E4;
void fn_800E1784(void *g, void *avatar);

void Game__StopFullScreenEffect(void *a, void *b) {
    void *avatar = fn_8023A310(a, b);
    fn_800E1784(lbl_803DC5E4, avatar);
}
