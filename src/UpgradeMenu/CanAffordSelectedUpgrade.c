/* UpgradeMenu__CanAffordSelectedUpgrade @ 0x800170F0 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: UpgradeMenu__CanAffordSelectedUpgrade @ 0x800170F0 (0x64). ProDG -O2. */
typedef struct {
    char pad[0x1A0];
    char list[1];
} UpgradeMenu;

typedef struct {
    char pad[0x138];
    char upgrades[0x30];
    char persistent[1];
} UpgradeGlobals;

extern UpgradeGlobals *lbl_upgradeGlobals;
extern int PersistentData__GetCoinsAvailable(void *data);
extern int MenuList__GetSelectedRecordId(void *list);
extern int UpgradeMenu__GetUpgradeCost(void *upgrades, int id);

int UpgradeMenu__CanAffordSelectedUpgrade(UpgradeMenu *menu) {
    int coins = PersistentData__GetCoinsAvailable(lbl_upgradeGlobals->persistent);
    return coins >= UpgradeMenu__GetUpgradeCost(lbl_upgradeGlobals->upgrades,
                                                MenuList__GetSelectedRecordId(menu->list));
}
