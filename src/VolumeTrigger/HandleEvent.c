/* VolumeTrigger__HandleEvent @ 0x800FEAE0 (size: 0x130, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32;
#define F(e, t, o) (*(t)((char *)(e) + (o)))
s32 Emitter__Deactivate(u32);
s32 Emitter__Activate(u32);
void fn_802CB62C(s32, s32, s32, s32);
int fn_80222E1C(s32);
int fn_80231314(s32);
int fn_80231304(s32);
void VolumeTrigger__HandleEvent(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 z;
    s32 t;

    z = F(F(arg0, void **, 0x84), s32 *, 0xFC);
    if (z != 0) {
        fn_802CB62C((s32) arg0, arg1, arg2, arg3);
        return;
    }
    if (arg1 == 0x2000D) {
        if (F(arg0, s32 *, 0x424) != 0) {
            t = F(arg0, s32 *, 0x42C);
            F(arg0, s32 *, 0x424) = z;
            F(arg0, s32 *, 0x420) = z;
            if (t != 0 && fn_80222E1C(t) != 0) {
                Emitter__Deactivate(F(arg0, u32 *, 0x42C));
            }
            t = F(arg0, s32 *, 0x428);
            if (t != 0 && fn_80222E1C(t) != 0) {
                Emitter__Deactivate(F(arg0, u32 *, 0x428));
            }
            t = F(arg0, s32 *, 0x430);
            if (t != 0) {
                fn_80231314(t);
            }
        }
    } else if (arg1 == 0x2000C) {
        z = F(arg0, s32 *, 0x424);
        if (z == 0) {
            t = F(arg0, s32 *, 0x42C);
            F(arg0, s32 *, 0x424) = 1;
            F(arg0, s32 *, 0x420) = z;
            if (t != 0 && fn_80222E1C(t) == 0) {
                Emitter__Activate(F(arg0, u32 *, 0x42C));
            }
            t = F(arg0, s32 *, 0x428);
            if (t != 0 && fn_80222E1C(t) == 0) {
                Emitter__Activate(F(arg0, u32 *, 0x428));
            }
            t = F(arg0, s32 *, 0x430);
            if (t != 0) {
                fn_80231304(t);
            }
        }
    }
}
