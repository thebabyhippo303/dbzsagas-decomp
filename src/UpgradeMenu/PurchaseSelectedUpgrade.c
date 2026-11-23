/* UpgradeMenu__PurchaseSelectedUpgrade @ 0x800171A0 (size: 0x1A0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
s32 MenuList__GetSelectedRecordId(void *);
s32 PersistentData__HasRecordStateOne(void *, s32);
s32 PersistentData__GetCoinsAvailable(void *);
s32 UpgradeMenu__GetUpgradeCost(void *, s32);
s32 UpgradeMenu__GetUpgradePrerequisiteRecordId(void *, s32);
s32 PersistentData__HasRecordStateTwo(void *, s32);
void MissionProgress__DisplayAll(s32, s32);
void Minimap__HandleMapUpgradePurchase(s32);
void PersistentData__SetRecordStatusById(void *, s32, s32);
void PersistentData__TransferCoinsToUsed(void *, s32);
void Game__RefreshPlayerRecordEffects(void *);
void UpgradeMenu__RefreshSelectedUpgradeDisplay(void *);
void Sound__Play2D(char *, s32);
extern char lbl_8030DBB4[] __attribute__((section(".data")));
extern char *lbl_803DC368;
extern void *lbl_803DC3C0;

void UpgradeMenu__PurchaseSelectedUpgrade(char *self) {
    char *list = self + 0x1A0;
    s32 ok;
    s32 c;
    s32 pre;
    char *list2;

    ok = PersistentData__HasRecordStateOne(lbl_803DC368 + 0x138, MenuList__GetSelectedRecordId(list));
    c = PersistentData__GetCoinsAvailable(lbl_803DC368 + 0x168);
    ok &= 1;
    if (c < UpgradeMenu__GetUpgradeCost(lbl_803DC368 + 0x138, MenuList__GetSelectedRecordId(list))) ok = 0;
    pre = PersistentData__HasRecordStateTwo(lbl_803DC368 + 0x138, UpgradeMenu__GetUpgradePrerequisiteRecordId(lbl_803DC368 + 0x138, MenuList__GetSelectedRecordId(list)));
    if ((ok != 0) & (pre != 0)) {
        if (MenuList__GetSelectedRecordId(list) == 0x71) {
            MissionProgress__DisplayAll(0x65, 0x2712);
        } else if (MenuList__GetSelectedRecordId(list) == 0x77) {
            Minimap__HandleMapUpgradePurchase(0x77);
        } else if (MenuList__GetSelectedRecordId(list) == 0x78) {
            Minimap__HandleMapUpgradePurchase(0x78);
        }
        list2 = self + 0x1A0;
        PersistentData__SetRecordStatusById(lbl_803DC368 + 0x138, MenuList__GetSelectedRecordId(list2), 1);
        PersistentData__TransferCoinsToUsed(lbl_803DC368 + 0x168, UpgradeMenu__GetUpgradeCost(lbl_803DC368 + 0x138, MenuList__GetSelectedRecordId(list2)));
        Game__RefreshPlayerRecordEffects(lbl_803DC3C0);
        UpgradeMenu__RefreshSelectedUpgradeDisplay(self);
        return;
    }
    Sound__Play2D(lbl_8030DBB4, 0);
}
