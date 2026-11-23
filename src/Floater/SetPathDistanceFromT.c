/* Floater__SetPathDistanceFromT @ 0x802B03BC (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Floater__SetPathDistanceFromT @ 0x802B03BC (0x4C). ProDG -O2. */
typedef struct PathDistanceOps {
    char pad[0x70];
    signed short offset;
    char pad72[2];
    void (*apply)(void *path, float distance);
} PathDistanceOps;

typedef struct FloaterPathDist {
    char pad[0x414];
    char pathBase;
    char mid[0x4C8 - 0x415];
    PathDistanceOps *ops;
} FloaterPathDist;

typedef struct FloaterPathScript {
    char pad[0xC8];
    FloaterPathDist *inner;
} FloaterPathScript;

extern float Script__PopFloat(void *script, void *context);

void Floater__SetPathDistanceFromT(FloaterPathScript *script, void *context) {
    FloaterPathDist *inner = script->inner;
    float distance = Script__PopFloat(script, context);
    PathDistanceOps *ops = inner->ops;
    char *base = &inner->pathBase;
    signed short off = ops->offset;
    ops->apply(base + off, distance);
}
