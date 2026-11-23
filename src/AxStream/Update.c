/* AxStream__Update @ 0x80197B38 (size: 0xF0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 DVD__MapStatusToFileError(s32, s32);
s32 DVDGetDriveStatus(void);
M2C_UNK fn_80197B08(s32);
s32 AxStream__Update(void *arg0) {
    s32 temp_r3;
    s32 var_r3;
    void *temp_r9;

    temp_r3 = DVD__MapStatusToFileError(DVDGetDriveStatus(), 0x11);
    if (temp_r3 != 0) {
        if (((s32) M2C_FIELD(arg0, s32 *, 0x1D4) == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x1D0) != 0)) {
            fn_80197B08((s32) arg0);
            if ((s32) M2C_FIELD(arg0, s32 *, 0xA4) != 0) {
                M2C_FIELD(arg0, s32 *, 0x1D8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1D8) + 1);
            }
            if ((s32) M2C_FIELD(arg0, s32 *, 0x134) != 0) {
                M2C_FIELD(arg0, s32 *, 0x1D8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1D8) + 1);
            }
        }
    } else if (((s32) M2C_FIELD(arg0, s32 *, 0x1D4) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x1D8) == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x1D0) != 0)) {
        temp_r9 = M2C_FIELD(arg0, void **, 0x28);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x14)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x10));
    }
    var_r3 = 0;
    M2C_FIELD(arg0, s32 *, 0x1D4) = temp_r3;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1CC) != 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x1D0) != 0)) {
        var_r3 = 1;
    }
    return var_r3;
}
