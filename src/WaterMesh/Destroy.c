/* WaterMesh__Destroy @ 0x80279DF8 (size: 0x160, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void SceneMgr__DetachInstance(void *, u32);
void Mem__DeleteArray(void *);
void NoiseTable__Destroy(void *, s32);
void ProcModel__Destroy(void *, s32);
void SwooshStreak__DestroyResource(void *, u32);
void Mem__Delete(void *);
void memFree(void *);
extern M2C_UNK lbl_80347118 __attribute__((section(".data")));
extern M2C_UNK lbl_803505C8 __attribute__((section(".data")));

void WaterMesh__Destroy(void *arg0, s32 arg1) {
    void *temp_r0;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r3_6;
    void *temp_r3_7;
    void *temp_r3_8;
    void *var_r31;
    void *tail114;

    temp_r3 = M2C_FIELD(arg0, void **, 0x8C);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &lbl_803505C8;
    if (temp_r3 != NULL) {
        SceneMgr__DetachInstance(temp_r3, 0U);
    }
    temp_r3_2 = M2C_FIELD(arg0, void **, 0x90);
    if (temp_r3_2 != NULL) {
        Mem__DeleteArray(temp_r3_2);
    }
    temp_r3_3 = M2C_FIELD(arg0, void **, 0x370);
    if (temp_r3_3 != NULL) {
        Mem__DeleteArray(temp_r3_3);
    }
    temp_r3_4 = M2C_FIELD(arg0, void **, 0x8C);
    if (temp_r3_4 != NULL) {
        temp_r3_5 = M2C_FIELD(temp_r3_4, void **, 4);
        if (temp_r3_5 != NULL) {
            memFree(temp_r3_5);
        }
    }
    temp_r3_6 = M2C_FIELD(arg0, void **, 0xCC);
    if (temp_r3_6 != NULL) {
        memFree(temp_r3_6);
    }
    temp_r3_7 = M2C_FIELD(arg0, void **, 0x8C);
    if (temp_r3_7 != NULL) {
        memFree(temp_r3_7);
    }
    temp_r3_8 = M2C_FIELD(arg0, void **, 0x11C);
    if (temp_r3_8 != NULL) {
        memFree(temp_r3_8);
    }
    tail114 = arg0 + 0x114;
    if (arg0 + 0x124 != NULL) {
        var_r31 = arg0 + 0x364;
        if (arg0 + 0x124 != var_r31) {
            do {
                var_r31 -= 0x60;
                NoiseTable__Destroy(var_r31 + 0x30, 2);
                NoiseTable__Destroy(var_r31 + 0x1C, 2);
            } while (arg0 + 0x124 != var_r31);
        }
    }
    NoiseTable__Destroy(tail114, 2);
    NoiseTable__Destroy(arg0 + 0x100, 2);
    NoiseTable__Destroy(arg0 + 0xEC, 2);
    ProcModel__Destroy(arg0 + 0xB0, 2);
    SwooshStreak__DestroyResource(arg0 + 0xAC, 2U);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &lbl_80347118;
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}
