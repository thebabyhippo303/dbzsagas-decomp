/* LensFlare__Destroy @ 0x8028B8DC (size: 0xD0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void EffectHandle__ReleaseGroup(s32);
void LensFlareElement__Destroy(void *, s32);
void Mem__DeleteArray(void *);
s32 EffectHandle__Release(u32);
void Mem__Delete(void *);
extern M2C_UNK lbl_80350318 __attribute__((section(".data")));
extern M2C_UNK lbl_80350358 __attribute__((section(".data")));

void LensFlare__Destroy(void *arg0, s32 arg1) {
    s32 temp_r3;
    void *temp_r3_2;
    void *temp_r9;
    void *var_r31;

    M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_80350318;
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        EffectHandle__ReleaseGroup(0x44);
    }
    temp_r9 = M2C_FIELD(arg0, void **, 0x28);
    if (temp_r9 != NULL) {
        var_r31 = temp_r9 + (M2C_FIELD(temp_r9, s32 *, -8) * 0x98);
        if (temp_r9 != var_r31) {
            do {
                var_r31 -= 0x98;
                LensFlareElement__Destroy(var_r31, 0);
            } while ((void *) M2C_FIELD(arg0, void **, 0x28) != var_r31);
        }
        Mem__DeleteArray(M2C_FIELD(arg0, void **, 0x28) - 8);
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x34);
    if (temp_r3 != 0) {
        EffectHandle__Release((u32) temp_r3);
    }
    temp_r3_2 = M2C_FIELD(arg0, void **, 0x60);
    if (temp_r3_2 != NULL) {
        Mem__Delete(temp_r3_2);
    }
    M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_80350358;
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}
