/* CmdCon__GetOrCreateContext @ 0x8018C3E0 (size: 0xD8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 CmdCon__FindContext(s32, s32);
void *Mem__New(s32);
s32 CmdCon__AddContext(void *, s32);
s32 VariableContext__Construct(void *, u8 *, s32);
void VariableContext__Destroy(s32, s32);

s32 CmdCon__GetOrCreateContext(u8 *arg0, u8 *arg1) {
    s32 *p;
    s32 cnt;
    s32 ctx;
    void *list;

    if (arg1 == NULL) {
        list = M2C_FIELD(arg0, void **, 8);
        cnt = M2C_FIELD(list, s32 *, 4);
        if (((s32) arg1 >= cnt) || (cnt == 0)) {
            p = NULL;
        } else {
            p = M2C_FIELD(list, s32 **, 0);
        }
        ctx = *p;
    } else if (*arg1 == 0) {
        ctx = M2C_FIELD(arg0, s32 *, 0x10);
    } else {
        ctx = CmdCon__FindContext((s32) arg0, (s32) arg1);
    }
    if (ctx != 0) {
        return ctx;
    }
    ctx = VariableContext__Construct(Mem__New(0x34), arg1, 0);
    if (CmdCon__AddContext(arg0, ctx) == 0) {
        if (ctx != 0) {
            VariableContext__Destroy(ctx, 3);
        }
        return 0;
    }
    return ctx;
}
