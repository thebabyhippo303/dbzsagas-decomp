/* Stdio__SeekCallback @ 0x8016810C (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Stdio__SeekCallback @ 0x8016810C (0x64). ProDG -O2. */
typedef struct {
    char pad[0xC];
    short flags;
    short fd;
    char pad2[0x58 - 0x10];
    int pos;
    void *desc;
} StdioFile;

extern int Stdio__SeekDescriptor(void *desc, short fd, int offset, int whence);
void Stdio__SeekCallback(StdioFile *file, int offset, int whence) {
    int r = Stdio__SeekDescriptor(file->desc, file->fd, offset, whence);
    if (r == -1) {
        file->flags &= ~0x1000;
    } else {
        file->pos = r;
        file->flags |= 0x1000;
    }
}
