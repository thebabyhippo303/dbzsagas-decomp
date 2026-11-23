/* AvatarMovement__DoActionPickupScriptCallback @ 0x800B76C4 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
int Avatar__PopScriptInt(void *avatar, void *script);

void AvatarMovement__DoActionPickupScriptCallback(void **self, void *script) {
    Avatar__PopScriptInt(*self, script);
}
