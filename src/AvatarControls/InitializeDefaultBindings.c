/* AvatarControls__InitializeDefaultBindings @ 0x801260A8 (size: 0x154, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void AvatarControls__SetWordAt0x10(void *self, int value);
extern void AvatarControls__SetWordAt0x14(void *self, int value);
extern void AvatarControls__SetActionBinding(void *self, int action, int slot, int flags);

void AvatarControls__InitializeDefaultBindings(void *self) {
    AvatarControls__SetWordAt0x10(self, 1);
    AvatarControls__SetWordAt0x14(self, 2);
    AvatarControls__SetActionBinding(self, 1, 5, 0);
    AvatarControls__SetActionBinding(self, 0, 6, 0);
    AvatarControls__SetActionBinding(self, 2, 8, 0);
    AvatarControls__SetActionBinding(self, 3, 10, 0);
    AvatarControls__SetActionBinding(self, 4, 9, 0);
    AvatarControls__SetActionBinding(self, 6, 11, 0);
    AvatarControls__SetActionBinding(self, 8, 11, 0);
    AvatarControls__SetActionBinding(self, 7, 12, 0);
    AvatarControls__SetActionBinding(self, 12, 16, 0);
    AvatarControls__SetActionBinding(self, 5, 7, 0);
    AvatarControls__SetActionBinding(self, 16, 1, 0);
    AvatarControls__SetActionBinding(self, 14, 3, 0);
    AvatarControls__SetActionBinding(self, 13, 4, 0);
    AvatarControls__SetActionBinding(self, 15, 2, 0);
}
