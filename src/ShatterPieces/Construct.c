/* ShatterPieces__Construct @ 0x800F72B0 (size: 0xB0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef short s16; typedef int s32; typedef float f32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
void *Protagonist__Initialize(void *);
void *SceneLights__GetAmbientColor(void);
void CActor__SetLightingMode(void *, s32);
void ShatterPieces__InitializeGeometry(void *);
void RigidBody__SyncActorTransform(void *);
extern f32 lbl_8032436C __attribute__((section(".data")));
extern f32 lbl_80324370 __attribute__((section(".data")));
typedef void (*VFn)(void *);
void *ShatterPieces__Construct(void *self) {
    void *ret;
    s32 one;
    f32 f;
    s32 zero;
    ret = Protagonist__Initialize(self);
    M2C_FIELD(self, f32 *, 0x80) = lbl_8032436C;
    M2C_FIELD(self, void **, 0xDC) = SceneLights__GetAmbientColor();
    CActor__SetLightingMode(self, 1);
    ShatterPieces__InitializeGeometry(self);
    RigidBody__SyncActorTransform(self);
    ((VFn)M2C_FIELD(M2C_FIELD(self, void **, 0x34), void **, 0x94))((char *)self + M2C_FIELD(M2C_FIELD(self, void **, 0x34), s16 *, 0x90));
    ((VFn)M2C_FIELD(M2C_FIELD(self, void **, 0x34), void **, 0xAC))((char *)self + M2C_FIELD(M2C_FIELD(self, void **, 0x34), s16 *, 0xA8));
    one = 1;
    f = lbl_80324370;
    zero = 0;
    M2C_FIELD(self, s32 *, 0x8C) = one;
    M2C_FIELD(self, f32 *, 0x360) = f;
    M2C_FIELD(self, s32 *, 0x364) = zero;
    return ret;
}