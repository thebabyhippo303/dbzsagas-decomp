/* Game__ProcessPendingRestoreForReset @ 0x80023150 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct { char pad[0x18]; int pending; } PendingState;
extern PendingState lbl_803946C4 __attribute__((section(".data")));
extern char *lbl_803DC368;
void SaveGame__PrepareRestoreForReset(void *);
void Game__PreparePendingSaveRestore(void) {
    PendingState *s = &lbl_803946C4;
    if (s->pending != 0) {
        SaveGame__PrepareRestoreForReset(*(void **)(lbl_803DC368 + 0x5388));
        s->pending = 0;
    }
}
