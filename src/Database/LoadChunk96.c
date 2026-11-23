/* Database__LoadChunk96 @ 0x80207E30 (size: 0x120, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;

void Database__FixupPointerArray(char *);
void *Database__GetObjectName(void *);
void *Database__FindInCurrentFile(s32, void *, s32);
void *Database__GetArrayElement(void *, u32);
void fn_80207A08(void *, void *, void *, void *);
s32 IdGenerator__Allocate(void *);
extern char lbl_803AD8D8[];

s32 Database__LoadChunk96(s8 *arg0, void *arg1, s8 **arg2, s32 *arg3) {
    u16 i;
    void *found;
    void *fourth;
    void *elem;

    Database__FixupPointerArray((char *)arg0);
    found = Database__FindInCurrentFile(34, Database__GetObjectName(arg1), 0);
    if (found == NULL) {
        found = Database__FindInCurrentFile(35, Database__GetObjectName(arg1), 0);
        if (found == NULL) {
            found = Database__FindInCurrentFile(40, Database__GetObjectName(arg1), 0);
        }
    }
    fourth = Database__FindInCurrentFile(98, Database__GetObjectName(arg1), 0);
    i = 0;
    if (i < *(u16 *)arg0) {
        do {
            elem = Database__GetArrayElement(arg0, i);
            fn_80207A08(elem, arg0, found, fourth);
            *(s32 *)((char *)elem + 0x9C) = IdGenerator__Allocate(lbl_803AD8D8);
            i++;
        } while (i < *(u16 *)arg0);
    }
    *(u16 *)((char *)arg1 + 2) &= (u16)~1;
    *arg2 = arg0;
    *arg3 = *(s32 *)((char *)arg1 + 4);
    return 1;
}
