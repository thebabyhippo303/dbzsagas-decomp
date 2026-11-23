/* ShatterPieces__Destroy @ 0x800F722C (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Collider__Destroy(void *, s32);
void Emitter__Kill(void *);
M2C_UNK Protagonist__Destroy(void *, s32);          /* extern */
extern M2C_UNK lbl_80331B50 __attribute__((section(".data")));
extern M2C_UNK lbl_80331C10 __attribute__((section(".data")));
extern M2C_UNK lbl_80340F30 __attribute__((section(".data")));
extern M2C_UNK lbl_80340FF0 __attribute__((section(".data")));

void ShatterPieces__Destroy(void *arg0, s32 arg1) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x370);
    M2C_FIELD(arg0, M2C_UNK **, 0x198) = &lbl_80331B50;
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = &lbl_80331C10;
    if (temp_r3 != NULL) {
        Emitter__Kill(temp_r3);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x198) = &lbl_80340F30;
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = &lbl_80340FF0;
    Collider__Destroy(arg0 + 0x198, 0);
    Protagonist__Destroy(arg0, arg1);
}
