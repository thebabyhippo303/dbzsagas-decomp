/* CheckPoint__SetDestination @ 0x8002EC70 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: CheckPoint__SetDestination @ 0x8002EC70 (0x48). ProDG -O2. */
typedef struct {
    char pad[0x84];
    int destination;
} CheckDestSrc;

typedef struct {
    char pad[0x560];
    int destination;
} CheckPointDest;

extern CheckPointDest *Script__PopInt(void *script, void *context);
extern CheckDestSrc *Script__PopInt2(void *script, void *context);

void CheckPoint__SetDestination(void *script, void *context) {
    CheckPointDest *checkpoint = Script__PopInt(script, context);
    CheckDestSrc *src = Script__PopInt2(script, context);
    checkpoint->destination = src->destination;
}
