/* TriggerBox__PurgeInstances @ 0x80032D70 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: TriggerBox__PurgeInstances @ 0x80032D70 (0x88). ProDG -O2. */
typedef struct {
	int count;
	void **instances;
} TriggerInstances;

extern TriggerInstances *Script__PopInt(void *script, void *context);

void TriggerBox__PurgeInstances(void *script, void *context) {
	TriggerInstances *instances;
	void *actor;
	int i;

	instances = Script__PopInt(script, context);
	actor = Script__PopInt(script, context);
	if (instances != 0) {
		for (i = 0; i < instances->count; i++) {
			if (instances->instances[i] == actor)
				instances->instances[i] = 0;
		}
	}
}
