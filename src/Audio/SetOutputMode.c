/* Audio__SetOutputMode @ 0x80190680 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


void Audio__SetOutputMode(void *arg0) {
    void *device = M2C_FIELD(arg0, void **, 0x180);
    void *vtable = M2C_FIELD(device, void **, 0x60);
    M2C_FIELD(vtable, M2C_UNK (**)(void *), 0x34)(device + M2C_FIELD(vtable, s16 *, 0x30));
}
