/* FileServer__ReportCommunicationError @ 0x8015B02C (size: 0x28, .text, MWCC GC/1.x (FileServer/MetroTRK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK FileServer__SendDebugMessage();             /* extern */
M2C_UNK OSReport();                                 /* extern */

void FileServer__ReportCommunicationError(void) {
    if ((s32) M2C_FIELD(saved_reg_r31, s32 *, 0x6D0) == 0) {
        OSReport();
        return;
    }
    FileServer__SendDebugMessage();
}
