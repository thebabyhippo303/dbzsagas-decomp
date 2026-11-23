/* Assert__FindSite @ 0x8017E618 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
extern int lbl_803DCB44;
extern unsigned int lbl_803A1D5C[];

int Assert__FindSite(int file, int line) {
    int i;
    for (i = 0; i < lbl_803DCB44; i++) {
        unsigned int e = lbl_803A1D5C[i];
        if (file == (int)(e >> 8) && line == (int)((e >> 1) & 0x7F)) {
            return i;
        }
    }
    return -1;
}
