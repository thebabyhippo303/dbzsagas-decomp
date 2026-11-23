/* Task__Create @ 0x80184948 (size: 0x1E8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Task__InitializeStackContext(void *, s32, s32, s32, s32);
void * MemHeap__Alloc(unsigned int, unsigned int);
void * memset(void *, int, u32);
extern f32 lbl_8033DCC0 __attribute__((section(".data")));
extern M2C_UNK lbl_803A1204;
extern M2C_UNK lbl_803A1214 __attribute__((section(".data")));

void *Task__Create(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    u32 temp_r30;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r11;
    void *var_r9;
    void *temp_r3;
    void *temp_r31;

    temp_r31 = M2C_FIELD(&lbl_803A1214, void **, 0);
    if (!temp_r31) {
        return NULL;
    }
    temp_r30 = arg4 + arg5;
    M2C_FIELD(temp_r31, s32 *, 0x1C) = arg4;
    M2C_FIELD(temp_r31, s32 *, 0x20) = arg5;
    M2C_FIELD(temp_r31, f32 *, 0x28) = (f32) lbl_8033DCC0;
    M2C_FIELD(temp_r31, s32 *, 0x14) = arg3;
    M2C_FIELD(temp_r31, s32 *, 0xC) = arg1;
    M2C_FIELD(temp_r31, s32 *, 0x24) = arg6;
    M2C_FIELD(temp_r31, s32 *, 0x18) = 0;
    temp_r3 = MemHeap__Alloc(temp_r30, 8U);
    M2C_FIELD(temp_r31, s32 *, 0x10) = arg2;
    M2C_FIELD(temp_r31, void **, 0) = temp_r3;
    memset(temp_r3, 0, temp_r30);
    Task__InitializeStackContext(temp_r31 + 0x2C, arg0, (s32) M2C_FIELD(temp_r31, void **, 0), arg4, arg5);
    if ((void *) M2C_FIELD(&lbl_803A1214, void **, 0) == temp_r31) {
        M2C_FIELD(&lbl_803A1214, void **, 0) = M2C_FIELD(temp_r31, void **, 8);
    } else {
        M2C_FIELD(M2C_FIELD(temp_r31, void **, 4), void **, 8) = (void *) M2C_FIELD(temp_r31, void **, 8);
    }
    if ((void *) M2C_FIELD(&lbl_803A1214, void **, 4) == temp_r31) {
        M2C_FIELD(&lbl_803A1214, void **, 4) = (void *) M2C_FIELD(temp_r31, void **, 4);
    } else {
        M2C_FIELD(M2C_FIELD(temp_r31, void **, 8), void **, 4) = (void *) M2C_FIELD(temp_r31, void **, 4);
    }
    M2C_FIELD(temp_r31, void **, 4) = NULL;
    M2C_FIELD(temp_r31, void **, 8) = NULL;
    temp_r0 = M2C_FIELD(&lbl_803A1204, void **, 0);
    M2C_FIELD(&lbl_803A1214, s32 *, 0xC) = (s32) (M2C_FIELD(&lbl_803A1214, s32 *, 0xC) - 1);
    if (temp_r0) {
        var_r9 = temp_r0;
loop_12:
        if ((s32) M2C_FIELD(var_r9, s32 *, 0x14) > (s32) M2C_FIELD(temp_r31, s32 *, 0x14)) {
            var_r9 = M2C_FIELD(var_r9, void **, 8);
            if (var_r9) {
                goto loop_12;
            }
block_14:
            temp_r0_2 = M2C_FIELD(&lbl_803A1204, void **, 0);
            if (temp_r0_2 == NULL) {
                M2C_FIELD(&lbl_803A1204, void **, 4) = temp_r31;
                M2C_FIELD(&lbl_803A1204, void **, 0) = temp_r31;
                M2C_FIELD(temp_r31, void **, 8) = temp_r0_2;
                M2C_FIELD(temp_r31, void **, 4) = temp_r0_2;
            } else {
                M2C_FIELD(temp_r31, void **, 8) = NULL;
                M2C_FIELD(temp_r31, void **, 4) = (void *) M2C_FIELD(&lbl_803A1204, void **, 4);
                M2C_FIELD(M2C_FIELD(&lbl_803A1204, void **, 4), void **, 8) = temp_r31;
                M2C_FIELD(&lbl_803A1204, void **, 4) = temp_r31;
            }
        } else {
            if (var_r9 == NULL) {
                goto block_14;
            }
            temp_r11 = M2C_FIELD(var_r9, void **, 4);
            if (temp_r11 != NULL) {
                M2C_FIELD(temp_r11, void **, 8) = temp_r31;
            } else {
                M2C_FIELD(&lbl_803A1204, void **, 0) = temp_r31;
            }
            M2C_FIELD(temp_r31, void **, 8) = var_r9;
            M2C_FIELD(var_r9, void **, 4) = temp_r31;
            M2C_FIELD(temp_r31, void **, 4) = (void *) M2C_FIELD(var_r9, void **, 4);
        }
    } else {
        M2C_FIELD(&lbl_803A1204, void **, 0) = temp_r31;
        M2C_FIELD(temp_r31, void **, 4) = temp_r0;
        M2C_FIELD(&lbl_803A1204, void **, 4) = temp_r31;
        M2C_FIELD(temp_r31, void **, 8) = temp_r0;
    }
    M2C_FIELD(&lbl_803A1204, s32 *, 0xC) = (s32) (M2C_FIELD(&lbl_803A1204, s32 *, 0xC) + 1);
    return temp_r31;
}
