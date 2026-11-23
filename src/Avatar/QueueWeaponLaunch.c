/* Avatar__QueueWeaponLaunch @ 0x8009E324 (size: 0xC, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__QueueWeaponLaunch @ 0x8009E324 (0xC). ProDG -O2. */
typedef struct {
    char pad[0x354];
    int queued;
} AvatarWeaponState;

void Avatar__QueueWeaponLaunch(AvatarWeaponState *avatar) {
    avatar->queued = 1;
}
