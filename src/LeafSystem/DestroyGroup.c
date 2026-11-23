/* LeafSystem__DestroyGroup @ 0x80288450 (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void LeafSystem__DetachInstances(void *, void *, s32);
void LeafSystem__FreeInstances(void *, void *, s32);
void Mem__Delete(void *);
void LeafSystem__DestroyGroup(void *arg0, void *arg1) {
    void *temp_r11;

    LeafSystem__DetachInstances(arg0, M2C_FIELD(arg1, void **, 0x58), M2C_FIELD(arg1, s32 *, 0x5C));
    LeafSystem__FreeInstances(arg0, M2C_FIELD(arg1, void **, 0x58), M2C_FIELD(arg1, s32 *, 0x5C));
    temp_r11 = arg0 + 0x238;
    if ((void *) M2C_FIELD(arg0, void **, 0x238) == arg1) {
        M2C_FIELD(arg0, void **, 0x238) = (void *) M2C_FIELD(arg1, void **, 0x6C);
    } else {
        M2C_FIELD(M2C_FIELD(arg1, void **, 0x68), void **, 0x6C) = (void *) M2C_FIELD(arg1, void **, 0x6C);
    }
    if ((void *) M2C_FIELD(temp_r11, void **, 4) == arg1) {
        M2C_FIELD(temp_r11, void **, 4) = (void *) M2C_FIELD(arg1, void **, 0x68);
    } else {
        M2C_FIELD(M2C_FIELD(arg1, void **, 0x6C), void **, 0x68) = (void *) M2C_FIELD(arg1, void **, 0x68);
    }
    M2C_FIELD(arg1, void **, 0x68) = NULL;
    M2C_FIELD(arg1, void **, 0x6C) = NULL;
    M2C_FIELD(temp_r11, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r11, s32 *, 0xC) - 1);
    Mem__Delete(arg1);
}
