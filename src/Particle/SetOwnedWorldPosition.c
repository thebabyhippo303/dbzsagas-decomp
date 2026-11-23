/* Particle__SetOwnedWorldPosition @ 0x80220FA4 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct V3 { int x, y, z; } V3;

extern char *lbl_803AD068 __attribute__((section(".data")));

int Particle__SetOwnedWorldPosition(unsigned arg0, V3 *pos) {
    char *e = lbl_803AD068 + (arg0 >> 16) * 200;
    if (*(unsigned *)e != arg0) {
        return 0;
    } else {
        *(V3 *)(e + 0x10) = *pos;
        return 1;
    }
}
