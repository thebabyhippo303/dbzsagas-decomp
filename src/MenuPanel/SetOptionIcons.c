/* MenuPanel__SetOptionIcons @ 0x8026890C (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef short s16;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void MenuPanel__SetOptionIcons(void *self, int unused, void *b, void *c, int d) {
    void *vt;
    void *res;
    vt = M2C_FIELD(self, void **, 412);
    res = M2C_FIELD(vt, void *(**)(void *), 1252)((char *)self + M2C_FIELD(vt, s16 *, 1248));
    if (res == NULL) {
        return;
    }
    vt = M2C_FIELD(res, void **, 936);
    {
        char *base = (char *)res + 524;
        M2C_FIELD(vt, void (**)(void *, void *, void *, int, int, int), 20)(base + M2C_FIELD(vt, s16 *, 16), b, c, 0, 1, 1);
    }
    if (d == -1) {
        return;
    }
    vt = M2C_FIELD(res, void **, 1352);
    {
        char *base = (char *)res + 940;
        M2C_FIELD(vt, void (**)(void *, void *, int, int, int, int), 20)(base + M2C_FIELD(vt, s16 *, 16), b, d, 0, 1, 1);
    }
}
