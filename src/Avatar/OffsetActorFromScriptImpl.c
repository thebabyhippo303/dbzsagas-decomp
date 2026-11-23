/* Avatar__OffsetActorFromScriptImpl @ 0x800CA21C (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
typedef struct { f32 x, y, z; } V3;
typedef struct { char pad[0x38]; V3 pos; } Target;
typedef struct {
    char pad0[0x40]; Target *target;
    char pad1[0xA0 - 0x44]; V3 posA;
    V3 posB;
    char pad2[0x15C - 0xB8]; f32 yoff;
} Actor;

void Avatar__OffsetActorFromScriptImpl(Actor *a) {
    V3 *q = &a->posB;
    V3 *r = &a->posA;
    V3 *p2;
    V3 *p = &a->target->pos;
    *q = *p;
    q->y = q->y + a->yoff;
    p2 = &a->target->pos;
    *r = *p2;
}
