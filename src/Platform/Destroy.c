/* Platform__Destroy @ 0x801D5DCC (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__DeleteArray(void *);
void CmdCon__Destroy(void *, s32);
void Audio__Destroy(void *, s32);
void PadManager__Destroy(void *, s32);
void Mem__Delete(void *);
extern M2C_UNK lbl_80342FB0 __attribute__((section(".data")));
extern M2C_UNK lbl_803432E0 __attribute__((section(".data")));

void Platform__Destroy(void *arg0, s32 arg1) {
    s32 temp_r3_2;
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x388);
    M2C_FIELD(arg0, M2C_UNK **, 0x384) = &lbl_80342FB0;
    if (temp_r3 != NULL) {
        Mem__DeleteArray(temp_r3);
    }
    temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x718);
    if (temp_r3_2 != 0) {
        CmdCon__Destroy(temp_r3_2, 3);
    }
    Audio__Destroy(arg0 + 0x500, 2);
    PadManager__Destroy(arg0 + 0x480, 2);
    M2C_FIELD(arg0, M2C_UNK **, 0x384) = &lbl_803432E0;
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}
