/* Assert__IsSiteIgnored @ 0x8017E670 (size: 0xB0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct SiteEntry {
    unsigned int file : 24;
    unsigned int line : 7;
    unsigned int ignored : 1;
} SiteEntry;
extern SiteEntry lbl_803A1D5C[];
extern int lbl_803DCB44;
int Assert__FindSite(int file, int line);
unsigned int Assert__HashSite(unsigned int, unsigned int, unsigned int);

int Assert__IsSiteIgnored(unsigned int a, unsigned int b, int line, unsigned int c) {
    int l = line % 128;
    unsigned int h = Assert__HashSite(a, b, c);
    int idx = Assert__FindSite(h, l);
    if (idx != -1) {
        if (lbl_803A1D5C[idx].ignored != 0) {
            return 1;
        }
        return 0;
    }
    {
        int n = lbl_803DCB44;
        if (n < 1024) {
            lbl_803DCB44 = n + 1;
            lbl_803A1D5C[n].file = h;
            lbl_803A1D5C[n].line = l;
            lbl_803A1D5C[n].ignored = 0;
        }
    }
    return 0;
}
