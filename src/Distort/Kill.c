/* Distort__Kill @ 0x8003CE4C (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Distort__Kill @ 0x8003CE4C (0x4C). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern void Distort__KillImpl(void *distort, void *arg);

void Distort__Kill(void *script, void *context) {
	char *distort;
	void *arg;

	distort = Script__PopInt(script, context);
	arg = Script__PopInt(script, context);
	Distort__KillImpl(distort + 0x1B90, arg);
}
