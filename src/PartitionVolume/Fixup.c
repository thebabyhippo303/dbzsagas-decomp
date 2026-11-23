/* PartitionVolume__Fixup @ 0x80213760 (size: 0xDC, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

void *Database__GetArrayElement(void *, s32);
void *Mem__New(u32);
void *OrientedBox__Construct(void *, s32, s32, s32);
s32 PartitionVolume__Fixup(void *arg0, void *arg1, void *arg2) {
    u32 i;
    u32 lim1;
    u32 lim2;
    void *a2;
    void *p;
    void *p84;
    void *p60;
    void *p120;
    u8 *cur;
    i = 0;
    lim1 = M2C_FIELD(arg0, u32 *, 0x88);
    a2 = arg2;
    p = M2C_FIELD(arg1, void **, 4);
    if (i < lim1) {
        do {
            i += 1;
            p = M2C_FIELD(p, void **, 8);
        } while (i < lim1);
    }
    lim2 = M2C_FIELD(arg0, u32 *, 0x90);
    i = 0;
    M2C_FIELD(arg0, void **, 0x88) = p;
    p84 = (char *)arg0 + 84;
    p120 = (char *)arg0 + 120;
    p60 = (char *)arg0 + 60;
    if (i < lim2) {
        cur = (u8 *)arg0 + 148;
        do {
            i += 1;
            *(void **)cur = Database__GetArrayElement(a2, *(s32 *)cur);
            cur += 8;
        } while (i < M2C_FIELD(arg0, u32 *, 0x90));
    }
    M2C_FIELD(arg0, void **, 0x38) = OrientedBox__Construct(Mem__New(40), (s32)p84, (s32)p120, (s32)p60);
    if ((s32)M2C_FIELD(arg0, s32 *, 0x8C) == -1) {
        M2C_FIELD(arg0, s32 *, 0x84) = M2C_FIELD(arg0, s32 *, 0x84) | 4;
    } else {
        M2C_FIELD(arg0, s32 *, 0x84) = M2C_FIELD(arg0, s32 *, 0x84) & 0xFFFFFFFB;
    }
    return 1;
}
