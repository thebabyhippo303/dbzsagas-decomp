/* FileServer__ReadStatusByte @ 0x8015D4FC (size: 0x40, .text, MWCC GC/1.x (FileServer/MetroTRK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_8015D4E8(void);

typedef struct {
    char pad[0x6834];
    volatile u32 command;
    volatile u32 status;
} FileServerRegs;
#define FILESERVER_REGS ((volatile FileServerRegs *)0xCC000000)

u32 FileServer__ReadStatusByte(void) {
    FILESERVER_REGS->status = 0;
    FILESERVER_REGS->command = 1;
    fn_8015D4E8();
    return M2C_FIELD((volatile char *)0xCC000000, volatile u32 *, 0x6838) >> 0x18U;
}
