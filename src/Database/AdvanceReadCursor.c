/* Database__AdvanceReadCursor @ 0x8020635C (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef unsigned short u16;
typedef struct {
    char pad[0x4E];
    u16 flag;
    int n;
} ReadCursorState;
extern ReadCursorState lbl_803ADBE4;
void Database__DiscardBufferBytes(int);
void Database__ConsumeBufferBytes(int);
void Database__AdvanceReadCursor(void) {
    if (lbl_803ADBE4.flag & 1)
        Database__DiscardBufferBytes(lbl_803ADBE4.n);
    else
        Database__ConsumeBufferBytes(lbl_803ADBE4.n);
}
