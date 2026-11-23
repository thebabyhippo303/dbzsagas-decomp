/* Database__RegisterRecordByPath @ 0x802041B4 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 Database__FindRecordByPath(s32, char *);
int strlen(const char *);
void *MemHeap__Alloc(u32, u32);
char *strcpy(char *, const char *);
s32 Database__RegisterRecord(s32, s32, char *, s32, s32, s32, s32);

s32 Database__RegisterRecordByPath(s32 arg0, s32 arg1, char *arg2) {
    char *copy;

    if (Database__FindRecordByPath(arg1, arg2) != 0)
        return 1;
    copy = MemHeap__Alloc(strlen(arg2) + 1, 8);
    strcpy(copy, arg2);
    return Database__RegisterRecord(arg0, arg1, copy, 0xFFFD, 1, 0, strlen(arg2) + 1);
}
