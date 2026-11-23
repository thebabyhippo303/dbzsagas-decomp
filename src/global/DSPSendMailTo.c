/* DSPSendMailTo @ 0x802D7F34 (size: 0x14, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct {
    char pad[0x5000];
    volatile u16 high;
    volatile u16 low;
} DSPRegisters;
void DSPSendMailTo(u16 arg0) {
    register volatile DSPRegisters *dsp = (volatile DSPRegisters *)0xCC000000;
    dsp->high = (u16)((u32)arg0 >> 16);
    dsp->low = arg0;
}
