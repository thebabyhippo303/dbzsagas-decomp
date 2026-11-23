/* Stdio__Initialize @ 0x80167E08 (size: 0xB0, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Stdio__Initialize @ 0x80167E08 (0xB0). ProDG -O2. */
#define NULL 0
typedef struct StdioNode {
    struct StdioNode *next;
    int count;
    void *files;
} StdioNode;

extern void Stdio__InitializeFile(void *file, short fd, short mode, int owner);
extern char Stdio__FlushAllFiles[] __attribute__((section(".data")));
extern char lbl_8039E824[] __attribute__((section(".data")));
extern StdioNode lbl_8039EBE4 __attribute__((section(".data")));

void Stdio__Initialize(char *self) {
    char *file0;

    file0 = self + 0x1E4;
    *(void **)(self + 0x3C) = Stdio__FlushAllFiles;
    *(int *)(self + 0x38) = 1;
    Stdio__InitializeFile(file0, 4, 0, (int)self);
    Stdio__InitializeFile(self + 0x244, 9, 1, (int)self);
    Stdio__InitializeFile(self + 0x2A4, 10, 2, (int)self);
    *(void **)(self + 0x1D8) = &lbl_8039EBE4;
    *(int *)(self + 0x1DC) = 3;
    *(void **)(self + 0x1E0) = file0;
    lbl_8039EBE4.next = NULL;
    lbl_8039EBE4.count = 10;
    lbl_8039EBE4.files = lbl_8039E824;
}
