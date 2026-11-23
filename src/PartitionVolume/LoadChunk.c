/* PartitionVolume__LoadChunk @ 0x80214940 (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

void Database__FixupPointerArray(char *);
void *Database__GetObjectName(void *);
void *Database__FindInCurrentFile(s32, void *, s32);
void *Database__GetArrayElement(void *, s32);
void PartitionVolume__Fixup(void *, void *, void *);

s32 PartitionVolume__LoadChunk(s8 *arg0, void *arg1, s8 **arg2, s32 *arg3) {
    s32 i;
    void *found;

    found = Database__FindInCurrentFile(104, Database__GetObjectName(arg1), 0);
    if (found == NULL) {
        return 0;
    }
    Database__FixupPointerArray((char *)arg0);
    for (i = 0; i < *(u16 *)arg0; i++) {
        PartitionVolume__Fixup(Database__GetArrayElement(arg0, i), found, arg0);
    }
    M2C_FIELD(arg1, u16 *, 2) &= (u16)~1;
    *arg2 = arg0;
    *arg3 = M2C_FIELD(arg1, s32 *, 4);
    return 1;
}
