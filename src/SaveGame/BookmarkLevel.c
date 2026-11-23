/* SaveGame__BookmarkLevel @ 0x8002F784 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: SaveGame__BookmarkLevel @ 0x8002F784 (0x28). ProDG -O2. */
typedef struct {
    char pad[0x5388];
    void *level;
} SaveG;

extern SaveG *lbl_803DC368;
void fn_8014F0F0(void *p);

void SaveGame__BookmarkLevel(void) {
    fn_8014F0F0(lbl_803DC368->level);
}
