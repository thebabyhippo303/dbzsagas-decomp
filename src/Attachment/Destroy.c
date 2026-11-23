/* Attachment__Destroy @ 0x801E7FF4 (size: 0x188, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void ActorNode__Destroy(s32, s32);
extern M2C_UNK lbl_80344A10 __attribute__((section(".data")));

void Attachment__Destroy(void *arg0, s32 arg1) {
    M2C_UNK (*temp_r0)(s32, void *);
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;

    temp_r0 = M2C_FIELD(arg0, M2C_UNK (**)(s32, void *), 0x4C);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_80344A10;
    if (temp_r0 != NULL) {
        temp_r0(M2C_FIELD(arg0, s32 *, 0x50), arg0);
    }
    temp_r9 = M2C_FIELD(arg0, void **, 0x58);
    if (temp_r9 != NULL) {
        M2C_FIELD(M2C_FIELD(temp_r9, void **, 0x188), void **, 0x5C) = (void *) M2C_FIELD(arg0, void **, 0x5C);
    } else {
        temp_r9_2 = M2C_FIELD(arg0, void **, 0x54);
        if (temp_r9_2 != NULL) {
            M2C_FIELD(M2C_FIELD(temp_r9_2, void **, 0x188), void **, 0x60) = (void *) M2C_FIELD(arg0, void **, 0x5C);
        }
    }
    temp_r9_3 = M2C_FIELD(arg0, void **, 0x5C);
    if (temp_r9_3 != NULL) {
        M2C_FIELD(M2C_FIELD(temp_r9_3, void **, 0x188), void **, 0x58) = (void *) M2C_FIELD(arg0, void **, 0x58);
    }
    if ((void *) M2C_FIELD(arg0, void **, 0x60) != NULL) {
        do {
            temp_r11 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x60), void **, 0x188);
            M2C_FIELD(arg0, void **, 0x60) = (void *) M2C_FIELD(temp_r11, void **, 0x5C);
            M2C_FIELD(temp_r11, s32 *, 0x58) = 0;
            M2C_FIELD(temp_r11, void **, 0x5C) = NULL;
            M2C_FIELD(temp_r11, s32 *, 0x54) = 0;
        } while ((void *) M2C_FIELD(arg0, void **, 0x60) != NULL);
    }
    temp_r9_4 = M2C_FIELD(arg0, void **, 0x20);
    if (temp_r9_4 != NULL) {
        M2C_FIELD(M2C_FIELD(temp_r9_4, void **, 0x188), void **, 0x24) = (void *) M2C_FIELD(arg0, void **, 0x24);
    } else {
        temp_r9_5 = M2C_FIELD(arg0, void **, 0x1C);
        if (temp_r9_5 != NULL) {
            M2C_FIELD(M2C_FIELD(temp_r9_5, void **, 0x188), void **, 0x28) = (void *) M2C_FIELD(arg0, void **, 0x24);
        }
    }
    temp_r9_6 = M2C_FIELD(arg0, void **, 0x24);
    if (temp_r9_6 != NULL) {
        M2C_FIELD(M2C_FIELD(temp_r9_6, void **, 0x188), void **, 0x20) = (void *) M2C_FIELD(arg0, void **, 0x20);
    }
    if ((void *) M2C_FIELD(arg0, void **, 0x28) != NULL) {
        do {
            temp_r11_2 = M2C_FIELD(arg0, void **, 0x28);
            temp_r9_7 = M2C_FIELD(temp_r11_2, void **, 0x34);
            M2C_FIELD(temp_r9_7, M2C_UNK (**)(void *, void *), 0x164)(temp_r11_2 + M2C_FIELD(temp_r9_7, s16 *, 0x160), M2C_FIELD(arg0, void **, 0x1C));
            temp_r11_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), void **, 0x188);
            M2C_FIELD(arg0, void **, 0x28) = (void *) M2C_FIELD(temp_r11_3, void **, 0x24);
            M2C_FIELD(temp_r11_3, s32 *, 0x20) = 0;
            M2C_FIELD(temp_r11_3, void **, 0x24) = NULL;
            M2C_FIELD(temp_r11_3, s32 *, 0x1C) = 0;
        } while ((void *) M2C_FIELD(arg0, void **, 0x28) != NULL);
    }
    ActorNode__Destroy(arg0, arg1);
}
