/* Stdio__ConfigureBuffer @ 0x80167F60 (size: 0xD8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef short s16;
typedef unsigned short u16;
typedef struct StatBuf { s32 a; s32 mode; char pad[0x38]; } StatBuf;
typedef struct File {
    char *cur;
    char pad0[0xC - 4];
    u16 flags;
    s16 fd;
    char *buf;
    s32 bufsize;
    char pad1[0x28 - 0x18];
    void *seekfn;
    char pad2[0x4A - 0x2C];
    char small[1];
} File;

s32 Stdio__OpenDescriptor(void *, s32, StatBuf *);
extern char Stdio__SeekCallback[] __attribute__((section(".data")));

void Stdio__ConfigureBuffer(File *f) {
    StatBuf st;
    if (f->flags & 2) {
        f->cur = f->small;
        f->buf = f->small;
        f->bufsize = 1;
        return;
    }
    if (f->fd >= 0 && Stdio__OpenDescriptor(*(void **)((char *)f + 0x5C), f->fd, &st) >= 0 &&
        (st.mode & 0xF000) == 0x8000 && f->seekfn == Stdio__SeekCallback) {
        f->flags = f->flags | 0x400;
        *(s32 *)((char *)f + 0x54) = 0x400;
    } else {
        f->flags = f->flags | 0x800;
    }
    f->bufsize = 1;
    f->cur = f->small;
    f->buf = f->small;
    f->flags = f->flags | 2;
}
