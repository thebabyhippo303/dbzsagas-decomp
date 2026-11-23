/* CActor__ChainsActive @ 0x8002E7D0 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: CActor__ChainsActive @ 0x8002E7D0 (0x54). ProDG -O2. */
extern int Script__PopInt(void *script, void *context);
extern void fn_801DB654(void *chains);
extern void fn_801DB61C(void *chains);

void CActor__ChainsActive(void *script, void *context) {
	int active;
	char *inner;
	void *chains;

	active = Script__PopInt(script, context);
	inner = *(char **)((char *)script + 0xC8);
	chains = *(void **)(inner + 0xA4);
	if (chains != 0) {
		if (active != 0) {
			fn_801DB654(chains);
		} else {
			fn_801DB61C(chains);
		}
	}
}
