/* ActorNode__Construct @ 0x801DF644 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern M2C_UNK lbl_80344CB0 __attribute__((section(".data")));

void *ActorNode__Construct(void *arg0, void *arg1, void **arg2) {
    void *temp_r5;
    void *temp_r9;

    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_80344CB0;
    M2C_FIELD(arg0, void **, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    temp_r9 = M2C_FIELD(arg1, void **, 0x88);
    M2C_FIELD(arg0, void **, 8) = temp_r9;
    if (temp_r9 != NULL) {
        M2C_FIELD(temp_r9, void **, 4) = arg0;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x88) = arg0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, void ***, 0xC) = arg2;
    temp_r5 = *arg2;
    M2C_FIELD(arg0, void **, 0x14) = temp_r5;
    if (temp_r5 != NULL) {
        M2C_FIELD(temp_r5, void **, 0x10) = arg0;
    }
    *M2C_FIELD(arg0, void ***, 0xC) = arg0;
    return arg0;
}
