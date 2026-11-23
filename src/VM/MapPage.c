/* VM__MapPage @ 0x802EA69C (size: 0x94, .text, MWCC GC/2.0 (Dolphin SDK VM)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void DCStoreRange(void *, u32);
int OSDisableInterrupts(void);
void OSRestoreInterrupts(int);
void *VM__GetPTEGAddress(u32);
void VM__InvalidateTLBEntry(u32);
void VM__SetFrameOwner(s32, s32);

void VM__MapPage(u32 arg0, s32 arg1, s32 arg2) {
    s32 msr;
    void *pteg;

    pteg = VM__GetPTEGAddress(arg0);
    msr = OSDisableInterrupts();
    M2C_FIELD(pteg, s32 *, 0) = (s32)(((arg0 >> 0x16U) & 0x3F) | 0x80000000);
    M2C_FIELD(pteg, s32 *, 4) = (s32)(arg1 & 0x0FFFF000);
    DCStoreRange(pteg, 8U);
    VM__InvalidateTLBEntry(arg0);
    VM__SetFrameOwner(arg2, (s32)arg0);
    OSRestoreInterrupts(msr);
}
