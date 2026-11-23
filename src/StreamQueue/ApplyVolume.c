/* StreamQueue__ApplyVolume @ 0x80194F10 (size: 0x15C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern f32 lbl_8033F5B0 __attribute__((section(".data")));

/* Keep the int-to-float constant pool at the same low 16 bits as the DOL. */
static const char pool_pad[0xF5A8] = {1};

void StreamQueue__ApplyVolume(void *arg0) {
    f32 var_f31;
    f32 var_f1;
    s32 mode;
    u32 raw;
    void *obj;
    void *vt;
    void *ch;
    void *chvt;

    mode = M2C_FIELD(arg0, s32 *, 0x50);
    var_f31 = M2C_FIELD(arg0, f32 *, 0x48) * M2C_FIELD(arg0, f32 *, 0x4C);
    if (mode == 0) {
        obj = M2C_FIELD(arg0, void **, 0);
        vt = M2C_FIELD(obj, void **, 0x60);
        raw = M2C_FIELD(vt, u32 (**)(void *), 0x4C)((char *)obj + M2C_FIELD(vt, s16 *, 0x48));
        var_f1 = M2C_FIELD(M2C_FIELD((char *)arg0 + 0x54, void **, 8), f32 (**)(void *, f32), 0x1C)((char *)arg0 + 0x54 + M2C_FIELD(M2C_FIELD((char *)arg0 + 0x54, void **, 8), s16 *, 0x18), ((f32) (f64) raw * lbl_8033F5B0) - M2C_FIELD((char *)arg0 + 0x54, f32 *, 4));
        var_f31 *= M2C_FIELD(arg0, f32 *, 0x54) * var_f1;
    } else if (mode == 1) {
        obj = M2C_FIELD(arg0, void **, 0);
        vt = M2C_FIELD(obj, void **, 0x60);
        raw = M2C_FIELD(vt, u32 (**)(void *), 0x4C)((char *)obj + M2C_FIELD(vt, s16 *, 0x48));
        var_f1 = M2C_FIELD(M2C_FIELD((char *)arg0 + 0x68, void **, 8), f32 (**)(void *, f32), 0x1C)((char *)arg0 + 0x68 + M2C_FIELD(M2C_FIELD((char *)arg0 + 0x68, void **, 8), s16 *, 0x18), ((f32) (f64) raw * lbl_8033F5B0) - M2C_FIELD((char *)arg0 + 0x68, f32 *, 4));
        var_f31 *= M2C_FIELD(arg0, f32 *, 0x68) * var_f1;
    }
    obj = M2C_FIELD(arg0, void **, 0x80);
    if (obj != NULL) {
        vt = M2C_FIELD(obj, void **, 0x28);
        M2C_FIELD(vt, M2C_UNK (**)(void *, f32), 0x3C)((char *)obj + M2C_FIELD(vt, s16 *, 0x38), var_f31);
    }
}
