/* MainMenu__DestroyPlayerSelectWidgetGroup @ 0x800102E8 (size: 0x26C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Sphere__DestroyCore(void *, s32);
void fn_801843CC(void *);
void fn_802704BC(void *, int);
void * memset(void *, int, u32);
extern M2C_UNK lbl_8030EC58 __attribute__((section(".data")));

void MainMenu__DestroyPlayerSelectWidgetGroup(void *arg0, s32 arg1) {
    void *temp_r0;
    void *temp_r28;
    void *temp_r30;
    void *temp_r30_2;
    void *temp_r31;
    register void *temp_r31_2;
    void *temp_r31_3;
    void *temp_r3;
    void *temp_r3_2;
    void *var_r31;
    void *var_r31_2;

    temp_r30 = arg0 + 0x22A4;
    M2C_FIELD(arg0, M2C_UNK **, 0x19C) = &lbl_8030EC58;
    if ((void *) M2C_FIELD(temp_r30, void **, 0) != NULL) {
        do {
            temp_r31 = M2C_FIELD(temp_r30, void **, 0);
            M2C_FIELD(temp_r30, void **, 0) = (void *) M2C_FIELD(temp_r31, void **, 0x1B0);
            if ((void *) M2C_FIELD(temp_r30, void **, 4) == temp_r31) {
                M2C_FIELD(temp_r30, void **, 4) = (void *) M2C_FIELD(temp_r31, void **, 0x1AC);
            } else {
                M2C_FIELD(M2C_FIELD(temp_r31, void **, 0x1B0), void **, 0x1AC) = (void *) M2C_FIELD(temp_r31, void **, 0x1AC);
            }
            temp_r0 = M2C_FIELD(temp_r30, void **, 8);
            if (temp_r0 != NULL) {
                if (temp_r31 != NULL) {
                    Sphere__DestroyCore(temp_r31, 2);
                    fn_801843CC(temp_r31);
                }
            } else {
                M2C_FIELD(temp_r31, void **, 0x1AC) = temp_r0;
                M2C_FIELD(temp_r31, void **, 0x1B0) = temp_r0;
            }
            M2C_FIELD(temp_r30, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r30, s32 *, 0xC) - 1);
        } while ((void *) M2C_FIELD(temp_r30, void **, 0) != NULL);
    }
    temp_r31_2 = arg0 + 0x22B4;
    if ((s32) M2C_FIELD(temp_r31_2, s32 *, 0x10) != 0) {
        temp_r3 = M2C_FIELD(temp_r31_2, void **, 0);
        if (temp_r3 != NULL) {
            memset(temp_r3, 0, M2C_FIELD(temp_r31_2, s32 *, 8) << 5);
        }
    }
    M2C_FIELD(temp_r31_2, s32 *, 4) = 0;
    temp_r3_2 = M2C_FIELD(temp_r31_2, void **, 0);
    if (temp_r3_2 != NULL) {
        fn_801843CC(temp_r3_2);
    }
    M2C_FIELD(temp_r31_2, s32 *, 4) = 0;
    M2C_FIELD(temp_r31_2, s32 *, 8) = 0;
    temp_r30_2 = arg0 + 0x22A4;
    M2C_FIELD(temp_r31_2, void **, 0) = NULL;
    temp_r28 = arg0 + 0xDCC;
    temp_r3 = arg0 + 0x1A0;
    if (((void *) M2C_FIELD(temp_r30_2, void **, 8) != NULL) && ((void *) M2C_FIELD(temp_r30_2, void **, 0) != NULL)) {
        do {
            temp_r31_3 = M2C_FIELD(temp_r30_2, void **, 0);
            M2C_FIELD(temp_r30_2, void **, 0) = (void *) M2C_FIELD(temp_r31_3, void **, 0x1B0);
            if ((void *) M2C_FIELD(temp_r30_2, void **, 4) == temp_r31_3) {
                M2C_FIELD(temp_r30_2, void **, 4) = (void *) M2C_FIELD(temp_r31_3, void **, 0x1AC);
            } else {
                M2C_FIELD(M2C_FIELD(temp_r31_3, void **, 0x1B0), void **, 0x1AC) = (void *) M2C_FIELD(temp_r31_3, void **, 0x1AC);
            }
            temp_r30 = M2C_FIELD(temp_r30_2, void **, 8);
            if (temp_r30 != NULL) {
                if (temp_r31_3 != NULL) {
                    Sphere__DestroyCore(temp_r31_3, 2);
                    fn_801843CC(temp_r31_3);
                }
            } else {
                M2C_FIELD(temp_r31_3, void **, 0x1B0) = temp_r30;
                M2C_FIELD(temp_r31_3, void **, 0x1AC) = temp_r30;
            }
            M2C_FIELD(temp_r30_2, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r30_2, s32 *, 0xC) - 1);
        } while ((void *) M2C_FIELD(temp_r30_2, void **, 0) != NULL);
    }
    fn_802704BC(arg0 + 0x20B0, 2);
    Sphere__DestroyCore(arg0 + 0x1F10, 2);
    fn_802704BC(arg0 + 0x1D1C, 2);
    Sphere__DestroyCore(arg0 + 0x1B7C, 2);
    Sphere__DestroyCore(arg0 + 0x19DC, 2);
    if (temp_r28 != NULL) {
        var_r31 = arg0 + 0x19B8;
        if (temp_r28 != var_r31) {
            do {
                var_r31 -= 0x1B4;
                Sphere__DestroyCore(var_r31, 2);
            } while (temp_r28 != var_r31);
        }
    }
    if (temp_r3 != NULL) {
        var_r31_2 = arg0 + 0xD8C;
        if (temp_r3 != var_r31_2) {
            do {
                var_r31_2 -= 0x1B4;
                Sphere__DestroyCore(var_r31_2, 2);
            } while (temp_r3 != var_r31_2);
        }
    }
    Sphere__DestroyCore(arg0, arg1);
}
