/* MenuLoop__Destroy @ 0x8004C6CC (size: 0xD0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__Delete(void *);
void Sphere__DestroyCore(void *, s32);
void fn_802704BC(void *, int);
extern M2C_UNK lbl_80310F70 __attribute__((section(".data")));
extern M2C_UNK lbl_8031A9D0 __attribute__((section(".data")));

void MenuLoop__Destroy(void *arg0, s32 arg1) {
    void *temp_r9;
    void *var_r31;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &lbl_8031A9D0;
    Sphere__DestroyCore((char *)arg0 + 0xA30, 2);
    var_r31 = (char *)arg0 + 0x890;
    Sphere__DestroyCore(var_r31, 2);
    if ((char *)arg0 + 0x550 != NULL) {
        if ((char *)arg0 + 0x550 != var_r31) {
            do {
                var_r31 -= 0x1A0;
                temp_r9 = M2C_FIELD(var_r31, void **, 0x19C);
                M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(var_r31 + M2C_FIELD(temp_r9, s16 *, 8), 0);
            } while ((char *)arg0 + 0x550 != var_r31);
        }
    }
    Sphere__DestroyCore((char *)arg0 + 0x3B0, 2);
    Sphere__DestroyCore((char *)arg0 + 0x210, 2);
    fn_802704BC((char *)arg0 + 0x1C, 2);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &lbl_80310F70;
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}
