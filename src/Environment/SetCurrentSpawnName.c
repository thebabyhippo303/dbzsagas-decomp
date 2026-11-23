/* Environment__SetCurrentSpawnName @ 0x802C27A0 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed int s32;
extern char lbl_803758F0[];
char *strncpy(char *d, const char *s, s32 n);
void Environment__SetCurrentSpawnName(void *self, const char *name) {
    strncpy(lbl_803758F0, name, 100);
    lbl_803758F0[31] = 0;
}
