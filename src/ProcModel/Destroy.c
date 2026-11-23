/* ProcModel__Destroy @ 0x8024CFC4 (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__Delete(void *);
M2C_UNK fn_80250B24(s32);
extern M2C_UNK lbl_803479B0 __attribute__((section(".data")));

void ProcModel__Destroy(void *arg0, s32 arg1) {
    void *temp_r29;
    void *temp_r31;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;

    temp_r31 = M2C_FIELD(arg0, void **, 0x14);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_803479B0;
    if (temp_r31 != NULL) {
        temp_r3 = M2C_FIELD(temp_r31, void **, 0);
        if (temp_r3 != NULL) {
            Mem__Delete(temp_r3);
        }
        temp_r3_2 = M2C_FIELD(temp_r31, void **, 0x18);
        M2C_FIELD(temp_r31, s32 *, 4) = 0;
        temp_r29 = temp_r31 + 0x18;
        M2C_FIELD(temp_r31, s32 *, 8) = 0;
        M2C_FIELD(temp_r31, void **, 0) = NULL;
        if (temp_r3_2 != NULL) {
            Mem__Delete(temp_r3_2);
        }
        M2C_FIELD(temp_r29, s32 *, 4) = 0;
        M2C_FIELD(temp_r29, s32 *, 8) = 0;
        M2C_FIELD(temp_r31, void **, 0x18) = NULL;
        fn_80250B24((s32) temp_r31);
        temp_r3_3 = M2C_FIELD(temp_r31, void **, 0x18);
        if (temp_r3_3 != NULL) {
            Mem__Delete(temp_r3_3);
        }
        temp_r3_4 = M2C_FIELD(temp_r31, void **, 0);
        if (temp_r3_4 != NULL) {
            Mem__Delete(temp_r3_4);
        }
        Mem__Delete(temp_r31);
    }
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}
