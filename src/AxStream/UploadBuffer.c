/* AxStream__UploadBuffer @ 0x801980AC (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK fn_802D5250(s32, s32);
M2C_UNK fn_802D233C(s32, s32, s32, s32, s32, s32, s32, s32);
extern M2C_UNK AxStream__OnUploadComplete __attribute__((section(".data")));

void AxStream__UploadBuffer(char *arg0) {
    s16 v[3];
    void *temp_r30;
    void *temp_r9;

    temp_r30 = M2C_FIELD(arg0, void **, 0x8C);
    if (arg0 == (s32) (temp_r30 + 0x30)) {
        v[0] = (s16) *M2C_FIELD(arg0, u8 **, 0x3C);
        v[1] = 0;
        v[2] = 0;
        fn_802D5250(M2C_FIELD(temp_r30, s32 *, 0x1C0), (s32) v);
    }
    if ((s32) M2C_FIELD(arg0, u32 *, 0x6C) == 0) {
        temp_r9 = M2C_FIELD(temp_r30, void **, 0x28);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0x1C)(temp_r30 + M2C_FIELD(temp_r9, s16 *, 0x18), 0);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x88) = 1;
    fn_802D233C((s32) (arg0 + 0x40), (s32) arg0, 0, 1, (s32) M2C_FIELD(arg0, u8 **, 0x3C), M2C_FIELD(arg0, s32 *, 0x68), 0x4000, (s32) &AxStream__OnUploadComplete);
}
