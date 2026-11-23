/* FileServer__ClearDeviceControlBits @ 0x8015D4AC (size: 0x14, .text, MWCC GC/1.x (FileServer/MetroTRK)) - MATCHED */
typedef int s32;
typedef struct { char pad[0x6828]; volatile s32 control; } FileServerRegs;
void FileServer__ClearDeviceControlBits(void) {
    register volatile FileServerRegs *regs = (volatile FileServerRegs *)0xCC000000;
    register s32 bits = regs->control;
    regs->control = bits & 5;
}
