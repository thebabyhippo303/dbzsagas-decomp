/* Floater__SetPathCurrentSpeed @ 0x802B0408 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Floater__SetPathCurrentSpeed @ 0x802B0408 (0x4C). ProDG -O2. */
typedef struct PathSpeedOps {
	char pad[0x88];
	signed short offset;
	char pad8A[2];
	void (*apply)(void *path, float speed);
} PathSpeedOps;

typedef struct FloaterPath {
	char pad[0x414];
	char path_base;
	char mid[0x4C8 - 0x415];
	PathSpeedOps *ops;
} FloaterPath;

typedef struct FloaterPathScript {
	char pad[0xC8];
	FloaterPath *inner;
} FloaterPathScript;

extern float Script__PopFloat(void *script, void *context);

void Floater__SetPathCurrentSpeed(FloaterPathScript *script, void *context) {
	float speed = Script__PopFloat(script, context);
	FloaterPath *inner = script->inner;
	PathSpeedOps *ops = inner->ops;
	char *path = &inner->path_base;
	signed short offset = ops->offset;
	ops->apply(path + offset, speed);
}
