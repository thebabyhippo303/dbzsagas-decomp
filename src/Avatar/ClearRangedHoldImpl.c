/* Avatar__ClearRangedHoldImpl @ 0x800A4BC0 (size: 0xC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[0x190];
    int ranged_hold;
} AvatarRangedHold;

void Avatar__ClearRangedHoldImpl(AvatarRangedHold *avatar) {
    avatar->ranged_hold = 0;
}
