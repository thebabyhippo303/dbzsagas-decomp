/* FileServer__SendBufferLength @ 0x8015D704 (size: 0x64, .text, MWCC GC/1.x (FileServer/MetroTRK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * FileServer__PulseDeviceControlBits(void);
u32 FileServer__ReadStatusByte(void);
s32 FileServer__SetDeviceControlBits(void);
void FileServer__WriteCommandByte(s32);
void FileServer__SendBufferLength(s32 arg0) {
    FileServer__SetDeviceControlBits();
    if (FileServer__ReadStatusByte() == 0) {
        do {
    
        } while (FileServer__ReadStatusByte() == 0);
    }
    do {
        FileServer__PulseDeviceControlBits();
    } while (FileServer__ReadStatusByte() == 0xFF);
    FileServer__WriteCommandByte(3);
    FileServer__WriteCommandByte(arg0);
    FileServer__WriteCommandByte((s32) (arg0 >> 8U));
    FileServer__PulseDeviceControlBits();
}
