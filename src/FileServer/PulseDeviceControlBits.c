/* FileServer__PulseDeviceControlBits @ 0x8015D4C0 (size: 0x28, .text, MWCC GC/1.x (FileServer/MetroTRK)) - MATCHED */
typedef int s32;
typedef struct { char pad[0x6828]; volatile s32 control; } FileServerRegs;
void FileServer__PulseDeviceControlBits(void) {
    register volatile FileServerRegs *regs = (volatile FileServerRegs *)0xCC000000;
    s32 bits = regs->control & 5;
    s32 count = 6;
    regs->control = bits;
    do { count--; } while (count != 0);
    regs->control = bits | 0xD0;
}
