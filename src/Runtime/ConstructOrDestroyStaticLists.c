/* Runtime__ConstructOrDestroyStaticLists @ 0x80185A38 (size: 0x2C0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__Delete(void *);
extern M2C_UNK lbl_803A11F4 __attribute__((section(".data")));
extern M2C_UNK lbl_803A1204 __attribute__((section(".data")));
extern M2C_UNK lbl_803A1214 __attribute__((section(".data")));
extern M2C_UNK lbl_803A1224 __attribute__((section(".data")));

void Runtime__ConstructOrDestroyStaticLists(s32 arg0, void *arg1) {
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;

    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            M2C_FIELD(&lbl_803A11F4, void **, 0) = NULL;
            M2C_FIELD(&lbl_803A1224, s32 *, 0xC) = 0;
            M2C_FIELD(&lbl_803A11F4, s32 *, 0xC) = 0;
            M2C_FIELD(&lbl_803A1204, s32 *, 0xC) = 0;
            M2C_FIELD(&lbl_803A1204, void **, 0) = NULL;
            M2C_FIELD(&lbl_803A1214, void **, 0) = NULL;
            M2C_FIELD(&lbl_803A1214, s32 *, 0xC) = 0;
            M2C_FIELD(&lbl_803A1224, void **, 0) = NULL;
            M2C_FIELD(&lbl_803A11F4, void **, 4) = NULL;
            M2C_FIELD(&lbl_803A11F4, void **, 8) = NULL;
            M2C_FIELD(&lbl_803A1204, void **, 8) = NULL;
            M2C_FIELD(&lbl_803A1204, void **, 4) = NULL;
            M2C_FIELD(&lbl_803A1214, void **, 4) = NULL;
            M2C_FIELD(&lbl_803A1214, void **, 8) = NULL;
            M2C_FIELD(&lbl_803A1224, void **, 8) = NULL;
            M2C_FIELD(&lbl_803A1224, void **, 4) = NULL;
            return;
        }
        if (((void *) M2C_FIELD(&lbl_803A1224, void **, 8) != NULL) && ((void *) M2C_FIELD(&lbl_803A1224, void **, 0) != NULL)) {
            do {
                temp_r3 = M2C_FIELD(&lbl_803A1224, void **, 0);
                M2C_FIELD(&lbl_803A1224, void **, 0) = (void *) M2C_FIELD(temp_r3, void **, 8);
                if (((void *) M2C_FIELD(&lbl_803A1224, void **, 4) == temp_r3) == 0) {
                    M2C_FIELD(M2C_FIELD(temp_r3, void **, 8), void **, 4) = (void *) M2C_FIELD(temp_r3, void **, 4);
                } else {
                    M2C_FIELD(&lbl_803A1224, void **, 4) = (void *) M2C_FIELD(temp_r3, void **, 4);
                }
                if ((void *) M2C_FIELD(&lbl_803A1224, void **, 8) != NULL) {
                    Mem__Delete(temp_r3);
                } else {
                    M2C_FIELD(temp_r3, void **, 8) = (void *) M2C_FIELD(&lbl_803A1224, void **, 8);
                    M2C_FIELD(temp_r3, void **, 4) = (void *) M2C_FIELD(&lbl_803A1224, void **, 8);
                }
                M2C_FIELD(&lbl_803A1224, s32 *, 0xC) = (s32) (M2C_FIELD(&lbl_803A1224, s32 *, 0xC) - 1);
            } while ((void *) M2C_FIELD(&lbl_803A1224, void **, 0) != NULL);
        }
        if (((void *) M2C_FIELD(&lbl_803A1214, void **, 8) != NULL) && ((void *) M2C_FIELD(&lbl_803A1214, void **, 0) != NULL)) {
            do {
                temp_r3_2 = M2C_FIELD(&lbl_803A1214, void **, 0);
                M2C_FIELD(&lbl_803A1214, void **, 0) = (void *) M2C_FIELD(temp_r3_2, void **, 8);
                if (((void *) M2C_FIELD(&lbl_803A1214, void **, 4) == temp_r3_2) != 0) {
                    M2C_FIELD(&lbl_803A1214, void **, 4) = (void *) M2C_FIELD(temp_r3_2, void **, 4);
                } else {
                    M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 8), void **, 4) = (void *) M2C_FIELD(temp_r3_2, void **, 4);
                }
                if ((void *) M2C_FIELD(&lbl_803A1214, void **, 8) != NULL) {
                    Mem__Delete(temp_r3_2);
                } else {
                    M2C_FIELD(temp_r3_2, void **, 8) = (void *) M2C_FIELD(&lbl_803A1214, void **, 8);
                    M2C_FIELD(temp_r3_2, void **, 4) = (void *) M2C_FIELD(&lbl_803A1214, void **, 8);
                }
                M2C_FIELD(&lbl_803A1214, s32 *, 0xC) = (s32) (M2C_FIELD(&lbl_803A1214, s32 *, 0xC) - 1);
            } while ((void *) M2C_FIELD(&lbl_803A1214, void **, 0) != NULL);
        }
        if (((void *) M2C_FIELD(&lbl_803A1204, void **, 8) != NULL) && ((void *) M2C_FIELD(&lbl_803A1204, void **, 0) != NULL)) {
            do {
                temp_r3_3 = M2C_FIELD(&lbl_803A1204, void **, 0);
                M2C_FIELD(&lbl_803A1204, void **, 0) = (void *) M2C_FIELD(temp_r3_3, void **, 8);
                if (((void *) M2C_FIELD(&lbl_803A1204, void **, 4) == temp_r3_3) != 0) {
                    M2C_FIELD(&lbl_803A1204, void **, 4) = (void *) M2C_FIELD(temp_r3_3, void **, 4);
                } else {
                    M2C_FIELD(M2C_FIELD(temp_r3_3, void **, 8), void **, 4) = (void *) M2C_FIELD(temp_r3_3, void **, 4);
                }
                if ((void *) M2C_FIELD(&lbl_803A1204, void **, 8) != NULL) {
                    Mem__Delete(temp_r3_3);
                } else {
                    M2C_FIELD(temp_r3_3, void **, 8) = (void *) M2C_FIELD(&lbl_803A1204, void **, 8);
                    M2C_FIELD(temp_r3_3, void **, 4) = (void *) M2C_FIELD(&lbl_803A1204, void **, 8);
                }
                M2C_FIELD(&lbl_803A1204, s32 *, 0xC) = (s32) (M2C_FIELD(&lbl_803A1204, s32 *, 0xC) - 1);
            } while ((void *) M2C_FIELD(&lbl_803A1204, void **, 0));
        }
        if (((void *) M2C_FIELD(&lbl_803A11F4, void **, 8) != NULL) && ((void *) M2C_FIELD(&lbl_803A11F4, void **, 0) != NULL)) {
            do {
                temp_r3_4 = M2C_FIELD(&lbl_803A11F4, void **, 0);
                M2C_FIELD(&lbl_803A11F4, void **, 0) = (void *) M2C_FIELD(temp_r3_4, void **, 0x24);
                if (((void *) M2C_FIELD(&lbl_803A11F4, void **, 4) == temp_r3_4) != 0) {
                    M2C_FIELD(&lbl_803A11F4, void **, 4) = (void *) M2C_FIELD(temp_r3_4, void **, 0x20);
                } else {
                    M2C_FIELD(M2C_FIELD(temp_r3_4, void **, 0x24), void **, 0x20) = (void *) M2C_FIELD(temp_r3_4, void **, 0x20);
                }
                if ((void *) M2C_FIELD(&lbl_803A11F4, void **, 8) != NULL) {
                    Mem__Delete(temp_r3_4);
                } else {
                    M2C_FIELD(temp_r3_4, void **, 0x24) = (void *) M2C_FIELD(&lbl_803A11F4, void **, 8);
                    M2C_FIELD(temp_r3_4, void **, 0x20) = (void *) M2C_FIELD(&lbl_803A11F4, void **, 8);
                }
                M2C_FIELD(&lbl_803A11F4, s32 *, 0xC) = (s32) (M2C_FIELD(&lbl_803A11F4, s32 *, 0xC) - 1);
            } while ((void *) M2C_FIELD(&lbl_803A11F4, void **, 0) != NULL);
        }
    }
}
