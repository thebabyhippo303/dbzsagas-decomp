/* Avatar__AndroidCaptainShoot @ 0x8003DF08 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__AndroidCaptainShoot @ 0x8003DF08 (0x60). ProDG -O2. */
typedef struct {
	char pad[0x460];
	int result;
} AndroidCaptainSub;

typedef struct {
	char pad[0x71C];
	int state;
	char pad2[0xC4];
	int unavailable;
	char pad3[0x3A4];
	AndroidCaptainSub *sub;
} AndroidCaptain;

extern AndroidCaptain *Script__PopInt(void *script, void *context);
extern void Script__PushInt(void *script, void *context, int value);

void Avatar__AndroidCaptainShoot(void *script, void *context) {
	AndroidCaptain *actor = Script__PopInt(script, context);
	int result = 0;
	if (actor->unavailable == 0 && actor->state == 5)
		result = actor->sub->result;
	Script__PushInt(script, context, result);
}
