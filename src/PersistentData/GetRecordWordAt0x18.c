/* PersistentData__GetRecordWordAt0x18 @ 0x801276CC (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * PersistentData__GetRecordById(int);
s32 PersistentData__GetRecordWordAt0x18(s32 arg0) {
    return M2C_FIELD(PersistentData__GetRecordById(arg0), s32 *, 0x18);
}
