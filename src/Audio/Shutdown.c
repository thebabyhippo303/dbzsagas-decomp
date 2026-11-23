/* Audio__Shutdown @ 0x8018FE30 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void StreamQueue__Reset(s32);
void MusicStreamQueue__Reset(s32);
M2C_UNK Audio__StopAll(s32, s32);
M2C_UNK fn_8019EB58(void);
void Audio__Shutdown(s32 arg0) {
    void *temp_r11;
    void *temp_r9;

    Audio__StopAll(arg0, 0);
    StreamQueue__Reset(arg0 + 0xCC);
    MusicStreamQueue__Reset(arg0);
    fn_8019EB58();
    temp_r11 = M2C_FIELD(arg0, void **, 0x180);
    if (temp_r11 != NULL) {
        temp_r9 = M2C_FIELD(temp_r11, void **, 0x60);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x1C)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x18));
    }
    M2C_FIELD(arg0, void **, 0x180) = NULL;
}
