/* ActorNode__Unlink @ 0x801DF74C (size: 0xD8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void ActorNode__Unlink(void *arg0, void **arg1, void *arg2) {
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;

    temp_r9 = M2C_FIELD(arg0, void **, 4);
    if (temp_r9 != NULL) {
        M2C_FIELD(temp_r9, void **, 8) = (void *) M2C_FIELD(arg0, void **, 8);
    } else {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x88) = (void *) M2C_FIELD(arg0, void **, 8);
    }
    temp_r9_2 = M2C_FIELD(arg0, void **, 8);
    if (temp_r9_2 != NULL) {
        M2C_FIELD(temp_r9_2, void **, 4) = (void *) M2C_FIELD(arg0, void **, 4);
    }
    temp_r9_3 = M2C_FIELD(arg0, void **, 0x10);
    if (temp_r9_3 != NULL) {
        M2C_FIELD(temp_r9_3, void **, 0x14) = (void *) M2C_FIELD(arg0, void **, 0x14);
    } else {
        *M2C_FIELD(arg0, void ***, 0xC) = M2C_FIELD(arg0, void **, 0x14);
    }
    temp_r9_4 = M2C_FIELD(arg0, void **, 0x14);
    if (temp_r9_4 != NULL) {
        M2C_FIELD(temp_r9_4, void **, 0x10) = (void *) M2C_FIELD(arg0, void **, 0x10);
    }
    M2C_FIELD(arg0, void **, 4) = NULL;
    temp_r9_5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x88);
    M2C_FIELD(arg0, void **, 8) = temp_r9_5;
    if (temp_r9_5 != NULL) {
        M2C_FIELD(temp_r9_5, void **, 4) = arg0;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x88) = arg0;
    M2C_FIELD(arg0, void ***, 0xC) = arg1;
    M2C_FIELD(arg0, void **, 0x10) = arg2;
    if (arg2 == NULL) {
        M2C_FIELD(arg0, void **, 0x14) = (void *) *arg1;
        *arg1 = arg0;
    } else {
        M2C_FIELD(arg0, void **, 0x14) = (void *) M2C_FIELD(arg2, void **, 0x14);
        M2C_FIELD(arg2, void **, 0x14) = arg0;
    }
    temp_r9_6 = M2C_FIELD(arg0, void **, 0x14);
    if (temp_r9_6 != NULL) {
        M2C_FIELD(temp_r9_6, void **, 0x10) = arg0;
    }
}
