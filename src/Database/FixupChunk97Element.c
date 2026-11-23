/* Database__FixupChunk97Element @ 0x80213B30 (size: 0x120, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
void *Database__GetArrayElement(void *, s32);
void Database__FixupChunk97Element(void *arg0, void *arg1, s32 *arg2) {
    u16 count1 = M2C_FIELD(arg0, u16 *, 0x28);
    s32 i;
    s32 off;
    s32 *cursor = arg2;
    M2C_FIELD(arg0, s8 *, 0x3C) = 0;
    if (count1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = *cursor;
        i = 0;
        *cursor += (s32)count1 * 4;
        if (i < (s32)M2C_FIELD(arg0, u16 *, 0x28)) {
            off = 0;
            do {
                i += 1;
                *(s32 *)(off + M2C_FIELD(arg0, s32 *, 0x2C)) = (s32)Database__GetArrayElement(arg1, *(s32 *)(off + M2C_FIELD(arg0, s32 *, 0x2C)));
                off += 4;
            } while (i < (s32)M2C_FIELD(arg0, u16 *, 0x28));
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32)count1;
    }
    {
        u16 count2 = M2C_FIELD(arg0, u16 *, 0x2A);
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
        if (count2 != 0) {
            M2C_FIELD(arg0, s32 *, 0x34) = *cursor;
            i = 0;
            *cursor += (s32)count2 * 4;
            if (i < (s32)M2C_FIELD(arg0, u16 *, 0x2A)) {
                off = 0;
                do {
                    i += 1;
                    *(s32 *)(off + M2C_FIELD(arg0, s32 *, 0x34)) = (s32)Database__GetArrayElement(arg1, *(s32 *)(off + M2C_FIELD(arg0, s32 *, 0x34)));
                    off += 4;
                } while (i < (s32)M2C_FIELD(arg0, u16 *, 0x2A));
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x34) = (s32)count2;
        }
    }
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
}
