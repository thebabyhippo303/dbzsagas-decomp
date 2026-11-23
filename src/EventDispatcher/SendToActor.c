/* EventDispatcher__SendToActor @ 0x80251650 (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void EventDispatcher__Send(void *, s32, s32, s32, s32);
extern s32 lbl_803945A4 __attribute__((section(".data")));

void EventDispatcher__SendToActor(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 *arg4) {
    s32 (*fn)(s32 *);
    s32 *gp;
    s32 v;
    s32 e;
    s32 m;
    s32 r;

    if (arg4 == NULL) {
        EventDispatcher__Send(arg0, arg1, arg2, arg3, 0);
        return;
    }
    v = *arg4;
    gp = &lbl_803945A4;
    e = gp[0];
    m = gp[1];
    if ((v & m) == e) {
        EventDispatcher__Send(arg0, arg1, arg2, arg3, (s32)((char *)arg4 + 412));
        return;
    }
    fn = M2C_FIELD(arg0, s32 (**)(s32 *), 0xA4);
    if (fn != NULL) {
        r = fn(arg4);
        if (r != 0) {
            EventDispatcher__Send(arg0, arg1, arg2, arg3, r);
        }
    }
}
