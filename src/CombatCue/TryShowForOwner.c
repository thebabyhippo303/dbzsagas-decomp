/* CombatCue__TryShowForOwner @ 0x8013358C (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

typedef struct {
    void **items;
    s32 count;
} CueList;

extern CueList lbl_803944BC __attribute__((section(".data")));
void CombatCue__ShowRandomLabel(void *cue, void *arg0, void *arg1);

void CombatCue__TryShowForOwner(void *owner, void *arg0, void *arg1) {
    s32 i;
    for (i = 0; i < lbl_803944BC.count; i++) {
        void *cue = *(void **)((char *)lbl_803944BC.items + (i << 2));
        if (*(void **)((char *)cue + 144) == owner) {
            CombatCue__ShowRandomLabel(cue, arg0, arg1);
        }
    }
}
