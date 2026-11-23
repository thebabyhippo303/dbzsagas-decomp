/* Game__LoadDefaultWeaponTable @ 0x80021EC0 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Game__LoadDefaultWeaponTable @ 0x80021EC0 (0x24). ProDG -O2. */
extern void WeaponObjectList__LoadDefaultTable(void *list);

void Game__LoadDefaultWeaponTable(void *game) {
    WeaponObjectList__LoadDefaultTable((char *)game + 0x20);
}
