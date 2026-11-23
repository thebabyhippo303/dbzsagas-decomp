/* AvaSurf__WriteRow @ 0x800B84D0 (size: 0x280, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;
void sprintf(char *, char *, ...);
int strlen(const char *);
void fn_80255360(void *, char *, int);
extern char lbl_8032148C[] __attribute__((section(".data")));
extern char lbl_8032149C[] __attribute__((section(".data")));
extern char lbl_803214AC[] __attribute__((section(".data")));
extern char lbl_803214BC[] __attribute__((section(".data")));
extern char lbl_803214D0[] __attribute__((section(".data")));
extern char lbl_803214E8[] __attribute__((section(".data")));
extern char lbl_803214F4[] __attribute__((section(".data")));
extern char lbl_8032150C[] __attribute__((section(".data")));
extern char lbl_80321520[] __attribute__((section(".data")));
extern char lbl_80321530[] __attribute__((section(".data")));

void AvaSurf__WriteRow(char *self, s32 idx) {
    char buf[76];
    s32 off;

    off = idx * 40;
    sprintf(buf, lbl_8032148C, *(f32 *)(off + *(s32 *)(self + 0x2C) + 0));
    fn_80255360(*(void **)self, buf, strlen(buf));
    sprintf(buf, lbl_8032149C, *(f32 *)(off + *(s32 *)(self + 0x2C) + 4));
    fn_80255360(*(void **)self, buf, strlen(buf));
    sprintf(buf, lbl_803214AC, *(f32 *)(off + *(s32 *)(self + 0x2C) + 8));
    fn_80255360(*(void **)self, buf, strlen(buf));
    sprintf(buf, lbl_803214BC, *(f32 *)(off + *(s32 *)(self + 0x2C) + 12));
    fn_80255360(*(void **)self, buf, strlen(buf));
    sprintf(buf, lbl_803214D0, *(f32 *)(off + *(s32 *)(self + 0x2C) + 16));
    fn_80255360(*(void **)self, buf, strlen(buf));
    sprintf(buf, lbl_803214E8, *(f32 *)(off + *(s32 *)(self + 0x2C) + 20));
    fn_80255360(*(void **)self, buf, strlen(buf));
    sprintf(buf, lbl_803214F4, *(f32 *)(off + *(s32 *)(self + 0x2C) + 24));
    fn_80255360(*(void **)self, buf, strlen(buf));
    sprintf(buf, lbl_8032150C, *(f32 *)(off + *(s32 *)(self + 0x2C) + 28));
    fn_80255360(*(void **)self, buf, strlen(buf));
    sprintf(buf, lbl_80321520, *(s32 *)(off + *(s32 *)(self + 0x2C) + 32));
    fn_80255360(*(void **)self, buf, strlen(buf));
    off = off + *(s32 *)(self + 0x2C);
    sprintf(buf, lbl_80321530, *(s32 *)(off + 36));
    fn_80255360(*(void **)self, buf, strlen(buf));
}
