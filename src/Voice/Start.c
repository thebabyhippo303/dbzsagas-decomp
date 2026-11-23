/* Voice__Start @ 0x8019CCC0 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef short s16;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
s32 Voice__Start(void *arg0) {
    ((void (*)(void *))M2C_FIELD(M2C_FIELD(arg0, void **, 0x54), void **, 0x34))(
        (char *)arg0 + M2C_FIELD(M2C_FIELD(arg0, void **, 0x54), s16 *, 0x30));
    return 1;
}
