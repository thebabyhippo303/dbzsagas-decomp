/* AIBoss__IsQuickRecoveryBlocked @ 0x80099B30 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AIBoss__IsQuickRecoveryBlocked @ 0x80099B30 (0x40). ProDG -O2. */
extern float lbl_8031FB44 __attribute__((section(".data")));
extern void *lbl_803DC654;

typedef struct AIBossQuick {
    char pad[0x288];
    float recovery;
} AIBossQuick;

int AIBoss__IsQuickRecoveryBlocked(AIBossQuick *self) {
    int id;

    if (!(self->recovery > lbl_8031FB44)) {
        return 1;
    }
    id = *(int *)((char *)lbl_803DC654 + 0x2F28);
    if (id != 0 && id != (int)self) {
        return 1;
    }
    return 0;
}
