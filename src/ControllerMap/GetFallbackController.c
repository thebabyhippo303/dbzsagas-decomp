/* ControllerMap__GetFallbackController @ 0x801D687C (size: 0xD4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


s32 ControllerMap__GetFallbackController(void *arg0) {
    u32 i;
    s32 idx;
    void *obj;
    void *vt;

    for (i = 0; i < M2C_FIELD(arg0, u32 *, 8); i++) {
        idx = M2C_FIELD(M2C_FIELD(arg0, s32 **, 4), s32 *, i * 4);
        if (idx != -1) {
            return M2C_FIELD(M2C_FIELD(arg0, s32 **, 0), s32 *, idx * 4);
        }
    }
    for (i = 0; i < M2C_FIELD(arg0, u32 *, 8); i++) {
        obj = M2C_FIELD(M2C_FIELD(arg0, void ***, 0), void **, i * 4);
        if (obj != NULL) {
            vt = M2C_FIELD(obj, void **, 0x1F8);
            if (M2C_FIELD(vt, s32 (**)(void *), 0x24)((char *)obj + M2C_FIELD(vt, s16 *, 0x20)) != 0) {
                return M2C_FIELD(M2C_FIELD(arg0, s32 **, 0), s32 *, i * 4);
            }
        }
    }
    return *M2C_FIELD(arg0, s32 **, 0);
}
