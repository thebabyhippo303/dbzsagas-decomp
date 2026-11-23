/* Fighter__InitializeFromProperties @ 0x800F0488 (size: 0xCC, .text, ProDG 3.9.3 -O2) - MATCHED */
void *memset(void *, int, int);
int sprintf(char *, const char *, ...);
void fn_80251214(void *);
int fn_802ABE70(void *, char *, int);
void fn_802ABED0(void *);
void fn_80251360(void *, void *, int);
extern char lbl_80331DA0[] __attribute__((section(".data")));
extern char lbl_80323BA0[] __attribute__((section(".rodata")));
extern char lbl_80323BB0[] __attribute__((section(".rodata")));
extern char lbl_803B1DDC[] __attribute__((section(".bss")));
typedef struct Name { char s[13]; } Name;
typedef struct F { char pad[24]; char *vt; char body[460]; } F;

F *Fighter__InitializeFromProperties(F *self, const char *name) {
    char buf[256];
    fn_80251214(self);
    self->vt = lbl_80331DA0;
    memset(self->body, 0, 460);
    *(Name *)((char *)self + 236) = *(Name *)lbl_80323BA0;
    sprintf(buf, lbl_80323BB0, name);
    if (fn_802ABE70(self->body, buf, 0) != 0) {
        fn_802ABED0(self->body);
    }
    fn_80251360(lbl_803B1DDC, self, 0x80000);
    return self;
}
