/* FileServer__InstallDmaInterruptHandler @ 0x8015E204 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
int OSDisableInterrupts(void);
void OSRestoreInterrupts(int);
void __OSUnmaskInterrupts(unsigned int);
void *__OSSetInterruptHandler(int, void (*)(void));
extern void FileServer__DmaInterruptHandler(void);

void FileServer__InstallDmaInterruptHandler(void) {
    int level;
    volatile unsigned int *reg;

    level = OSDisableInterrupts();
    __OSSetInterruptHandler(16, FileServer__DmaInterruptHandler);
    __OSUnmaskInterrupts(0x8000);
    reg = (volatile unsigned int *)0xCC006828;
    *reg |= 8;
    *reg &= 0xFFFFFFFB;
    OSRestoreInterrupts(level);
}
