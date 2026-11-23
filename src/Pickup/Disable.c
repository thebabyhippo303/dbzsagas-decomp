/* Pickup__Disable @ 0x8002BF24 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Pickup__Disable @ 0x8002BF24 (0x50). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern float Script__PopFloat(void *script, void *context);
extern void Pickup__DisableImpl(void *pickup, float alpha);

void Pickup__Disable(void *script, void *context) {
	void *pickup = Script__PopInt(script, context);
	float alpha = Script__PopFloat(script, context);
	if (pickup != 0)
		Pickup__DisableImpl(pickup, alpha);
}
