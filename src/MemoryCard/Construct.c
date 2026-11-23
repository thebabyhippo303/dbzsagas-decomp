/* MemoryCard__Construct @ 0x801D6F2C (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

char * Mem__NewArray(s32);
void Mem__SetNextAllocAlignment(u32);
void memset(void *, int, u32);
M2C_UNK StorageDevice__Construct();                 /* extern */
extern M2C_UNK lbl_80342FE0 __attribute__((section(".data")));

void *MemoryCard__Construct(void *arg0) {
    s8 *temp_r3;

    StorageDevice__Construct();
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = &lbl_80342FE0;
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (arg0 + 0x31);
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (arg0 + 0x10);
    Mem__SetNextAllocAlignment(0x20U);
    temp_r3 = Mem__NewArray(0x14000);
    M2C_FIELD(arg0, s8 **, 0x54) = temp_r3;
    M2C_FIELD(arg0, s8 **, 0x58) = (s8 *) (temp_r3 + 0xA000);
    Mem__SetNextAllocAlignment(0x20U);
    M2C_FIELD(arg0, s8 **, 0x68) = Mem__NewArray(0x10000);
    memset(arg0 + 0xF4, 0x20, 0x20U);
    M2C_FIELD(arg0, s32 *, 0x114) = 0;
    return arg0;
}
