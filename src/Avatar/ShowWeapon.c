/* Avatar__ShowWeapon @ 0x80026808 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
void *fn_8023A310(void *script, void *context);
void Avatar__ShowWeaponImpl(void *avatar, int selected);

void Avatar__ShowWeapon(void *script, void *context) {
    char *avatar = fn_8023A310(script, context);

    if (*(int *)(*(char **)(avatar + 0x19D8) + 0xC) != 53)
        Avatar__ShowWeaponImpl(avatar + 0x15A0, 1);
}
