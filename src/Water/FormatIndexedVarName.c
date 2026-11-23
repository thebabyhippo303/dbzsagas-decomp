/* Water__FormatIndexedVarName @ 0x80296D20 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char lbl_803BED44[];
void sprintf(char *s, const char *fmt, ...);
char *Water__FormatIndexedVarName(char *a, int b, char *c) {
    sprintf(lbl_803BED44, "%s%d%s", a, b, c);
    return lbl_803BED44;
}
