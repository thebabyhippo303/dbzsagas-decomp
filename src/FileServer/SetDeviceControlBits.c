/* FileServer__SetDeviceControlBits @ 0x8015D494 (size: 0x18, .text, MWCC GC/1.x (FileServer/MetroTRK)) - MATCHED */
typedef int s32;
typedef struct { char pad[0x6828]; volatile s32 control; } FileServerRegs;
s32 FileServer__SetDeviceControlBits(void) {
    s32 value = ((volatile FileServerRegs *)0xCC000000)->control;
    value = (value & 5) | 0xD0;
    ((volatile FileServerRegs *)0xCC000000)->control = value;
    return value;
}
