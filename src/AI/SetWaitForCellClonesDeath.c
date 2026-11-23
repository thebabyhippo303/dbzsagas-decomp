/* AI__SetWaitForCellClonesDeath @ 0x80070350 (size: 0x8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AI__SetWaitForCellClonesDeath @ 0x80070350 (0x8). ProDG -O2. */
typedef struct {
    char pad[0x56C];
    int wait_for_death;
} AIState;

void AI__SetWaitForCellClonesDeath(AIState *ai, int wait) {
    ai->wait_for_death = wait;
}
