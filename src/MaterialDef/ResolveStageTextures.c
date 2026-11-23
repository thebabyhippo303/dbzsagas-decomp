/* MaterialDef__ResolveStageTextures @ 0x80247C48 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct MatStage {
    s16 bind;
    char pad[5];
    u8 flags;
    char pad2[32];
} MatStage;
typedef struct MaterialDef {
    char pad[4];
    u8 n;
    u8 pad5;
} MaterialDef;
typedef struct TDB {
    char pad[4];
    u16 f4;
} TDB;
extern TDB lbl_803B1C6C __attribute__((section(".data")));
s32 TextureMgr__GetActiveDatabase(void);
u16 TextureSet__GetFrameBind(void *, s32);

void MaterialDef__ResolveStageTextures(MaterialDef *self) {
    int i = 0;
    MatStage *p = (MatStage *)((char *)self + 6);

    for (; i < self->n; i++, p++) {
        if (p->flags & 0x10) {
            p->bind = lbl_803B1C6C.f4;
        } else {
            p->bind = TextureSet__GetFrameBind((void *)TextureMgr__GetActiveDatabase(), p->bind);
        }
    }
}
