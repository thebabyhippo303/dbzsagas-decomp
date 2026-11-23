/* UpgradeMenu__IsSelectedUpgradeUnpurchased @ 0x80017340 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char *lbl_803DC368;

int MenuList__GetSelectedRecordId(void *list);
int PersistentData__HasRecordStateOne(void *data, int id);

int UpgradeMenu__IsSelectedUpgradeUnpurchased(char *menu) {
    return PersistentData__HasRecordStateOne(
               lbl_803DC368 + 0x138,
               MenuList__GetSelectedRecordId(menu + 0x1A0)) ^
           1;
}
