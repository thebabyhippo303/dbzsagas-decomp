/* Simple__SendCollisionEvents @ 0x802CB4A0 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void EventDispatcher__Send(void *, int, void *, int, int);
void EventDispatcher__SendToActor(void *, int, void *, int, int);
extern char lbl_803B1DDC[];
extern int lbl_803DCF20;
extern int lbl_803DCF24;

void Simple__SendCollisionEvents(int arg0, int arg1, int arg2, int arg3, int arg4) {
    int sp8[3];

    sp8[0] = arg1;
    sp8[1] = arg2;
    sp8[2] = arg3;
    EventDispatcher__Send(&lbl_803B1DDC, lbl_803DCF20, sp8, arg4, arg0 + 0x19C);
    if (arg4 != 0) {
        EventDispatcher__SendToActor(&lbl_803B1DDC, lbl_803DCF24, sp8, arg0, arg4);
    }
}
