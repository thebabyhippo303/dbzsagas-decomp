/* MenuPanel__SelectNextOption @ 0x802684E8 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef short s16;
typedef int s32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
s32 EzNode__GetFirstChild(void *);
void MenuPanel__SelectNextOption(void *self) {
    void *node;
    void *vt;
    void *res;
    node = M2C_FIELD(self, void **, 0xADF8);
    M2C_FIELD(self, void **, 0xADFC) = node;
    if (node != NULL) {
        vt = M2C_FIELD(node, void **, 0x10);
        res = M2C_FIELD(vt, void *(**)(void *), 0x54)((char *)node + M2C_FIELD(vt, s16 *, 0x50));
        M2C_FIELD(self, s32 *, 0xAE8C) = 0;
        M2C_FIELD(self, void **, 0xADF8) = res;
        node = res;
    }
    if (node == NULL) {
        M2C_FIELD(self, s32 *, 0xAE8C) = 1;
        M2C_FIELD(self, void **, 0xADF8) = (void *)EzNode__GetFirstChild((char *)self + 0xADE4);
    }
    vt = M2C_FIELD(self, void **, 0x19C);
    M2C_FIELD(vt, void (**)(void *), 0x534)((char *)self + M2C_FIELD(vt, s16 *, 0x530));
}
