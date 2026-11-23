/* Floater__SetStationary @ 0x802B0580 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Floater__SetStationary @ 0x802B0580 (0x44). ProDG -O2. */
typedef struct {
    char pad[0xC8];
    void *inner;
} FloaterStationary;

extern int Script__PopInt(void *script, void *context);
extern void Floater__SetStationaryImpl(void *inner, int stationary);

void Floater__SetStationary(FloaterStationary *script, void *context) {
    int stationary = Script__PopInt(script, context) != 0;
    Floater__SetStationaryImpl(script->inner, stationary);
}
