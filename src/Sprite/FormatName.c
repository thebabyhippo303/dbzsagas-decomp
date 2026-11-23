/* Sprite__FormatName @ 0x8029E6CC (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Sprite__FormatName @ 0x8029E6CC (0x48). ProDG -O2. */
extern char lbl_803BB2E0[];
extern int sprintf(char *dst, const char *fmt, ...);

char *Sprite__FormatName(int id, const char *name) {
    sprintf(lbl_803BB2E0, "Sprite%d_%s", name, id);
    return lbl_803BB2E0;
}
