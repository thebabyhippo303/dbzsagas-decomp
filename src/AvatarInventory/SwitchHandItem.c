/* AvatarInventory__SwitchHandItem @ 0x8009B688 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
void AvatarInventory__RemoveItem(void *self, void *item, void *hand, int flag);
void AvatarInventory__SelectHandItem(void *self, void *item, void *hand, int flag);

void AvatarInventory__SwitchHandItem(void *self, void *item, void *hand) {
    AvatarInventory__RemoveItem(self, item, hand, 1);
    AvatarInventory__SelectHandItem(self, item, hand, 0);
}
