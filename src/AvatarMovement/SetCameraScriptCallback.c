/* AvatarMovement__SetCameraScriptCallback @ 0x800B7D6C (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
int Avatar__PopScriptInt(void *avatar, void *script);

void AvatarMovement__SetCameraScriptCallback(void **self, void *script) {
    Avatar__PopScriptInt(*self, script);
}
