/* Floater__SetPathKeepOriginalOrient @ 0x802B04D0 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Floater__SetPathKeepOriginalOrient @ 0x802B04D0 (0x44). ProDG -O2. */
typedef struct {
    char pad[0x4A4];
    int keepOriginalOrient;
} FloaterPathInner;

typedef struct {
    char pad[0xC8];
    FloaterPathInner *inner;
} FloaterPath;

extern int Script__PopInt(void *script, void *context);

void Floater__SetPathKeepOriginalOrient(FloaterPath *script, void *context) {
    int keep = Script__PopInt(script, context) != 0;
    script->inner->keepOriginalOrient = keep;
}
