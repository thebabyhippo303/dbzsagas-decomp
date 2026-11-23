/* Avatar__GetLockActor @ 0x80031790 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__GetLockActor @ 0x80031790 (0x4C). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern void Script__PushInt(void *script, void *context, int value);

void Avatar__GetLockActor(void *script, void *context) {
	char *avatar = Script__PopInt(script, context);
	int lock_actor = 0;
	if (avatar != 0)
		lock_actor = *(int *)(avatar + 0x2B8);
	Script__PushInt(script, context, lock_actor);
}
