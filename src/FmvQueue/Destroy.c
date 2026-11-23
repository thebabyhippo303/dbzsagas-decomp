/* FmvQueue__Destroy @ 0x801DA37C (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__Delete(void *);
void fn_802413C4(void);
M2C_UNK fn_80241454(void);
void FmvQueue__Destroy(void *arg0, s32 arg1) {
    void *temp_r0;
    void *temp_r31;
    void *temp_r3;

    fn_802413C4();
    temp_r31 = arg0 + 4;
    fn_80241454();
    if ((void *) M2C_FIELD(temp_r31, void **, 8) != NULL) {
        if ((void *) M2C_FIELD(temp_r31, void **, 0) != NULL) {
            do {
                temp_r3 = M2C_FIELD(temp_r31, void **, 0);
                M2C_FIELD(temp_r31, void **, 0) = (void *) M2C_FIELD(temp_r3, void **, 0x88);
                if ((void *) M2C_FIELD(temp_r31, void **, 4) == temp_r3) {
                    M2C_FIELD(temp_r31, void **, 4) = (void *) M2C_FIELD(temp_r3, void **, 0x84);
                } else {
                    M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x88), void **, 0x84) = (void *) M2C_FIELD(temp_r3, void **, 0x84);
                }
                temp_r0 = M2C_FIELD(temp_r31, void **, 8);
                if (temp_r0 != NULL) {
                    Mem__Delete(temp_r3);
                } else {
                    M2C_FIELD(temp_r3, void **, 0x84) = temp_r0;
                    M2C_FIELD(temp_r3, void **, 0x88) = temp_r0;
                }
                M2C_FIELD(temp_r31, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r31, s32 *, 0xC) - 1);
            } while ((void *) M2C_FIELD(temp_r31, void **, 0) != NULL);
        }
    }
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}
