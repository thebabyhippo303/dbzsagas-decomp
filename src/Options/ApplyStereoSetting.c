/* Options__ApplyStereoSetting @ 0x80128B8C (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Options__ApplyStereoSetting @ 0x80128B8C. ProDG -O2. */
extern char *lbl_803DC368;
extern char lbl_803276C8[];
extern void *lbl_803DCC20;
extern int PersistentData__GetGlobalImpl(void *data, char *name);
extern int Audio__GetOutputMode(void *audio);
extern void Options__EnableStereo(void *self);
extern void Options__DisableStereo(void *self);

int Options__ApplyStereoSetting(void *self) {
	int value = PersistentData__GetGlobalImpl(lbl_803DC368 + 300, lbl_803276C8);
	int changed = 0;

	switch (value) {
	case 0:
		if (Audio__GetOutputMode(lbl_803DCC20) == 1) {
			changed = 1;
			Options__EnableStereo(self);
		} else {
			Options__DisableStereo(self);
		}
		break;
	case 2:
		changed = 1;
		break;
	case 1:
		break;
	}
	return changed;
}
