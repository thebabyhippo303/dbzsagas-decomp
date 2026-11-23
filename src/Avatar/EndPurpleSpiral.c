/* Avatar__EndPurpleSpiral @ 0x80039D34 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__EndPurpleSpiral @ 0x80039D34 (0x6C). ProDG -O2. */
typedef struct {
	char pad[56];
	short delta;
	short pad2;
	void (*fn)(void *self, int zero);
} SpiralDesc;

extern void *Script__PopInt(void *script, void *context);
extern void fn_800629DC(void *obj, int zero);
extern void Actor__GetStateHandler(int state);

void Avatar__EndPurpleSpiral(void *script, void *context) {
	char *node;
	char *obj;
	SpiralDesc *desc;
	node = (char *)Script__PopInt(script, context) + 2820;
	obj = *(char **)(node + 136);
	desc = *(SpiralDesc **)(obj + 1404);
	desc->fn(obj + desc->delta, 0);
	*(int *)(*(char **)(node + 136) + 116) = 66;
	fn_800629DC(*(char **)(node + 136), 0);
	Actor__GetStateHandler(66);
}
