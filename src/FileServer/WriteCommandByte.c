/* FileServer__WriteCommandByte @ 0x8015D53C (size: 0x34, .text, MWCC GC/1.x (FileServer/MetroTRK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_8015D4E8(s32, s32);
void FileServer__WriteCommandByte(s32 arg0) {
    *(s32 *)0xCC006838 = arg0 << 0x18;
    *(s32 *)0xCC006834 = 5;
    fn_8015D4E8(5, -0x34000000);
}
