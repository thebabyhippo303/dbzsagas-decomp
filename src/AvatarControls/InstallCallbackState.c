/* AvatarControls__InstallCallbackState @ 0x800A28B0 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AvatarControls__InstallCallbackState @ 0x800A28B0 (0x2C). ProDG -O2. */
extern void Avatar__SetControlCallbackState(void *avatar, void *callback);

void AvatarControls__InstallCallbackState(void *self) {
    Avatar__SetControlCallbackState(*(void **)self, (char *)self + 8);
}
