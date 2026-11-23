/* Minimap__UpdateModeAvailability @ 0x801177C0 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Minimap__UpdateModeAvailability @ 0x801177C0 (0x30). ProDG -O2. */
typedef struct {
    int pad;
    unsigned int mode;
} MinimapModeState;

typedef struct {
    char pad_000[0x238];
    MinimapModeState *mode_state;
} MinimapModeRoot;

extern MinimapModeRoot *lbl_803DC3C0;
extern int lbl_803DC65C;

void Minimap__UpdateModeAvailability(void) {
    unsigned int mode = lbl_803DC3C0->mode_state->mode;
    if (mode - 2 <= 19)
        lbl_803DC65C = 1;
    else
        lbl_803DC65C = 0;
}
