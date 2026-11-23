/* ControllerMap__FindFreeConnectedController @ 0x801D67D8 (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 ControllerMap__IsPortAssigned(void *, u32);
s32 ControllerMap__FindFreeConnectedController(void *arg0) {
    u32 i;
    s32 off;
    void *obj;
    void *vt;

    i = 0;
    if (i < M2C_FIELD(arg0, u32 *, 8)) {
        off = 0;
        do {
            obj = *(void **)(off + M2C_FIELD(arg0, s32 *, 0));
            if (obj != NULL) {
                vt = M2C_FIELD(obj, void **, 0x1F8);
                if ((M2C_FIELD(vt, s32 (**)(void *), 0x24)((char *)obj + M2C_FIELD(vt, s16 *, 0x20)) != 0) && (ControllerMap__IsPortAssigned(arg0, i) == 0)) {
                    return *(s32 *)(off + M2C_FIELD(arg0, s32 *, 0));
                }
            }
            i += 1;
            off += 4;
        } while (i < M2C_FIELD(arg0, u32 *, 8));
    }
    return 0;
}
