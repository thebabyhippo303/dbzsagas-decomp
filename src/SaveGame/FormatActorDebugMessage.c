/* SaveGame__FormatActorDebugMessage @ 0x80150B94 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: SaveGame__FormatActorDebugMessage @ 0x80150B94 (0x6C). ProDG -O2. */
typedef int s32;

extern void Debug__FormatMessage(const char *fmt, ...);
extern char lbl_8032C290[];
extern char lbl_8032C2A4[];
extern s32 lbl_803945A4[] __attribute__((section(".data")));

void SaveGame__FormatActorDebugMessage(void *unused, const char *name, char *actor) {
    if ((*(s32 *)actor & lbl_803945A4[1]) == lbl_803945A4[0]) {
        Debug__FormatMessage(lbl_8032C290, name, actor + 0x1C0, *(s32 *)(actor + 0x10C));
        return;
    }
    Debug__FormatMessage(lbl_8032C2A4, name, *(s32 *)(actor + 0x10C));
}
