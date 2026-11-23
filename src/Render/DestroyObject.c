/* Render__DestroyObject @ 0x80281BB8 (size: 0x248, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void SceneMgr__DetachInstance(void *, u32);
s32 RenderInstance__Release(s32);
void memFree(void *);
void sprintf(char *, char *, ...);
extern M2C_UNK lbl_8034E95C __attribute__((section(".data")));
extern M2C_UNK lbl_8034E99C __attribute__((section(".data")));
extern M2C_UNK lbl_8034E9B0 __attribute__((section(".data")));
extern M2C_UNK lbl_8034E9F0 __attribute__((section(".data")));

void Render__DestroyObject(void *arg0, void *arg1) {
    union { s8 value; unsigned char bytes[252]; } sp8;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 var_r29;
    s32 diff;
    void *temp_r11;
    void *temp_r30;
    void *temp_r31;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;

    temp_r11 = arg0 + 0x10;
    if (M2C_FIELD(arg0, void **, 0x10) == arg1) {
        M2C_FIELD(arg0, void **, 0x10) = M2C_FIELD(arg1, void **, 0x174);
    } else {
        M2C_FIELD(M2C_FIELD(arg1, void **, 0x170), void **, 0x174) = M2C_FIELD(arg1, void **, 0x174);
    }
    if (M2C_FIELD(temp_r11, void **, 4) == arg1) {
        M2C_FIELD(temp_r11, void **, 4) = M2C_FIELD(arg1, void **, 0x170);
    } else {
        M2C_FIELD(M2C_FIELD(arg1, void **, 0x174), void **, 0x170) = M2C_FIELD(arg1, void **, 0x170);
    }
    M2C_FIELD(arg1, void **, 0x170) = NULL;
    M2C_FIELD(arg1, void **, 0x174) = NULL;
    M2C_FIELD(temp_r11, s32 *, 0xC) = M2C_FIELD(temp_r11, s32 *, 0xC) - 1;
    SceneMgr__DetachInstance(arg1, 0);
    RenderInstance__Release((s32)arg1);
    temp_r31 = M2C_FIELD(arg1, void **, 0x168);
    if (temp_r31 != NULL) {
        if (M2C_FIELD(temp_r31, void **, 0) != NULL) {
            temp_r9 = M2C_FIELD(temp_r31, void **, 0x1C);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r31 + M2C_FIELD(temp_r9, s16 *, 8), 2);
            temp_r30 = M2C_FIELD(temp_r31, void **, 0);
            if (M2C_FIELD(temp_r31, s32 *, 0x18) == M2C_FIELD(temp_r30, s32 *, 0xC)) {
                temp_r0 = M2C_FIELD(temp_r31, s32 *, 0x10);
                M2C_FIELD(temp_r30, s32 *, 0x10) = temp_r0;
                if (temp_r0 == -1) {
                    M2C_FIELD(temp_r30, s32 *, 0xC) = 0;
                } else {
                    temp_r9_2 = (void *)(M2C_FIELD(temp_r30, s32 *, 0) + temp_r0);
                    temp_r0_2 = M2C_FIELD(temp_r9_2, s32 *, 0x18);
                    M2C_FIELD(temp_r30, s32 *, 0xC) = temp_r0_2;
                    M2C_FIELD(temp_r9_2, s32 *, 0x14) = temp_r0_2;
                }
                if (M2C_FIELD(temp_r30, s32 *, 0x10) == -1) {
                    M2C_FIELD(temp_r30, s32 *, 0xB4) = 0;
                }
                if (M2C_FIELD(temp_r30, s32 *, 0x1BC) & 0x20000000) {
                    sprintf((char *)&sp8, (char *)&lbl_8034E95C, M2C_FIELD(temp_r31, s32 *, 4), M2C_FIELD(temp_r31, s32 *, 0x18), M2C_FIELD(temp_r31, s32 *, 0x18) - M2C_FIELD(temp_r31, s32 *, 4));
                    sprintf((char *)&sp8, (char *)&lbl_8034E99C, M2C_FIELD(temp_r30, s32 *, 0xC));
                }
            } else {
                M2C_FIELD((void *)(M2C_FIELD(temp_r30, s32 *, 0) + M2C_FIELD(temp_r31, s32 *, 0x14)), s32 *, 0x10) = M2C_FIELD(temp_r31, s32 *, 0x10);
                temp_r0_3 = M2C_FIELD(temp_r31, s32 *, 0x10);
                if (temp_r0_3 != -1) {
                    M2C_FIELD((void *)(M2C_FIELD(temp_r30, s32 *, 0) + temp_r0_3), s32 *, 0x14) = M2C_FIELD(temp_r31, s32 *, 0x14);
                } else {
                    M2C_FIELD(temp_r30, s32 *, 0xB4) = M2C_FIELD(temp_r31, s32 *, 0x14);
                }
                temp_r0 = M2C_FIELD(temp_r31, s32 *, 0x10);
                if (temp_r0 != -1) {
                    var_r29 = M2C_FIELD((void *)(M2C_FIELD(temp_r30, s32 *, 0) + temp_r0), s32 *, 0x18);
                } else {
                    var_r29 = 0;
                }
                diff = M2C_FIELD(temp_r31, s32 *, 0x14) - var_r29;
                if (M2C_FIELD(temp_r30, s32 *, 0x1BC) & 0x20000000) {
                    sprintf((char *)&sp8, (char *)&lbl_8034E9B0, M2C_FIELD(temp_r31, s32 *, 4), M2C_FIELD(temp_r31, s32 *, 0x18), M2C_FIELD(temp_r31, s32 *, 0x18) - M2C_FIELD(temp_r31, s32 *, 4));
                    sprintf((char *)&sp8, (char *)&lbl_8034E9F0, diff, var_r29, M2C_FIELD(temp_r31, s32 *, 0x14));
                }
            }
        } else {
            temp_r9_3 = M2C_FIELD(temp_r31, void **, 0x1C);
            M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r31 + M2C_FIELD(temp_r9_3, s16 *, 8), 3);
        }
    }
    memFree(arg1);
}
