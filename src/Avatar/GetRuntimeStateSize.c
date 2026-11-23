/* Avatar__GetRuntimeStateSize @ 0x80092F88 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Avatar__GetBaseRuntimeStateSize(void);
s32 fn_801F353C(s32);
s32 Avatar__GetRuntimeStateSize(void *arg0) {
    s16 ld_8;
    s32 temp_r27;
    s32 temp_r28;
    s32 temp_r29;
    void *temp_r11_2;
    void *temp_r9_2;

    temp_r29 = Avatar__GetBaseRuntimeStateSize();
    temp_r11_2 = M2C_FIELD(arg0, void **, 0x159C);
    temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 0x1158);
    ld_8 = M2C_FIELD(temp_r9_2, s16 *, 8);
    temp_r27 = M2C_FIELD(temp_r9_2, s32 (**)(void *), 0xC)(temp_r11_2 + ld_8);
    temp_r28 = fn_801F353C((s32) arg0);
    { void **tbl = (void **)((char *)arg0 + 0x7E8); temp_r11_2 = tbl[M2C_FIELD(arg0, s32 *, 0x71C)]; }
    temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 4);
    return temp_r29 + temp_r27 + temp_r28 + M2C_FIELD(temp_r9_2, s32 (**)(void *), 0x6C)(temp_r11_2 + M2C_FIELD(temp_r9_2, s16 *, 0x68));
}
