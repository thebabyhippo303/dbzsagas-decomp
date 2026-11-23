/* Sfx3DGroup__InitializeNameBuffers @ 0x8009CE2C (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Sfx3DGroup__InitializeNameBuffers @ 0x8009CE2C (0xA4). ProDG -O2. */
typedef struct {
    char pad[0xC];
    void *table;
    char *nameA;
    char *nameB;
} NameBuffers;

extern char lbl_803351C0[] __attribute__((section(".data")));
extern char lbl_8031FE2C[] __attribute__((section(".data")));

extern char *Sfx3DGroup__GetName(void);
extern void fn_801DEAD0(void *self, int arg, char *name);
extern void *fn_80184348(int size);
extern char *strcat(char *dst, const char *src);
extern char *strcpy(char *dst, const char *src);
extern int strlen(const char *s);

void *Sfx3DGroup__InitializeNameBuffers(void *arg0, int arg1, char *arg2) {
    NameBuffers *self = arg0;
    char *buf;

    fn_801DEAD0(arg0, arg1, Sfx3DGroup__GetName());
    self->table = lbl_803351C0;
    buf = fn_80184348(strlen(arg2) + 2);
    self->nameA = buf;
    strcpy(buf, arg2);
    strcat(self->nameA, lbl_8031FE2C);
    buf = fn_80184348(strlen(arg2) + 1);
    self->nameB = buf;
    strcpy(buf, arg2);
    return arg0;
}
