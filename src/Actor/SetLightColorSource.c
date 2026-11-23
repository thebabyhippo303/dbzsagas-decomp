/* Actor__SetLightColorSource @ 0x802AC904 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__SetLightColorSource @ 0x802AC904 (0x58). ProDG -O2. */
typedef struct {
    char pad_000[0xC8];
    void *inner;
} Actor;

extern int Script__PopInt(void *script, void *context);
extern void fn_801DD624(void *inner, int source);

void Actor__SetLightColorSource(Actor *self, void *context) {
    int source = Script__PopInt(self, context);

    if (source != 1) {
        if (source <= 1) {
            source = 0;
        } else if (source != 2) {
            if (source != 3)
                source = 0;
        }
    }
    fn_801DD624(self->inner, source);
}
