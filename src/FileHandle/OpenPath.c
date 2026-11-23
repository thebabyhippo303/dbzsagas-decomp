/* FileHandle__OpenPath @ 0x8018080C (size: 0xB0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

char * App__MakeGcnDataPath(char *);
s32 FileStream__OpenThunk(char *, s32, s32, s32);
M2C_UNK DvdFile__Open(s32, s32, s32);
extern s32 lbl_803DCB90;

s32 FileHandle__OpenPath(void *arg0, s8 *arg1, s32 *arg2, s32 arg3) {
    s32 temp_r3;
    s32 var_r9;

    if (arg3 & 1) {
        var_r9 = DvdFile__Open(App__MakeGcnDataPath(arg1), arg0 + 4, arg3);
        if (var_r9 != 0) {
            M2C_FIELD(arg0, s32 *, 0) = 2;
            goto block_5;
        }
        goto block_7;
    }
    temp_r3 = FileStream__OpenThunk(NULL, (s32) arg1, 0, arg3);
    var_r9 = 0;
    M2C_FIELD(arg0, s32 *, 4) = temp_r3;
    if (temp_r3 != 0) {
        var_r9 = 1;
        M2C_FIELD(arg0, s32 *, 0) = 1;
    }
block_5:
    if (var_r9 != 0) {
        return 1;
    }
block_7:
    if (arg2 != NULL) {
        *arg2 = lbl_803DCB90;
    }
    return 0;
}
