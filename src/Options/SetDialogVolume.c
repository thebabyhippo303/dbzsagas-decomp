/* Options__SetDialogVolume @ 0x801286E4 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char *lbl_803DC368;
extern void *lbl_803DCC20;
extern float lbl_80327888 __attribute__((section(".data")));
static const char pool_pad[0x7868] = {1};
extern void PersistentData__SetGlobalImpl(void *data, const char *name, int value);
extern void Audio__SetMasterDialogVolume(void *audio, float value);

void Options__SetDialogVolume(void *unused, int volume) {
    PersistentData__SetGlobalImpl(lbl_803DC368 + 300, "OptionsDialogVol", volume);
    Audio__SetMasterDialogVolume(lbl_803DCC20, (float)volume * lbl_80327888);
}
