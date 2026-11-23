/* Avatar__IsValidTargetCandidateImpl @ 0x800E4A20 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[0x544];
    int kind;
    char mid[0x838 - 0x548];
    int id;
} TargetCandidate;

extern int lbl_803DC5E8 __attribute__((section(".sdata")));

int Avatar__IsValidTargetCandidateImpl(void *unused0, void *unused1, TargetCandidate *target) {
    if (target->kind == 4) {
        return target->id == lbl_803DC5E8;
    }
    return 1;
}
