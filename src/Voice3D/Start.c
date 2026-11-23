/* Voice3D__Start @ 0x8019C150 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK Voice3D__ComputeSpatialization(void *, M2C_UNK); /* extern */

void Voice3D__Start(void *arg0) {
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 0x54);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x34)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x30));
    Voice3D__ComputeSpatialization(arg0, 0);
}
