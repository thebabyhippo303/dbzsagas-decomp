/* Fighter__GetWeaponAttachmentBonePositionImpl @ 0x800F01D8 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Fighter__GetWeaponAttachmentBonePositionImpl @ 0x800F01D8 (0x54). ProDG -O2. */
extern void *WeaponInventory__GetSelected(void *inventory, int which);
extern void Weapon__GetAttachmentBonePosition(void *out, void *weapon, void *fighter, int bone, int flags);

void *Fighter__GetWeaponAttachmentBonePositionImpl(void *out, char *fighter) {
    void *weapon = WeaponInventory__GetSelected(fighter + 0x5E8, 1);
    Weapon__GetAttachmentBonePosition(out, weapon, fighter, *(int *)(fighter + 0x760), 0);
    return out;
}
