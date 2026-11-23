/* Sound__Play2DSfxLoop @ 0x8002C0D0 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Sound__Play2DSfxLoop @ 0x8002C0D0 (0x8C). ProDG -O2. */
extern char *Script__PopString(void *script, void *context, int *ok);
extern float Script__PopFloat(void *script, void *context);
extern void fn_80188B94(char *name, int *sound_id, float volume, float pan);
extern void Script__PushInt(void *script, void *context, int value);
extern void fn_80184430(char *text);
extern char lbl_80310000[];

void Sound__Play2DSfxLoop(void *script, void *context) {
	int ok;
	int sound_id;
	char *name;
	float volume;

	name = Script__PopString(script, context, &ok);
	volume = Script__PopFloat(script, context);
	sound_id = 0;
	fn_80188B94(name, &sound_id, volume, *(float *)(lbl_80310000 + 0x162C));
	Script__PushInt(script, context, sound_id);
	if (ok != 0 && name != 0)
		fn_80184430(name);
}
