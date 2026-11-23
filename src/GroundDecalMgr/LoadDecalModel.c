/* GroundDecalMgr__LoadDecalModel @ 0x80284FDC (size: 0x138, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct { s32 a, b; } Elm;
u32 Mem__NewArray(u32);
void Mem__Delete(void *);
void * LoadContext__LoadDbl(int, int, int, int);
void * memcpy(void *, const void *, unsigned int);
void * memmove(void *, void *, unsigned int);
void * memset(void *, int, u32);
s32 GroundDecalMgr__LoadDecalModel(void *arg0, s32 arg1, s32 arg2) {
    Elm item;
    Elm *pb;
    s32 temp_r0;
    s32 temp_r28_2;
    s32 temp_r29;
    u32 temp_r27;
    u32 temp_r28;
    u32 temp_r3_2;
    void *temp_r27_2;
    void *temp_r30;
    void *temp_r3;
    void *temp_r3_3;
    void *temp_r4;
    s32 lo, hi;

    temp_r3 = LoadContext__LoadDbl(arg1, arg2, 0, 0);
    if (temp_r3 == NULL) {
        return 0;
    }
    temp_r29 = M2C_FIELD(arg0, s32 *, 4);
    pb = &item;
    item = *(Elm *) temp_r3;
    if (temp_r29 == (s32) M2C_FIELD(arg0, s32 *, 8)) {
        temp_r28 = temp_r29 * 8;
        temp_r27 = (temp_r29 + M2C_FIELD(arg0, s32 *, 0xC)) * 8;
        temp_r3_2 = Mem__NewArray(temp_r27);
        if (temp_r3_2 != 0) {
            temp_r4 = M2C_FIELD(arg0, void **, 0);
            if (temp_r4 != NULL) {
                memcpy((void *) temp_r3_2, temp_r4, temp_r28);
                temp_r3_3 = M2C_FIELD(arg0, void **, 0);
                if (temp_r3_3 != NULL) {
                    Mem__Delete(temp_r3_3);
                }
            }
            M2C_FIELD(arg0, void **, 0) = (void *) temp_r3_2;
            M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + M2C_FIELD(arg0, s32 *, 0xC));
            if ((s32) M2C_FIELD(arg0, s32 *, 0x10) != 0) {
                memset(temp_r3_2 + temp_r28, 0, temp_r27 - temp_r28);
            }
            goto block_9;
        }
    } else {
block_9:
        temp_r27_2 = M2C_FIELD(arg0, void **, 0);
        temp_r28_2 = temp_r29 * 8;
        temp_r30 = temp_r27_2 + temp_r28_2;
        temp_r0 = M2C_FIELD(arg0, s32 *, 4) - temp_r29;
        if (temp_r0 != 0) {
            memmove(temp_r30 + 8, temp_r30, temp_r0 * 8);
        }
        lo = pb->a;
        hi = pb->b;
        *(s32 *)(temp_r27_2 + temp_r28_2) = lo;
        M2C_FIELD(temp_r30, s32 *, 4) = (s32) hi;
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
    }
    return M2C_FIELD(arg0, s32 *, 4) - 1;
}
