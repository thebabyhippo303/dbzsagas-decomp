/* Stdio__CloseCallback @ 0x80168170 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Stdio__CloseCallback @ 0x80168170 (0x28). ProDG -O2. */
typedef struct {
    char pad[0xE];
    short fd;
    char pad2[0x5C - 0x10];
    void *desc;
} StdioFile;

extern void Stdio__CloseDescriptor(void *desc, short fd);

void Stdio__CloseCallback(StdioFile *file) {
    Stdio__CloseDescriptor(file->desc, file->fd);
}
