/* Mover__Destroy @ 0x802B54A4 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void ControlSurface__Destroy(void *, s32);
void Mem__Delete(void *);
void Actor__Destroy(char *, s32);
extern M2C_UNK lbl_80353700 __attribute__((section(".data")));
extern M2C_UNK lbl_803537D0 __attribute__((section(".data")));
extern M2C_UNK lbl_803537F0 __attribute__((section(".data")));
extern M2C_UNK lbl_80353898 __attribute__((section(".data")));

void Mover__Destroy(s8 *arg0, s32 arg1) {
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x590);
    M2C_FIELD(arg0, M2C_UNK **, 0x198) = &lbl_803537F0;
    M2C_FIELD(arg0, M2C_UNK **, 0x1B4) = &lbl_803537D0;
    M2C_FIELD(arg0, M2C_UNK **, 0x4C8) = &lbl_80353700;
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = &lbl_80353898;
    if (temp_r3 != NULL) {
        ControlSurface__Destroy(temp_r3, 3);
    }
    temp_r3_2 = M2C_FIELD(arg0, void **, 0x5A0);
    if (temp_r3_2 != NULL) {
        Mem__Delete(temp_r3_2);
    }
    temp_r3_3 = M2C_FIELD(arg0, void **, 0x5C0);
    if (temp_r3_3 != NULL) {
        Mem__Delete(temp_r3_3);
    }
    Actor__Destroy(arg0, arg1);
}
