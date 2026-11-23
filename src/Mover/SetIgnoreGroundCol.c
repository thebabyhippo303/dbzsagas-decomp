/* Mover__SetIgnoreGroundCol @ 0x802B06E8 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Mover__SetIgnoreGroundCol @ 0x802B06E8 (0x40). ProDG -O2. */
typedef struct {
    char pad[0x510];
    int ignoreGroundCol;
} Mover;

typedef struct {
    char pad[0xC8];
    Mover *mover;
} MoverScript;

extern int Script__PopInt(void *script, void *context);

void Mover__SetIgnoreGroundCol(MoverScript *script, void *context) {
    Mover *mover = script->mover;
    mover->ignoreGroundCol = Script__PopInt(script, context) == 1;
}
