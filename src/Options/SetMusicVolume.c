/* Options__SetMusicVolume @ 0x80128628 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char *lbl_803DC368;
extern void *lbl_803DCC20;
extern float lbl_80327868 __attribute__((section(".data")));
static const char pool_pad[0x7850] = {1};
extern void PersistentData__SetGlobalImpl(void *data, const char *name, int value);
extern void Audio__SetMasterMusicVolume(void *audio, float value);

void Options__SetMusicVolume(void *unused, int volume) {
    float scaled;
    PersistentData__SetGlobalImpl(lbl_803DC368 + 300, "OptionsMusicVol", volume);
    scaled = (float)volume * lbl_80327868;
    Audio__SetMasterMusicVolume(lbl_803DCC20, scaled);
    *(float *)(lbl_803DC368 + 272) = scaled;
}
