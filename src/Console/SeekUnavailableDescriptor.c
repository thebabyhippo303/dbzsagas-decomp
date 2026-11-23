/* Console__SeekUnavailableDescriptor @ 0x8015CE90 (size: 0x4, .text, MWCC GC/1.x (FileServer/MetroTRK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK FileServer__ReportUnavailable();            /* extern */

int Console__SeekUnavailableDescriptor(void) {
    return FileServer__ReportUnavailable();
}
