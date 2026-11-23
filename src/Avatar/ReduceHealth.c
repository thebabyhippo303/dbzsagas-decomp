/* Avatar__ReduceHealth @ 0x80024D94 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__ReduceHealth @ 0x80024D94 (0x4C). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern float Script__PopFloat(void *script, void *context);
extern void Avatar__AdjustHealth(void *avatar, float amount);

void Avatar__ReduceHealth(void *script, void *context) {
	void *avatar;
	float amount;

	avatar = Script__PopInt(script, context);
	amount = Script__PopFloat(script, context);
	Avatar__AdjustHealth(avatar, -amount);
}
