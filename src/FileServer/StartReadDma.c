/* FileServer__StartReadDma @ 0x8015D62C (size: 0x70, .text, MWCC GC/1.x (FileServer/MetroTRK)) - MATCHED */

typedef unsigned int u32;
typedef int s32;
u32 FileServer__ReadStatusByte(void);
void fn_8015D4C0(void);
void FileServer__StartReadDma(s32 arg0, s32 arg1) {
    volatile u32 *registers;
    u32 bits;
    fn_8015D4C0();
loop0:
    if (FileServer__ReadStatusByte() == 0) goto loop0;
loop1:
    fn_8015D4C0();
    if (FileServer__ReadStatusByte() == 255) goto loop1;
    fn_8015D4C0();
    registers = (volatile u32 *)0xCC000000;
    registers[6667] = (u32)arg0;
    registers[6668] = (u32)arg1;
    bits = 3;
    registers[6669] = bits;
    bits = registers[6666] | 12;
    registers[6666] = bits;
}
