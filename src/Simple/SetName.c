/* Simple__SetName @ 0x802C2764 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed int s32;
char *strncpy(char *d, const char *s, s32 n);
void Simple__SetName(void *self, const char *name) {
    strncpy((char *)self + 480, name, 32);
    ((char *)self)[511] = 0;
}
