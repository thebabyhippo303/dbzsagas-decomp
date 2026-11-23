/* Voice3D__Construct @ 0x8019BE0C (size: 0xF0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
M2C_UNK Voice__Construct();
s32 Voice__GetGroup(void *);
s32 Sfx3DPlayer__GetEnvironmentSend(s32);
f32 Sound3DParams__GetEffectSendA(void *);
f32 Sound3DParams__GetEffectSendB(void *);
extern f32 lbl_8033FB88 __attribute__((section(".data")));
extern f32 lbl_8033FB8C __attribute__((section(".data")));
extern M2C_UNK lbl_80340208 __attribute__((section(".data")));
void *Voice3D__Construct(void *arg0) {
    f32 c;
    f32 c2;
    void *temp_r10;
    void *temp_r7;
    void *temp_r8;
    void *temp_r9;
    Voice__Construct();
    temp_r10 = (char *)arg0 + 0x58;
    M2C_FIELD(arg0, M2C_UNK **, 0x54) = &lbl_80340208;
    temp_r8 = (char *)arg0 + 0x64;
    temp_r9 = (char *)arg0 + 0x78;
    c = lbl_8033FB88;
    temp_r7 = (char *)arg0 + 0x84;
    M2C_FIELD(arg0, f32 *, 0x58) = c;
    M2C_FIELD(temp_r10, f32 *, 4) = c;
    M2C_FIELD(temp_r10, f32 *, 8) = c;
    M2C_FIELD(arg0, f32 *, 0x64) = c;
    M2C_FIELD(temp_r8, f32 *, 4) = c;
    M2C_FIELD(temp_r8, f32 *, 8) = c;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(arg0, f32 *, 0x78) = c;
    M2C_FIELD(temp_r9, f32 *, 4) = c;
    M2C_FIELD(temp_r9, f32 *, 8) = c;
    M2C_FIELD(arg0, f32 *, 0x84) = c;
    M2C_FIELD(temp_r7, f32 *, 4) = c;
    M2C_FIELD(temp_r7, f32 *, 8) = c;
    c2 = lbl_8033FB8C;
    M2C_FIELD(arg0, f32 *, 0x98) = c;
    M2C_FIELD(arg0, f32 *, 0x9C) = c;
    M2C_FIELD(arg0, f32 *, 0xA0) = c;
    M2C_FIELD(arg0, f32 *, 0xA4) = c;
    M2C_FIELD(arg0, f32 *, 0xA8) = c2;
    M2C_FIELD(arg0, f32 *, 0xAC) = c2;
    M2C_FIELD(arg0, s32 *, 0xB0) = 1;
    M2C_FIELD(arg0, f32 *, 0x38) = Sound3DParams__GetEffectSendA(Sfx3DPlayer__GetEnvironmentSend(Voice__GetGroup(arg0)));
    M2C_FIELD(arg0, f32 *, 0x3C) = Sound3DParams__GetEffectSendB(Sfx3DPlayer__GetEnvironmentSend(Voice__GetGroup(arg0)));
    M2C_FIELD(arg0, f32 *, 0x90) = c;
    M2C_FIELD(arg0, f32 *, 0x94) = c;
    return arg0;
}
