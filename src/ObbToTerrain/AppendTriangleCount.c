/* ObbToTerrain__AppendTriangleCount @ 0x801CB114 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
extern int sprintf(char *, const char *, ...);
extern char *strcat(char *, const char *);
extern char lbl_80341724[] __attribute__((section(".data")));

void ObbToTerrain__AppendTriangleCount(char *self, char *dest) {
    char buf[0x100];
    int v;

    v = *(int *)(self + 0x40);
    if (v != 0) {
        v = *(int *)(v + 0x24);
    } else {
        v = 0;
    }
    sprintf(buf, lbl_80341724, v);
    strcat(dest, buf);
}
