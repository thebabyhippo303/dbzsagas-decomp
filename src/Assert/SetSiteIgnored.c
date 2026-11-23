/* Assert__SetSiteIgnored @ 0x8017E720 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct SiteEntry {
    unsigned int file : 24;
    unsigned int line : 7;
    unsigned int ignored : 1;
} SiteEntry;
extern SiteEntry lbl_803A1D5C[];
int Assert__FindSite(int file, int line);
unsigned int Assert__HashSite(unsigned int, unsigned int, unsigned int);

void Assert__SetSiteIgnored(unsigned int a, unsigned int b, int line, unsigned int c, int ignored) {
    int l = line % 128;
    int idx = Assert__FindSite(Assert__HashSite(a, b, c), l);
    if (idx != -1) {
        lbl_803A1D5C[idx].ignored = ignored;
    }
}
