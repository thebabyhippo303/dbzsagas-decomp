/* Fighter__DestroyShatterPieces @ 0x800F0554 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
extern u8 lbl_80331DA0[] __attribute__((section(".data")));
void ShatterPieces__CallActorLabel(void *, s32, s32, s32);
void AnimScript__DestroyThread(void *, s32);
void EventListener__Destroy(void *, s32);
void Fighter__DestroyShatterPieces(void *arg0, s32 arg1) {
    *(void **)((char *)arg0 + 24) = lbl_80331DA0;
    if (*(void **)((char *)arg0 + 280) != 0) {
        ShatterPieces__CallActorLabel(arg0, 0xFFFF0064, 0, 0);
        AnimScript__DestroyThread((char *)arg0 + 28, 3);
    }
    EventListener__Destroy(arg0, arg1);
}
