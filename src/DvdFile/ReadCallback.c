/* DvdFile__ReadCallback @ 0x80180C84 (size: 0xD8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 DVD__MapStatusToFileError(s32, s32);
void DvdFile__IssueRead(char *);
void * memcpy(void *, const void *, unsigned int);
M2C_UNK DCStoreRange(void *, s32);
extern M2C_UNK lbl_803A1A00 __attribute__((section(".data")));
extern s32 lbl_803DCB90;

void DvdFile__ReadCallback(s32 arg0, void *arg1) {
    s32 temp_r3;
    register s32 temp_r5;
    s32 temp_r9;
    s32 var_r30;
    s8 *temp_r31;

    temp_r31 = M2C_FIELD(arg1, s8 **, 0x2C);
    if (arg0 < 0) {
        M2C_FIELD(temp_r31, s32 *, 0x14) = 0;
        if (arg0 != -3) {
            temp_r3 = DVD__MapStatusToFileError(arg0, 3);
            lbl_803DCB90 = temp_r3;
            M2C_FIELD(temp_r31, s32 *, 0x1C) = temp_r3;
        }
    } else {
        temp_r5 = M2C_FIELD(temp_r31, u32 *, 0x64);
        if (temp_r5 < arg0) {
            var_r30 = temp_r5;
        } else {
            var_r30 = arg0;
        }
        if (!(0x1F < temp_r5)) {
            memcpy(M2C_FIELD(temp_r31, void **, 0x6C), &lbl_803A1A00, (u32) temp_r5);
            DCStoreRange(M2C_FIELD(temp_r31, void **, 0x6C), M2C_FIELD(temp_r31, u32 *, 0x64));
        }
        M2C_FIELD(temp_r31, void **, 0x6C) = (void *) (M2C_FIELD(temp_r31, void **, 0x6C) + var_r30);
        M2C_FIELD(temp_r31, s32 *, 0x68) = (s32) (M2C_FIELD(temp_r31, s32 *, 0x68) + var_r30);
        temp_r9 = M2C_FIELD(temp_r31, u32 *, 0x64) - var_r30;
        M2C_FIELD(temp_r31, u32 *, 0x64) = temp_r9;
        if (temp_r9 > 0) {
            DvdFile__IssueRead(temp_r31);
            return;
        }
        M2C_FIELD(temp_r31, s32 *, 0x14) = 0;
        lbl_803DCB90 = 0;
        M2C_FIELD(temp_r31, s32 *, 0x1C) = 0;
    }
}
