/* Floater__SetSpeed @ 0x802AFEB4 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Floater__SetSpeed @ 0x802AFEB4. ProDG -O2. */
typedef struct FloaterSpeedOps {
	char pad[0x80];
	signed short prepOffset;
	char pad82[2];
	void (*prep)(void *path);
	signed short applyOffset;
	char pad8A[2];
	void (*apply)(void *path, float speed);
} FloaterSpeedOps;

typedef struct FloaterSpeedInner {
	char pad[0x414];
	char pathBase;
	char mid[0x4C8 - 0x415];
	FloaterSpeedOps *ops;
	int hasPath;
	char pad4D0[0x4F8 - 0x4D0];
	float speed;
} FloaterSpeedInner;

typedef struct FloaterSpeedScript {
	char pad[0xC8];
	FloaterSpeedInner *inner;
} FloaterSpeedScript;

extern float Script__PopFloat(void *script, void *context);

void Floater__SetSpeed(FloaterSpeedScript *script, void *context) {
	float speed = Script__PopFloat(script, context);
	FloaterSpeedInner *inner = script->inner;

	if (inner->hasPath != 0) {
		FloaterSpeedOps *ops = inner->ops;
		char *base = &inner->pathBase;

		ops->prep(base + ops->prepOffset);
		ops = inner->ops;
		ops->apply(base + ops->applyOffset, speed);
	} else {
		inner->speed = speed;
	}
}
