/* AnimScript__OpCall @ 0x80238FA4 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
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
    s32 *vals;
    char pad4[4];
    s32 *table;
} Thread;
typedef struct { char pad[240]; Thread *threads[1]; } AnimState;

s32 AnimScript__OpCall(AnimState *script, s32 idx, s32 *pc) {
    Thread *t = script->threads[idx];
    u8 b;
    u8 h;
    s32 v;

    if (t != 0 && t->aux->f56 != 0) {
        *pc += 4;
    }
    b = t->b8;
    h = t->b9;
    t->b8 = b - 1;
    v = t->vals[(s8)b];
    t->b9 = h + 1;
    t->table[(s8)(h + 1)] = *pc;
    *pc = t->aux->w32 + v;
    return 0;
}
