/* Avatar__RemoveHandItem @ 0x80024D38 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__RemoveHandItem @ 0x80024D38 (0x5C). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern void Avatar__RemoveHandItemImpl(void *item, int flag);

void Avatar__RemoveHandItem(void *script, void *context) {
	char *avatar;
	int flag;
	void *item;

	avatar = Script__PopInt(script, context);
	flag = (int)Script__PopInt(script, context);
	item = *(void **)(avatar + 0x159C);
	Avatar__RemoveHandItemImpl(item, flag != 0);
}
