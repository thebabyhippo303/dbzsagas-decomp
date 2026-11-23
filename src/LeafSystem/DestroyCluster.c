/* LeafSystem__DestroyCluster @ 0x80289468 (size: 0xC8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32; typedef double f64; typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void LeafSystem__DetachInstances(void *, void *, s32);
void LeafSystem__FreeInstances(void *, void *, s32);
void Mem__Delete(void *);
void LeafSystem__DestroyCluster(void *arg0, void *arg1) {
    void *temp_r11;
    if (arg1 != NULL) {
        temp_r11 = arg0 + 0x254;
        if ((void *) M2C_FIELD(arg0, void **, 0x254) == arg1) {
            M2C_FIELD(arg0, void **, 0x254) = (void *) M2C_FIELD(arg1, void **, 0x2C);
        } else {
            M2C_FIELD(M2C_FIELD(arg1, void **, 0x28), void **, 0x2C) = (void *) M2C_FIELD(arg1, void **, 0x2C);
        }
        if ((void *) M2C_FIELD(temp_r11, void **, 4) == arg1) {
            M2C_FIELD(temp_r11, void **, 4) = (void *) M2C_FIELD(arg1, void **, 0x28);
        } else {
            M2C_FIELD(M2C_FIELD(arg1, void **, 0x2C), void **, 0x28) = (void *) M2C_FIELD(arg1, void **, 0x28);
        }
        M2C_FIELD(arg1, void **, 0x28) = NULL;
        M2C_FIELD(arg1, void **, 0x2C) = NULL;
        M2C_FIELD(temp_r11, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r11, s32 *, 0xC) - 1);
        if ((s32) M2C_FIELD(arg1, s32 *, 0x1C) != 0) {
            LeafSystem__DetachInstances(arg0, M2C_FIELD(arg1, void **, 0x20), M2C_FIELD(arg1, s32 *, 0x24));
        }
        LeafSystem__FreeInstances(arg0, M2C_FIELD(arg1, void **, 0x20), M2C_FIELD(arg1, s32 *, 0x24));
        Mem__Delete(arg1);
    }
}
