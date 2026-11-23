/* UpgradeMenu__HasSelectedUpgradePrerequisiteStateTwo @ 0x80017154 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[0x1A0];
    char selected[1];
} UpgradeMenu;

typedef struct {
    char pad[0x138];
    char upgrades[0x30];
} UpgradeGlobals;

extern UpgradeGlobals *lbl_upgradeGlobals;
extern int MenuList__GetSelectedRecordId(void *list);
extern int UpgradeMenu__GetUpgradePrerequisiteRecordId(void *upgrades, int id);
extern int PersistentData__HasRecordStateTwo(void *upgrades, int id);

int UpgradeMenu__HasSelectedUpgradeStateTwo(UpgradeMenu *menu) {
    void *upgrades = lbl_upgradeGlobals->upgrades;
    return PersistentData__HasRecordStateTwo(
        upgrades,
        UpgradeMenu__GetUpgradePrerequisiteRecordId(
            upgrades, MenuList__GetSelectedRecordId(menu->selected)));
}
