/* StreamQueue__ClearPending @ 0x8019487C (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__Delete(void *);
void StreamQueue__ClearPending(void *arg0) {
    char *p_a0;
    void *temp_r0;
    void *temp_r3;

    p_a0 = (char *)arg0 + 0xa0;
    if ((void *) M2C_FIELD(p_a0, void **, 0x0) != NULL) {
        while ((void *) M2C_FIELD(p_a0, void **, 0x0)) {
            temp_r3 = M2C_FIELD(p_a0, void **, 0x0);
            M2C_FIELD(p_a0, void **, 0x0) = (void *) M2C_FIELD(temp_r3, void **, 0x68);
            if ((void *) M2C_FIELD(p_a0, void **, 0x4) == temp_r3) {
                M2C_FIELD(p_a0, void **, 0x4) = (void *) M2C_FIELD(temp_r3, void **, 0x64);
            } else {
                M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x68), void **, 0x64) = (void *) M2C_FIELD(temp_r3, void **, 0x64);
            }
            temp_r0 = M2C_FIELD(p_a0, void **, 0x8);
            if (temp_r0 != NULL) {
                Mem__Delete(temp_r3);
            } else {
                M2C_FIELD(temp_r3, void **, 0x64) = temp_r0;
                M2C_FIELD(temp_r3, void **, 0x68) = temp_r0;
            }
            M2C_FIELD(p_a0, s32 *, 0xc) = (s32) (M2C_FIELD(p_a0, s32 *, 0xc) - 1);
        }
    }
}
