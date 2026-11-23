/* Instance__ExistsByName @ 0x802B08AC (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Instance__ExistsByName @ 0x802B08AC (0x98). ProDG -O2. */
extern char *Script__PopString(void *script, void *context, int *owned);
extern void *Instance__FindByName(void *root, char *name, int a, int b);
extern void Script__PushInt(void *script, void *context, int value);
extern void fn_80184430(char *text);
extern char lbl_803B1E84[];

void Instance__ExistsByName(void *script, void *context) {
	int owned;
	char *name = Script__PopString(script, context, &owned);
	void *instance = Instance__FindByName(lbl_803B1E84, name, 0, 0);

	if (instance == 0)
		Script__PushInt(script, context, 0);
	else
		Script__PushInt(script, context, 1);
	if (owned != 0 && name != 0)
		fn_80184430(name);
}
