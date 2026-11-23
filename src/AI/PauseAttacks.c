/* AI__PauseAttacks @ 0x800654C4 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AI__PauseAttacks @ 0x800654C4 (0x3C). ProDG -O2. */
void AI__SetAttackSuppressed(void *ai, int suppressed);
void AI__SetState(void *ai, int state);

void AI__PauseAttacks(void *ai) {
    AI__SetAttackSuppressed(ai, 1);
    AI__SetState(ai, 3);
}
