/* Actor__GetPositionNoDist @ 0x802AC3F4 (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__GetPositionNoDist @ 0x802AC3F4 (0xA0). ProDG -O2. */
extern char lbl_80350000[];
extern void *Script__PopActor(void *script, void *context, int kind);
extern void Script__PushFloat(void *script, void *context, float value);

typedef struct ActorPos {
    char pad[56];
    int x;
    int y;
    int z;
} ActorPos;

typedef struct Vec3i {
    int x;
    int y;
    int z;
} Vec3i;

void Actor__GetPositionNoDist(void *script, void *context) {
    float pos[3];
    float *p;
    float fill;
    ActorPos *actor;

    p = pos;
    fill = *(float *)(lbl_80350000 + 7456);
    pos[0] = fill;
    p[1] = fill;
    p[2] = fill;
    actor = Script__PopActor(script, context, 0);
    if (actor != 0) {
        *(Vec3i *)pos = *(Vec3i *)&actor->x;
    }
    Script__PushFloat(script, context, pos[0]);
    Script__PushFloat(script, context, p[1]);
    Script__PushFloat(script, context, p[2]);
}
