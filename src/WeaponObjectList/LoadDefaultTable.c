/* WeaponObjectList__LoadDefaultTable @ 0x800D0AB8 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: WeaponObjectList__LoadDefaultTable @ 0x800D0AB8 (0x2C). ProDG -O2. */
extern char lbl_803688D0[];
extern int lbl_803D8278;
extern void WeaponObjectList__LoadFromTable(void *list, const char *table, int count);

void WeaponObjectList__LoadDefaultTable(void *list) {
    WeaponObjectList__LoadFromTable(list, lbl_803688D0, lbl_803D8278);
}
