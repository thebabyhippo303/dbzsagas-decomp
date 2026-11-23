/* FileStream__CloseSlot @ 0x8017F818 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
void DvdFile__Close(s32);
void memFree(void *);
void FileStream__CloseSlot(void *arg0) {
    s32 state = *(s32 *)arg0;
    switch (state) {
    case 0:
        break;
    case 17:
        DvdFile__Close(*(s32 *)((char *)arg0 + 0xC));
        goto clear;
    case 18:
    case 19:
        goto clear;
    case 33:
        memFree(*(void **)((char *)arg0 + 0x10));
        goto clear;
    default:
        goto clear;
    }
    return;
clear:
    *(s32 *)arg0 = 0;
}
