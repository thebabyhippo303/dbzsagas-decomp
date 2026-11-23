/* Floater__SetFaceMovementDirection @ 0x802B053C (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Floater__SetFaceMovementDirection @ 0x802B053C (0x44). ProDG -O2. */
typedef struct {
    char pad[0x4B0];
    int faceMovementDirection;
} FloaterInner;

typedef struct {
    char pad[0xC8];
    FloaterInner *inner;
} Floater;

extern int Script__PopInt(void *script, void *context);

void Floater__SetFaceMovementDirection(Floater *script, void *context) {
    int face = Script__PopInt(script, context) != 0;
    script->inner->faceMovementDirection = face;
}
