/* SoundDriver__LoadBankFromImage @ 0x80193590 (size: 0x190, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

u32 Mem__NewArray(u32);
void Mem__Delete(void *);
void *memcpy(void *, const void *, unsigned int);
void *memmove(void *, void *, unsigned int);
void *memset(void *, int, u32);
typedef void *(*Fn1)(void *);
typedef s32 (*Fn2)(void *, s32);
typedef void (*Fn3)(void *, void *);
s32 SoundDriver__LoadBankFromImage(void *arg0, s32 arg1, void *arg2, void **arg3) {
    void *sp8;
    void **pp;
    s32 temp_r0;
    s32 temp_r29;
    s32 temp_r30;
    u32 temp_r26;
    u32 temp_r28;
    u32 temp_r3_2;
    void *temp_r28_2;
    void *temp_r31;
    void *temp_r3;
    void *temp_r3_4;
    void *temp_r4;
    void *vt;
    void *vt2;
    void *vt3;
    void *fn1;
    void *fn2;
    void *fn3;
    void *fn3arg;

    M2C_FIELD(arg2, u16 *, 2) = (u16)(M2C_FIELD(arg2, u16 *, 2) | 1);
    vt = M2C_FIELD(arg0, void **, 0x60);
    fn1 = M2C_FIELD(vt, void **, 0x144);
    temp_r3 = ((Fn1)fn1)(arg0 + M2C_FIELD(vt, s16 *, 0x140));
    if (temp_r3 == NULL) {
        return 0;
    }
    vt2 = M2C_FIELD(temp_r3, void **, 0xC);
    fn2 = M2C_FIELD(vt2, void **, 0x14);
    if (((Fn2)fn2)(temp_r3 + M2C_FIELD(vt2, s16 *, 0x10), arg1) == 0) {
        fn3arg = temp_r3;
        M2C_FIELD(temp_r3, s32 *, 4) = 1;
        vt3 = M2C_FIELD(arg0, void **, 0x60);
        fn3 = M2C_FIELD(vt3, void **, 0x154);
        ((Fn3)fn3)(arg0 + M2C_FIELD(vt3, s16 *, 0x150), fn3arg);
        return 0;
    }
    temp_r31 = M2C_FIELD(arg0, void **, 0);
    pp = &sp8;
    sp8 = temp_r3;
    temp_r30 = M2C_FIELD(temp_r31, s32 *, 4);
    if (temp_r30 == M2C_FIELD(temp_r31, s32 *, 8)) {
        temp_r28 = temp_r30 * 4;
        temp_r26 = (temp_r30 + M2C_FIELD(temp_r31, s32 *, 0xC)) * 4;
        temp_r3_2 = Mem__NewArray(temp_r26);
        if (temp_r3_2 != 0) {
            temp_r4 = M2C_FIELD(temp_r31, void **, 0);
            if (temp_r4 != NULL) {
                memcpy((void *)temp_r3_2, temp_r4, temp_r28);
                if (M2C_FIELD(temp_r31, void **, 0) != NULL) {
                    Mem__Delete(M2C_FIELD(temp_r31, void **, 0));
                }
            }
            M2C_FIELD(temp_r31, void **, 0) = (void *)temp_r3_2;
            M2C_FIELD(temp_r31, s32 *, 8) = M2C_FIELD(temp_r31, s32 *, 8) + M2C_FIELD(temp_r31, s32 *, 0xC);
            if (M2C_FIELD(temp_r31, s32 *, 0x10) != 0) {
                memset((void *)temp_r3_2 + temp_r28, 0, temp_r26 - temp_r28);
            }
            goto block_11;
        }
    } else {
block_11:
        temp_r28_2 = M2C_FIELD(temp_r31, void **, 0);
        temp_r29 = temp_r30 * 4;
        temp_r3_4 = temp_r28_2 + temp_r29;
        temp_r0 = M2C_FIELD(temp_r31, s32 *, 4) - temp_r30;
        if (temp_r0 != 0) {
            memmove(temp_r3_4 + 4, temp_r3_4, temp_r0 * 4);
        }
        *(void **)(temp_r28_2 + temp_r29) = *pp;
        M2C_FIELD(temp_r31, s32 *, 4) = M2C_FIELD(temp_r31, s32 *, 4) + 1;
    }
    *arg3 = temp_r3;
    return 1;
}
