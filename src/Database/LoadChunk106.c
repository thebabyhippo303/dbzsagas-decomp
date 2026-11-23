/* Database__LoadChunk106 @ 0x8021402C (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef unsigned short u16;
typedef int s32;
void Database__FixupPointerArray(char *base);
void *Database__GetArrayElement(void *array, s32 index);
void fn_80214258(void *elem);
typedef struct { u16 count; } Array;
typedef struct { char pad[2]; u16 flags; void *val; } Rec;
s32 Database__LoadChunk106(Array *array, Rec *rec, void **outArray, void **outVal) {
    unsigned short i;
    Database__FixupPointerArray((char *)array);
    for (i = 0; i < array->count; i++) {
        fn_80214258(Database__GetArrayElement(array, i));
    }
    rec->flags &= ~1;
    *outArray = array;
    *outVal = rec->val;
    return 1;
}
