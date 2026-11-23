/* RenderInstance__DrawModel @ 0x802073A8 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 ProjectedTexture__IsActive(void);
void RenderState__Change(s32, s32);
void RenderState__Lock(s32);
void RenderState__Unlock(s32);
void RenderInstance__DrawModel(void *arg0, f32 farg, s32 arg1) {
    void **obj;
    void *vt;

    if (ProjectedTexture__IsActive() == 0) {
        if (M2C_FIELD(arg0, u8 *, 1) & 2) {
            RenderState__Change(6, 0);
        }
        RenderState__Lock(6);
        obj = M2C_FIELD(arg0, void ***, 0x78);
        vt = *obj;
        M2C_FIELD(vt, M2C_UNK (**)(void *, void *, s32, f32), 0x14)((char *)obj + M2C_FIELD(vt, s16 *, 0x10), arg0, arg1, farg);
        RenderState__Unlock(6);
    }
}
