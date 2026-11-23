/* ProtagonistGroup__Destroy @ 0x801E85BC (size: 0x1F4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Mem__DeleteArray(void *);
void Mem__Delete(void *);
void ActorList__Destroy(void *, s32);
extern M2C_UNK lbl_803449A0 __attribute__((section(".data")));

void ProtagonistGroup__Destroy(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_3;
    s32 var_r30;
    s32 var_r30_2;
    s32 var_r31;
    s32 var_r31_2;
    void *temp_r0_2;
    void *temp_r11;
    void *temp_r27;
    void *temp_r29;
    void *temp_r29_2;
    void *temp_r30;
    void *temp_r30_2;
    void *temp_r30_3;
    void *temp_r31;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;

    temp_r29 = arg0 + 0x4C;
    temp_r9 = M2C_FIELD(temp_r29, void **, 8);
    if (temp_r9 != NULL) {
        temp_r0 = M2C_FIELD(temp_r9, s32 *, 4);
        if (temp_r0 > 0) {
            var_r30 = temp_r0;
            var_r31 = 0;
            do {
                temp_r3 = *(void **)((char *)M2C_FIELD(M2C_FIELD(temp_r29, void **, 8), void **, 0) + var_r31);
                if (temp_r3 != NULL) {
                    Mem__DeleteArray(temp_r3);
                }
                var_r31 += 4;
                var_r30 -= 1;
            } while (var_r30 != 0);
        }
        temp_r30 = M2C_FIELD(temp_r29, void **, 8);
        if (temp_r30 != NULL) {
            temp_r3_2 = M2C_FIELD(temp_r30, void **, 0);
            if (temp_r3_2 != NULL) {
                Mem__Delete(temp_r3_2);
            }
            Mem__Delete(temp_r30);
        }
        M2C_FIELD(temp_r29, void **, 8) = NULL;
    }
    temp_r30_2 = arg0 + 0x3C;
    temp_r31 = arg0 + 0x30;
    temp_r27 = arg0 + 0x24;
    temp_r29_2 = arg0 + 4;
    if ((M2C_FIELD(temp_r30_2, void **, 8) != NULL) && (M2C_FIELD(temp_r30_2, void **, 0) != NULL)) {
        do {
            temp_r11 = M2C_FIELD(temp_r30_2, void **, 0);
            M2C_FIELD(temp_r30_2, void **, 0) = M2C_FIELD(temp_r11, void **, 0x10);
            if (M2C_FIELD(temp_r30_2, void **, 4) == temp_r11) {
                M2C_FIELD(temp_r30_2, void **, 4) = M2C_FIELD(temp_r11, void **, 0xC);
            } else {
                M2C_FIELD(M2C_FIELD(temp_r11, void **, 0x10), void **, 0xC) = M2C_FIELD(temp_r11, void **, 0xC);
            }
            temp_r0_2 = M2C_FIELD(temp_r30_2, void **, 8);
            if (temp_r0_2 != NULL) {
                if (temp_r11 != NULL) {
                    temp_r9_2 = M2C_FIELD(temp_r11, void **, 8);
                    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11 + M2C_FIELD(temp_r9_2, s16 *, 8), 3);
                }
            } else {
                M2C_FIELD(temp_r11, void **, 0xC) = temp_r0_2;
                M2C_FIELD(temp_r11, void **, 0x10) = temp_r0_2;
            }
            M2C_FIELD(temp_r30_2, s32 *, 0xC) = M2C_FIELD(temp_r30_2, s32 *, 0xC) - 1;
        } while (M2C_FIELD(temp_r30_2, void **, 0) != NULL);
    }
    M2C_FIELD(temp_r31, M2C_UNK **, 8) = &lbl_803449A0;
    ActorList__Destroy(temp_r31, 2);
    M2C_FIELD(temp_r27, M2C_UNK **, 8) = &lbl_803449A0;
    ActorList__Destroy(temp_r27, 2);
    temp_r9_3 = M2C_FIELD(temp_r29_2, void **, 8);
    if (temp_r9_3 != NULL) {
        temp_r0_3 = M2C_FIELD(temp_r9_3, s32 *, 4);
        if (temp_r0_3 > 0) {
            var_r30_2 = temp_r0_3;
            var_r31_2 = 0;
            do {
                temp_r3_3 = *(void **)((char *)M2C_FIELD(M2C_FIELD(temp_r29_2, void **, 8), void **, 0) + var_r31_2);
                if (temp_r3_3 != NULL) {
                    Mem__DeleteArray(temp_r3_3);
                }
                var_r31_2 += 4;
                var_r30_2 -= 1;
            } while (var_r30_2 != 0);
        }
        temp_r30_3 = M2C_FIELD(temp_r29_2, void **, 8);
        if (temp_r30_3 != NULL) {
            temp_r3_4 = M2C_FIELD(temp_r30_3, void **, 0);
            if (temp_r3_4 != NULL) {
                Mem__Delete(temp_r3_4);
            }
            Mem__Delete(temp_r30_3);
        }
        M2C_FIELD(temp_r29_2, void **, 8) = NULL;
    }
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}

