/* SoundField__InitializeFromProperties @ 0x800EB930 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: SoundField__InitializeFromProperties @ 0x800EB930 (0x44). ProDG -O2. */
extern char lbl_803BEFC0[];
extern char lbl_803B1E84[];
extern void *fn_802B30E0(void *context);
extern void fn_8025288C(void *name, void *parser, int a, int b);

void SoundField__InitializeFromProperties(void) {
	void *parser = fn_802B30E0(lbl_803BEFC0);
	if (parser != 0)
		fn_8025288C(lbl_803B1E84, parser, 0, 0);
}
