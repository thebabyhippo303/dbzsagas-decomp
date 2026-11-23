/* Actor__ParticleEmitterMov @ 0x802ADFA4 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__ParticleEmitterMov @ 0x802ADFA4 (0x90). ProDG -O2. */
extern char *Script__PopString(void *script, void *context, int *owned);
extern void *Emitter__CreateFromAsset(
	void *asset, void *arg0, void *arg1, int arg2, int arg3, int arg4,
	int arg5, int arg6, int arg7);
extern void Script__PushInt(void *script, void *context, int value);
extern void fn_80184430(char *text);

void Actor__ParticleEmitterMov(void *script, void *context) {
	int owned;
	char *name;
	char *base;
	void *emitter;

	name = Script__PopString(script, context, &owned);
	base = *(char **)((char *)script + 200);
	emitter = Emitter__CreateFromAsset(name, base + 56, base + 104,
		0, 0, 0, 0, 0, -1);
	Script__PushInt(script, context, (int)emitter);
	if (owned != 0 && name != 0)
		fn_80184430(name);
}
