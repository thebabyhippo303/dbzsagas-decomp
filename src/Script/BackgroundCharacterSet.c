/* Script__BackgroundCharacterSet @ 0x8003DC04 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: BackgroundCharacter__Set @ 0x8003DC04 (0x28). ProDG -O2. */
typedef struct {
    char pad[0x20F4];
    int character;
} BackgroundState;

extern BackgroundState *lbl_803DC3C0;
extern int Script__PopInt(void *script, void *context);

void BackgroundCharacter__Set(void *script, void *context) {
    lbl_803DC3C0->character = Script__PopInt(script, context);
}
