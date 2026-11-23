/* Avatar__UpdateWeaponScriptFlag @ 0x8009E420 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__UpdateWeaponScriptFlag @ 0x8009E420 (0x44). ProDG -O2. */
typedef struct {
    char pad[0x358];
    int weapon_script_flag;
    char pad2[0x364 - 0x358 - 4];
    void *script_value;
} AvatarWeaponFlag;

extern int Avatar__PopScriptInt(void *value);

void Avatar__UpdateWeaponScriptFlag(AvatarWeaponFlag *self) {
    self->weapon_script_flag = Avatar__PopScriptInt(self->script_value) != 0;
}
