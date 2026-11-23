/* EzString__AssignN @ 0x802703B4 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 EzString__StrLen(char *);
void * memcpy(void *, const void *, unsigned int);
void EzString__AssignN(void *arg0, s8 *arg1, s32 arg2) {
    void *temp_r9;
    void *temp_r9_2;

    if (EzString__StrLen(arg1) < arg2) {
        temp_r9 = M2C_FIELD(arg0, void **, 8);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s8 *), 0xC4)(arg0 + M2C_FIELD(temp_r9, s16 *, 0xC0), arg1);
        return;
    }
    if (arg2 > (s32) M2C_FIELD(arg0, s32 *, 0)) {
        temp_r9_2 = M2C_FIELD(arg0, void **, 8);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, s32), 0x14)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0x10), arg2);
    }
    memcpy(M2C_FIELD(arg0, void **, 4), arg1, (u32) arg2);
}
