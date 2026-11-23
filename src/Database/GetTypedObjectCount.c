/* Database__GetTypedObjectCount @ 0x8020385C (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void *Database__GetTypedObject(int, char *, void *, int);
s32 Database__GetTypedObjectCount(void *arg0, s32 type, void *arg2) {
    void *o = Database__GetTypedObject(type & 0xFFFF, (char *)arg2, arg0, 0);
    s32 r;
    if (o != NULL) {
        goto has;
    }
    r = 0;
    goto done;
has:
    r = M2C_FIELD(o, u16 *, 0);
done:
    return r;
}
