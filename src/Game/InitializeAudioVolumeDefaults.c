/* Game__InitializeAudioVolumeDefaults @ 0x80007950 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Game__InitializeAudioVolumeDefaults @ 0x80007950 (0x60). ProDG -O2. */
extern char lbl_80308540[];
extern char lbl_80308550[];
extern char lbl_80308560[];
extern void PersistentData__SetDefaultGlobalIfMissing(void *self, void *key, int value);

void Game__InitializeAudioVolumeDefaults(void *self) {
    PersistentData__SetDefaultGlobalIfMissing(self, lbl_80308540, 4);
    PersistentData__SetDefaultGlobalIfMissing(self, lbl_80308550, 4);
    PersistentData__SetDefaultGlobalIfMissing(self, lbl_80308560, 4);
}
