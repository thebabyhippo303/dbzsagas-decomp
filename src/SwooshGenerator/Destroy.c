/* SwooshGenerator__Destroy @ 0x8023077C (size: 0x164, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void SwooshStreak__Destroy(u32);
void Mem__Delete(void *);
void memFree(void *);
void SwooshGenerator__Destroy(void *arg0, s32 arg1) {
    s32 var_r29;
    s32 var_r30;
    u32 temp_r3;
    void *temp_r3_10;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r3_6;
    void *temp_r3_7;
    void *temp_r3_8;
    void *temp_r3_9;

    if ((void *) M2C_FIELD(arg0, void **, 0x3C) != NULL) {
        var_r30 = 0;
        if (var_r30 < (s32) M2C_FIELD(arg0, s32 *, 0x38)) {
            var_r29 = 0;
            do {
                var_r30 += 1;
                temp_r3 = *(u32 *)(var_r29 + (s32)M2C_FIELD(arg0, void **, 0x3C));
                var_r29 += 4;
                SwooshStreak__Destroy(temp_r3);
            } while (var_r30 < (s32) M2C_FIELD(arg0, s32 *, 0x38));
        }
        memFree(M2C_FIELD(arg0, void **, 0x3C));
        M2C_FIELD(arg0, void **, 0x3C) = NULL;
    }
    temp_r3_2 = M2C_FIELD(arg0, void **, 0x40);
    if (temp_r3_2 != NULL) {
        memFree(temp_r3_2);
        M2C_FIELD(arg0, void **, 0x40) = NULL;
    }
    temp_r3_3 = M2C_FIELD(arg0, void **, 0x44);
    if (temp_r3_3 != NULL) {
        memFree(temp_r3_3);
        M2C_FIELD(arg0, void **, 0x44) = NULL;
    }
    temp_r3_4 = M2C_FIELD(arg0, void **, 0x7C);
    if (temp_r3_4 != NULL) {
        memFree(temp_r3_4);
        M2C_FIELD(arg0, void **, 0x7C) = NULL;
    }
    temp_r3_5 = M2C_FIELD(arg0, void **, 0x80);
    if (temp_r3_5 != NULL) {
        memFree(temp_r3_5);
        M2C_FIELD(arg0, void **, 0x80) = NULL;
    }
    temp_r3_6 = M2C_FIELD(arg0, void **, 0x84);
    if (temp_r3_6 != NULL) {
        memFree(temp_r3_6);
        M2C_FIELD(arg0, void **, 0x84) = NULL;
    }
    temp_r3_7 = M2C_FIELD(arg0, void **, 0x88);
    if (temp_r3_7 != NULL) {
        memFree(temp_r3_7);
        M2C_FIELD(arg0, void **, 0x88) = NULL;
    }
    temp_r3_8 = M2C_FIELD(arg0, void **, 0x8C);
    if (temp_r3_8 != NULL) {
        memFree(temp_r3_8);
        M2C_FIELD(arg0, void **, 0x8C) = NULL;
    }
    temp_r3_9 = M2C_FIELD(arg0, void **, 0x90);
    if (temp_r3_9 != NULL) {
        memFree(temp_r3_9);
        M2C_FIELD(arg0, void **, 0x90) = NULL;
    }
    temp_r3_10 = M2C_FIELD(arg0, void **, 0x94);
    if (temp_r3_10 != NULL) {
        memFree(temp_r3_10);
        M2C_FIELD(arg0, void **, 0x94) = NULL;
    }
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}
