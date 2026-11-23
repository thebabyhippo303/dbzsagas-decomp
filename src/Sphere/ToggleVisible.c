/* Sphere__ToggleVisible @ 0x8026D438 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Sphere__ToggleVisible(void *arg0) {
    void *self = arg0;
    void *o;

    if (M2C_FIELD(self, s32 *, 276) != 0) {
        o = M2C_FIELD(self, void **, 412);
        M2C_FIELD(o, M2C_UNK (**)(void *), 476)((char *)self + M2C_FIELD(o, s16 *, 472));
    } else {
        o = M2C_FIELD(self, void **, 412);
        M2C_FIELD(o, M2C_UNK (**)(void *), 460)((char *)self + M2C_FIELD(o, s16 *, 456));
    }
}
