/* Effect__SpawnAcidFullscreenWithCameraShake @ 0x800DAF54 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
void fn_800DA918(void *a, void *b, const char *name);

extern char lbl_8031FF38[] __attribute__((section(".data")));

void Avatar__TriggerAcidFX(void *self) {
    fn_800DA918(self, self, lbl_8031FF38);
}
