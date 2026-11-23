/* CActor__SetPositionAndOrientation @ 0x801DCA9C (size: 0xE8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern f32 lbl_80343B70 __attribute__((section(".data")));

void CActor__SetPositionAndOrientation(void *arg0, void *arg1, void *arg2) {
    f32 temp_f12;
    f32 zero;
    f32 temp_f13;
    s32 temp_r8;
    s32 temp_r0;
    s32 temp_r10_c;
    void *temp_r10;
    register void *temp_r10_b;
    void *temp_r11;
    void *temp_r7;
    void *temp_r9;
    void *temp_r9_3;

    temp_r0 = M2C_FIELD(arg1, s32 *, 0);
    temp_r8 = M2C_FIELD(arg1, s32 *, 4);
    temp_r10_c = M2C_FIELD(arg1, s32 *, 8);
    temp_r11 = arg0 + 0x38;
    temp_r9 = arg0 + 0x44;
    M2C_FIELD(arg0, s32 *, 0x38) = temp_r0;
    temp_r7 = arg0 + 0x68;
    M2C_FIELD(temp_r11, s32 *, 4) = temp_r8;
    temp_r10 = arg0 + 0x74;
    M2C_FIELD(temp_r11, s32 *, 8) = temp_r10_c;
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(arg2, f32 *, 0);
    M2C_FIELD(temp_r9, f32 *, 4) = (f32) M2C_FIELD(arg2, f32 *, 4);
    M2C_FIELD(temp_r9, f32 *, 8) = (f32) M2C_FIELD(arg2, f32 *, 8);
    M2C_FIELD(temp_r9, f32 *, 0xC) = (f32) M2C_FIELD(arg2, f32 *, 0xC);
    M2C_FIELD(temp_r9, f32 *, 0x10) = (f32) M2C_FIELD(arg2, f32 *, 0x10);
    M2C_FIELD(temp_r9, f32 *, 0x14) = (f32) M2C_FIELD(arg2, f32 *, 0x14);
    M2C_FIELD(temp_r9, f32 *, 0x18) = (f32) M2C_FIELD(arg2, f32 *, 0x18);
    temp_f13 = M2C_FIELD(arg2, f32 *, 0x1C);
    M2C_FIELD(temp_r9, f32 *, 0x1C) = temp_f13;
    temp_f12 = M2C_FIELD(arg2, f32 *, 0x20);
    M2C_FIELD(temp_r9, f32 *, 0x20) = temp_f12;
    zero = lbl_80343B70;
    M2C_FIELD(arg0, f32 *, 0x68) = zero;
    M2C_FIELD(temp_r7, f32 *, 4) = zero;
    M2C_FIELD(temp_r7, f32 *, 8) = zero;
    M2C_FIELD(arg0, f32 *, 0x74) = zero;
    M2C_FIELD(temp_r10, f32 *, 4) = zero;
    M2C_FIELD(temp_r10, f32 *, 8) = zero;
    temp_r10_b = M2C_FIELD(arg0, void **, 0x34);
    M2C_FIELD(temp_r10_b, M2C_UNK (**)(void *), 0x94)(arg0 + M2C_FIELD(temp_r10_b, s16 *, 0x90));
    temp_r9_3 = M2C_FIELD(arg0, void **, 0x34);
    M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *), 0xAC)(arg0 + M2C_FIELD(temp_r9_3, s16 *, 0xA8));
}
