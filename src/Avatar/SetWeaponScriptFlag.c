/* Avatar__SetWeaponScriptFlag @ 0x8009E464 (size: 0x8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-match Avatar__SetWeaponScriptFlag @ 0x8009E464 (0x8). */
void Avatar__SetWeaponScriptFlag(void *self, int flag) {
    *(int *)((char *)self + 856) = flag;
}
