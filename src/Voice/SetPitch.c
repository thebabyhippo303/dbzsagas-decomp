/* Voice__SetPitch @ 0x8019CEB8 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef short s16;
typedef float f32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
void Voice__SetPitch(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x40) = farg0;
    ((void (*)(void *))M2C_FIELD(M2C_FIELD(arg0, void **, 0x54), void **, 0x5C))(
        (char *)arg0 + M2C_FIELD(M2C_FIELD(arg0, void **, 0x54), s16 *, 0x58));
}
