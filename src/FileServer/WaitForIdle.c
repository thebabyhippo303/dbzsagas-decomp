/* FileServer__WaitForIdle @ 0x8015D4E8 (size: 0x14, .text, MWCC GC/1.x (FileServer/MetroTRK)) - MATCHED */
typedef unsigned int u32;

typedef struct {
    char pad[0x6834];
    volatile u32 status;
} FileServerRegs;

void FileServer__WaitForIdle(void) {
    while (((FileServerRegs *)0xCC000000)->status & 1) {
    }
}
