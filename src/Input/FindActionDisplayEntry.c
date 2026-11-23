/* Input__FindActionDisplayEntry @ 0x801002F0 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Input__FindActionDisplayEntry @ 0x801002F0 (0x40). ProDG -O2. */
typedef struct {
    int id;
    char pad[12];
} ActionDisplayEntry;

extern ActionDisplayEntry lbl_8036B754[] __attribute__((section(".data")));

ActionDisplayEntry *Input__FindActionDisplayEntry(void *self, int id) {
    int i;

    for (i = 0; i < 64; i++) {
        if ((lbl_8036B754[i].id & 0xFF) == id) {
            return &lbl_8036B754[i];
        }
    }
    return lbl_8036B754;
}
