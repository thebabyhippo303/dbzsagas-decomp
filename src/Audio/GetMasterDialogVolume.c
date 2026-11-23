/* Audio__GetMasterDialogVolume @ 0x80190640 (size: 0x8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Audio__GetMasterDialogVolume @ 0x80190640 (0x8). ProDG -O2. */
typedef struct {
	char pad[0x114];
	float master_dialog_volume;
} AudioSettings;

float Audio__GetMasterDialogVolume(AudioSettings *settings) {
	return settings->master_dialog_volume;
}
