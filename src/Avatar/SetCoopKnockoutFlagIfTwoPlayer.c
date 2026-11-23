/* Avatar__SetCoopKnockoutFlagIfTwoPlayer @ 0x800DAF80 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__SetCoopKnockoutFlagIfTwoPlayer @ 0x800DAF80 (0x74). ProDG -O2. */
typedef struct TypeInfo { int id; int mask; } TypeInfo;
typedef struct CoopAvatar {
    int typeBits;
    char pad[0x7E0];
    int coopActive;
} CoopAvatar;

void Avatar__SetCoopKnockoutFlag(void *, int);
int Game__GetConfiguredPlayerCount(void *);
extern TypeInfo lbl_803945E4 __attribute__((section(".data")));
extern void *lbl_803DC3C0;

void Avatar__SetCoopKnockoutFlagIfTwoPlayer(int a0, int a1, int a2, CoopAvatar *avatar) {
    if (avatar != 0
        && (avatar->typeBits & lbl_803945E4.mask) == lbl_803945E4.id
        && avatar->coopActive != 0
        && Game__GetConfiguredPlayerCount(lbl_803DC3C0) == 2) {
        Avatar__SetCoopKnockoutFlag(avatar, 1);
    }
}
