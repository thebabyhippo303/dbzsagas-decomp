/* FileServer__InstallInterruptHandler @ 0x8015D014 (size: 0x48, .text, MWCC GC/1.x (FileServer/MetroTRK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


void __OSMaskInterrupts(unsigned int);
void *__OSSetInterruptHandler(int, void (*)(void));
void __OSUnmaskInterrupts(unsigned int);

void FileServer__InstallInterruptHandler(void) {
    __OSMaskInterrupts(0x18000);
    __OSMaskInterrupts(0x40);
    __OSSetInterruptHandler(0x19, (void (*)(void))0x8015D440);
    __OSUnmaskInterrupts(0x40);
}
