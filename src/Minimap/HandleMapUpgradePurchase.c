/* Minimap__HandleMapUpgradePurchase @ 0x80118510 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
extern int lbl_803DC67C;
extern int lbl_803DC680;
extern void fn_8011856C(void);

void Minimap__HandleMapUpgradePurchase(int id) {
    if (id == 119) {
        lbl_803DC67C |= 2;
        lbl_803DC680 |= 2;
    } else if (id == 120) {
        lbl_803DC67C |= 4;
        lbl_803DC680 |= 4;
    }
    fn_8011856C();
}
