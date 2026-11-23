/* Environment__GetEntityTypeName @ 0x800EA338 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct { s32 name; s32 id; char pad[12]; } EnvEntityType;
extern EnvEntityType lbl_8033B220[];

s32 Environment__GetEntityTypeName(s32 id) {
    EnvEntityType *entry = lbl_8033B220;
    s32 count = 0x52;
    while (count-- > 0) {
        if (entry->id == id) return entry->name;
        entry++;
    }
    return 0;
}