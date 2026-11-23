/* DvdFile__Open @ 0x801808E0 (size: 0xC8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    char pad0[0x14 - 0xC];
    s32 f14;
    s32 f18;
    char pad1[0x54 - 0x1C];
    void *f54;
    char pad2[0x5C - 0x58];
    s32 f5C;
    char pad3[0x70 - 0x60];
    s32 f70;
} DvdFile;

DvdFile *DvdFile__Create(void);
void DvdFile__Destroy(DvdFile *);
s32 DVDFastOpen(s32, void *);
s32 DVDConvertPathToEntrynum(char *);
void Open(char *);
extern s32 lbl_803DCB70 __attribute__((section(".sdata")));

s32 DvdFile__Open(char *path, DvdFile **out, s32 arg2) {
    s32 zero = 0;
    DvdFile *file;
    s32 entry;
    s32 ok;

    lbl_803DCB70 = zero;
    *out = (DvdFile *)zero;
    file = DvdFile__Create();
    if (out != 0) {
        file->f4 = zero;
        file->f14 = zero;
        file->f18 = zero;
        file->f0 = arg2;
        file->f70 = -1;
        entry = DVDConvertPathToEntrynum(path);
        if (entry != -1) {
            ok = DVDFastOpen(entry, (char *)file + 0x28) != 0;
        } else {
            ok = 0;
        }
        if (ok != 0) {
            file->f54 = file;
            file->f8 = file->f5C;
            *out = file;
            Open(path);
            return 1;
        }
        DvdFile__Destroy(file);
    }
    lbl_803DCB70 = 1;
    return 0;
}
