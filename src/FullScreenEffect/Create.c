/* FullScreenEffect__Create @ 0x800E1628 (size: 0x15C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

char * FullScreenEffect__Init(char *, char *, int, float, float, float);
void FullScreenEffect__SetActive(char *, int);
void Mem__Delete(void *);
s32 Mem__New(s32);
char * Mem__NewArray(s32);
void * memcpy(void *, const void *, unsigned int);
void * memmove(void *, void *, unsigned int);
void * memset(void *, int, u32);
s8 *FullScreenEffect__Create(void *arg0, s8 *arg1, s32 arg2, f32 farg0, f32 farg1, f32 farg2) {
    s32 temp_r0;
    s32 temp_r26;
    s32 temp_r29;
    s32 temp_r30;
    s8 *temp_r3;
    s8 *temp_r3_2;
    s8 *temp_r3_3;
    s8 *temp_r4;
    u32 temp_r27;
    void *temp_r31;
    void *temp_r3_4;

    temp_r3 = M2C_FIELD(arg0, s8 **, 0);
    if (temp_r3 != NULL) {
        FullScreenEffect__SetActive(temp_r3, 0);
    }
    temp_r31 = arg0 + 4;
    M2C_FIELD(arg0, s8 **, 0) = FullScreenEffect__Init(Mem__New(0x1CC), arg1, arg2, farg0, farg1, farg2);
    temp_r30 = M2C_FIELD(temp_r31, s32 *, 4);
    if (temp_r30 == (s32) M2C_FIELD(temp_r31, s32 *, 8)) {
        temp_r27 = temp_r30 * 4;
        temp_r26 = (temp_r30 + M2C_FIELD(temp_r31, u32 *, 0xC)) * 4;
        temp_r3_2 = Mem__NewArray(temp_r26);
        if (temp_r3_2 != NULL) {
            temp_r4 = M2C_FIELD(arg0, s8 **, 4);
            if (temp_r4 != NULL) {
                memcpy(temp_r3_2, temp_r4, temp_r27);
                temp_r3_3 = M2C_FIELD(arg0, s8 **, 4);
                if (temp_r3_3 != NULL) {
                    Mem__Delete(temp_r3_3);
                }
            }
            M2C_FIELD(arg0, s8 **, 4) = temp_r3_2;
            M2C_FIELD(temp_r31, s32 *, 8) = (s32) (M2C_FIELD(temp_r31, s32 *, 8) + M2C_FIELD(temp_r31, u32 *, 0xC));
            if ((s32) M2C_FIELD(temp_r31, s32 *, 0x10) != 0) {
                memset(temp_r3_2 + temp_r27, 0, temp_r26 - temp_r27);
            }
            goto block_9;
        }
    } else {
block_9:
        temp_r29 = temp_r30 * 4;
        temp_r3_2 = M2C_FIELD(arg0, s8 **, 4);
        temp_r0 = M2C_FIELD(temp_r31, s32 *, 4) - temp_r30;
        temp_r3_4 = temp_r3_2 + temp_r29;
        if (temp_r0 != 0) {
            memmove(temp_r3_4 + 4, temp_r3_4, temp_r0 * 4);
        }
        *(temp_r3_2 + temp_r29) = M2C_FIELD(arg0, s8 **, 0);
        M2C_FIELD(temp_r31, s32 *, 4) = (s32) (M2C_FIELD(temp_r31, s32 *, 4) + 1);
    }
    return M2C_FIELD(arg0, s8 **, 0);
}
