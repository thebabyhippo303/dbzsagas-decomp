/* SecondaryModel__Destroy @ 0x8020A54C (size: 0x148, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void SoftBodyParams__Release(void *);
void Mem__DeleteArray(void *);
void SwooshStreak__DestroyResource(void *, u32);
void Mem__Delete(void *);
extern M2C_UNK lbl_803470D0 __attribute__((section(".data")));
extern M2C_UNK lbl_80347118 __attribute__((section(".data")));

void SecondaryModel__Destroy(void *arg0, s32 arg1) {
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *var_r31;
    void *var_r31_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &lbl_803470D0;
    SoftBodyParams__Release(arg0);
    temp_r3 = M2C_FIELD(arg0, void **, 0x24);
    if (temp_r3 != NULL) {
        Mem__DeleteArray(temp_r3);
    }
    temp_r3_2 = M2C_FIELD(arg0, void **, 0x20);
    if (temp_r3_2 != NULL) {
        Mem__DeleteArray(temp_r3_2);
    }
    temp_r3_3 = M2C_FIELD(arg0, void **, 0x1C);
    if (temp_r3_3 != NULL) {
        Mem__DeleteArray(temp_r3_3);
    }
    temp_r3_4 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r3_4 != NULL) {
        Mem__DeleteArray(temp_r3_4);
    }
    temp_r3_5 = M2C_FIELD(arg0, void **, 0x10);
    if (temp_r3_5 != NULL) {
        Mem__DeleteArray(temp_r3_5);
    }
    temp_r9 = M2C_FIELD(arg0, void **, 0x18);
    if (temp_r9 != NULL) {
        var_r31 = temp_r9 + (M2C_FIELD(temp_r9, s32 *, -8) * 0x1C);
        if (temp_r9 != var_r31) {
            do {
                var_r31 -= 0x1C;
                temp_r9_2 = M2C_FIELD(var_r31, void **, 0x18);
                M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0xC)(var_r31 + M2C_FIELD(temp_r9_2, s16 *, 8), 0);
            } while ((void *) M2C_FIELD(arg0, void **, 0x18) != var_r31);
        }
        Mem__DeleteArray(M2C_FIELD(arg0, void **, 0x18) - 8);
    }
    temp_r9_3 = M2C_FIELD(arg0, void **, 0x14);
    if (temp_r9_3 != NULL) {
        var_r31_2 = temp_r9_3 + (M2C_FIELD(temp_r9_3, s32 *, -8) * 4);
        if (temp_r9_3 != var_r31_2) {
            do {
                var_r31_2 -= 4;
                SwooshStreak__DestroyResource(var_r31_2, 0U);
            } while ((void *) M2C_FIELD(arg0, void **, 0x14) != var_r31_2);
        }
        Mem__DeleteArray(M2C_FIELD(arg0, void **, 0x14) - 8);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &lbl_80347118;
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}
