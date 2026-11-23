/* StreamQueue__Destroy @ 0x80194414 (size: 0xDC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__Delete(void *);
void StreamQueue__Reset(s32);
extern M2C_UNK lbl_8033FF90 __attribute__((section(".data")));
extern M2C_UNK lbl_80340058 __attribute__((section(".data")));

void StreamQueue__Destroy(void *arg0, s32 arg1) {
    char *p_a0;
    void *temp_r0;
    void *temp_r31;
    void *temp_r3;

    p_a0 = (char *)arg0 + 0xa0;
    M2C_FIELD(arg0, M2C_UNK **, 0xB0) = &lbl_8033FF90;
    StreamQueue__Reset(arg0);
    temp_r31 = arg0 + 0xA0;
    if (((void *) M2C_FIELD(temp_r31, void **, 8) != NULL) && ((void *) M2C_FIELD(p_a0, void **, 0x0) != NULL)) {
        do {
            temp_r3 = M2C_FIELD(p_a0, void **, 0x0);
            M2C_FIELD(p_a0, void **, 0x0) = (void *) M2C_FIELD(temp_r3, void **, 0x68);
            if ((void *) M2C_FIELD(temp_r31, void **, 4) == temp_r3) {
                M2C_FIELD(temp_r31, void **, 4) = (void *) M2C_FIELD(temp_r3, void **, 0x64);
            } else {
                M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x68), void **, 0x64) = (void *) M2C_FIELD(temp_r3, void **, 0x64);
            }
            temp_r0 = M2C_FIELD(temp_r31, void **, 8);
            if (temp_r0 != NULL) {
                Mem__Delete(temp_r3);
            } else {
                M2C_FIELD(temp_r3, void **, 0x64) = temp_r0;
                M2C_FIELD(temp_r3, void **, 0x68) = temp_r0;
            }
            M2C_FIELD(temp_r31, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r31, s32 *, 0xC) - 1);
        } while ((void *) M2C_FIELD(p_a0, void **, 0x0) != NULL);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x70) = &lbl_80340058;
    M2C_FIELD(arg0, M2C_UNK **, 0x5C) = &lbl_80340058;
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}
