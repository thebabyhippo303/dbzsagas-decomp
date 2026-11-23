/* Avatar__AdjustComboMoves @ 0x8003422C (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__AdjustComboMoves @ 0x8003422C (0x4C). ProDG -O2. */
extern int Script__PopInt(void *script, void *context);

void Avatar__AdjustComboMoves(void *script, void *context) {
    int *avatar = (int *)Script__PopInt(script, context);
    int delta = Script__PopInt(script, context);
    avatar[408] += delta;
}
