/* Database__LoadChunk97 @ 0x80213A60 (size: 0xD0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void *Database__GetObjectName(void *);
void *Database__FindInCurrentFile(s32, void *, s32);
void *Database__GetArrayElement(void *, u32);
void fn_80213B30(void *, void *, void *);

s32 Database__LoadChunk97(u16 *arg0, void *arg1, void **arg2, s32 *arg3) {
    u32 i;
    void *found;
    void *sp8;

    if (M2C_FIELD(arg1, u16 *, 2) & 1) {
        *arg2 = NULL;
        *arg3 = 0;
        return 1;
    }
    i = 0;
    found = Database__FindInCurrentFile(96, Database__GetObjectName(arg1), 0);
    sp8 = Database__GetArrayElement(arg0, *arg0);
    if (i < *arg0) {
        do {
            fn_80213B30(Database__GetArrayElement(arg0, i++), found, &sp8);
        } while (i < *arg0);
    }
    M2C_FIELD(arg1, u16 *, 2) &= (u16)~1;
    *arg2 = arg0;
    *arg3 = M2C_FIELD(arg1, s32 *, 4);
    return 1;
}
