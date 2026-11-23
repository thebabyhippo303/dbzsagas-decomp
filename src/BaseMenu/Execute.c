/* BaseMenu__Execute @ 0x8026310C (size: 0xE8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 EzString__GetCStr(void *);
void Callback__InvokeFunctionWithArg(void *, s32);
typedef struct { s32 a; s32 b; } Pair;
void Callback__InvokeMethod(s32, Pair *);
void Callback__InvokeMethodWithArg(s32, Pair *, s32);
void Callback__InvokeFunction(s32);
extern void *lbl_803DCE60;

void BaseMenu__Execute(void *arg0) {
    Pair args;
    s32 recv;
    s32 carg;
    M2C_UNK (*temp_r0)(s32, s32);
    s32 temp_r3;
    s32 temp_r3_2;
    void *temp_r3_3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x98);
    lbl_803DCE60 = arg0;
    if (temp_r3 != 0) {
        if ((s16) M2C_FIELD(arg0, s16 *, 0xB2) != 0) {
            args = *(Pair *)((char *)arg0 + 0xB0);
            Callback__InvokeMethod(temp_r3, &args);
        }
        if ((s16) M2C_FIELD(arg0, s16 *, 0xAA) != 0) {
            args = *(Pair *)((char *)arg0 + 0xA8);
            recv = M2C_FIELD(arg0, s32 *, 0x98);
            carg = M2C_FIELD(arg0, s32 *, 0x9C);
            Callback__InvokeMethodWithArg(recv, &args, carg);
        }
    } else {
        temp_r3_2 = M2C_FIELD(arg0, s32 *, 0xA4);
        if (temp_r3_2 != 0) {
            Callback__InvokeFunction(temp_r3_2);
        }
        temp_r3_3 = M2C_FIELD(arg0, void **, 0xA0);
        if (temp_r3_3 != NULL) {
            Callback__InvokeFunctionWithArg(temp_r3_3, M2C_FIELD(arg0, s32 *, 0x9C));
        }
        temp_r0 = M2C_FIELD(arg0, M2C_UNK (**)(s32, s32), 0xB8);
        if (temp_r0 != NULL) {
            temp_r0(M2C_FIELD(arg0, s32 *, 0xBC), M2C_FIELD(arg0, s32 *, 0x9C));
        }
    }
    EzString__GetCStr(arg0 + 0x78);
    if ((void *) lbl_803DCE60 == arg0) {
        lbl_803DCE60 = NULL;
    }
}
