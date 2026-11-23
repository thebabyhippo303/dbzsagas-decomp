/* AnimScript__Op55LoadThreadWord @ 0x80236C78 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

typedef struct { char pad[32]; s32 w32; char pad2[20]; s32 f56; } Aux;
typedef struct {
    char pad[8];
    u8 b8;
    u8 b9;
    s16 b10;
    char pad2[8];
    s32 f20;
    char pad3[4];
    Aux *aux;
    char pad4[16];
    f32 *vals;
    char pad5[4];
    s32 *table;
} Thread;
typedef struct { char pad[240]; Thread *threads[1]; } AnimState;

s32 AnimScript__Op55LoadThreadWord(AnimState *script, s32 idx, s32 *pc) {
    if (script->threads[idx] != NULL && script->threads[idx]->aux->f56 != 0) {
        *pc += 4;
    }
    script->threads[idx]->f20 = (s32)script->threads[idx]->b10;
    script->threads[idx]->f20 = (u32)M2C_FIELD(script->threads[idx], u16 *, 22);
    return 0;
}
