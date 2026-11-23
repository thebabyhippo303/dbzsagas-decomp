/* MemoryCard__Initialize @ 0x801D70A4 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
char *strcpy(char *, const char *);
unsigned strlen(const char *);
typedef struct MC { int state; char pad[4]; int arg; char pad2[84]; char *name1; char *name2; char pad3[4]; int codes[2]; } MC;

int MemoryCard__Initialize(MC *self, const char *a, const char *b, int arg) {
    unsigned len = strlen(b);
    int r = 11;
    if (len <= 31) {
        int *p;
        strcpy(self->name1, a);
        strcpy(self->name2, b);
        p = self->codes;
        do {
            *p = 13;
            p++;
        } while (p <= self->codes + 1);
        self->arg = arg;
        self->state = 1;
        r = 0;
    }
    return r;
}
