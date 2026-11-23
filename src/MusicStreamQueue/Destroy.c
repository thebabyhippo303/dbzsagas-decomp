/* MusicStreamQueue__Destroy @ 0x80191F50 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void MusicStreamQueue__Reset(s32);
void Mem__Delete(void *);
M2C_UNK StreamQueue__Destroy(s32, s32);
extern M2C_UNK lbl_8033FF50 __attribute__((section(".data")));

void MusicStreamQueue__Destroy(void *arg0, s32 arg1) {
    void *temp_r3;

    M2C_FIELD(arg0, M2C_UNK **, 0xB0) = &lbl_8033FF50;
    MusicStreamQueue__Reset((s32) arg0);
    temp_r3 = M2C_FIELD(arg0, void **, 0xB4);
    if (temp_r3 != NULL) {
        Mem__Delete(temp_r3);
    }
    StreamQueue__Destroy((s32) arg0, arg1);
}
