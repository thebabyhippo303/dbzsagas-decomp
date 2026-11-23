/* Audio__LoadBank @ 0x8019077C (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


s32 Audio__LoadBank(void *arg0) {
    void *bank = M2C_FIELD(arg0, void **, 0x180);
    void *vtable;

    if (bank == NULL) {
        return 0;
    }
    vtable = M2C_FIELD(bank, void **, 0x60);
    return M2C_FIELD(vtable, s32 (**)(void *), 0x74)(bank + M2C_FIELD(vtable, s16 *, 0x70));
}
