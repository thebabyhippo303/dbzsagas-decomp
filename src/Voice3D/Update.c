/* Voice3D__Update @ 0x8019C19C (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
void Voice__Update(void *, u32);
M2C_UNK Voice3D__ComputeSpatialization(void *, s32);
s32 Voice__GetGroup(void *);
s32 Sfx3DPlayer__GetEnvironmentSend(s32);
void Voice3D__Update(void *arg0, s32 arg1) {
    s32 v;
    void *temp_r9;
    Voice__Update(arg0, arg1);
    v = M2C_FIELD(arg0, s32 *, 0x20);
    if (v == 1) {
        goto body;
    }
    v = 0;
    goto store;
body:
    Voice3D__ComputeSpatialization(arg0, arg1);
    temp_r9 = M2C_FIELD(arg0, void **, 0x54);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x64)((char *)arg0 + M2C_FIELD(temp_r9, s16 *, 0x60));
    v = arg1 + M2C_FIELD(Sfx3DPlayer__GetEnvironmentSend(Voice__GetGroup(arg0)), s32 *, 0x1C);
store:
    M2C_FIELD(arg0, s32 *, 0x24) = v;
}
