/* AnimScript__Op07PopVector @ 0x80235A10 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

typedef struct { char pad[32]; s32 w32; char pad2[20]; s32 f56; } Aux;
typedef struct {
    char pad[8];
    u8 b8;
    u8 b9;
    char pad2[18];
    Aux *aux;
    char pad3[16];
    f32 *vals;
    char pad4[4];
    s32 *table;
} Thread;
typedef struct { char pad[240]; Thread *threads[1]; } AnimState;

s32 AnimScript__Op07PopVector(AnimState *script, s32 idx, s32 *pc) {
    Thread *t = script->threads[idx];
    u8 b;
    s32 b1;
    s32 b2;
    s32 b3;
    f32 v0;
    f32 v1;
    f32 v2;
    f32 tmp[3];
    f32 *d;

    if (t != NULL && t->aux->f56 != 0) {
        *pc += 4;
    }
    b = t->b8;
    d = tmp;
    b1 = b - 1;
    t->b8 = b1;
    v0 = t->vals[(s8)b];
    b2 = b1 - 1;
    t->b8 = b2;
    v1 = t->vals[(s8)b1];
    b3 = b2 - 1;
    t->b8 = b3;
    v2 = t->vals[(s8)b2];
    tmp[0] = v2;
    d[1] = v1;
    d[2] = v0;
    return 0;
}
