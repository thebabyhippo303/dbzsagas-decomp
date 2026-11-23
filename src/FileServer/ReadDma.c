/* FileServer__ReadDma @ 0x8015D69C (size: 0x68, .text, MWCC GC/1.x (FileServer/MetroTRK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

u32 FileServer__ReadStatusByte(void);
M2C_UNK fn_8015D4C0();                              /* extern */
M2C_UNK fn_8015D4E8(M2C_UNK);                       /* extern */

void FileServer__ReadDma(s32 arg0, s32 arg1) {
    volatile u32 *registers;
    fn_8015D4C0();
    do {

    } while (FileServer__ReadStatusByte() == 0);
    do {
        fn_8015D4C0();
    } while (FileServer__ReadStatusByte() == 0xFF);
    fn_8015D4C0();
    registers = (volatile u32 *)0xCC000000;
    registers[6667] = (u32)arg0;
    registers[6668] = (u32)arg1;
    registers[6669] = 3;
    fn_8015D4E8(3);
}
