/* Avatar__CreateEffectWorldPos @ 0x8003BCCC (size: 0x138, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef float f32;
s32 Script__PopInt(void *, s32);
char * Script__PopString(void *, s32, void *);
f32 Script__PopFloat(void *, s32);
void Mem__DeleteArray(void *);
int Avatar__CreateEffectImpl(void *, char *, void *, void *, int, f32);
extern f32 lbl_80311A8C __attribute__((section(".data")));
extern f32 lbl_80311A90 __attribute__((section(".data")));

void Avatar__CreateEffectWorldPos(void *self, s32 ctx) {
    f32 pos[3];
    f32 dir[3];
    s32 owned;
    f32 *p;
    char *name;
    s32 obj;
    obj = Script__PopInt(self, ctx);
    p = pos;
    name = Script__PopString(self, ctx, &owned);
    pos[0] = Script__PopFloat(self, ctx);
    p[1] = Script__PopFloat(self, ctx);
    p[2] = Script__PopFloat(self, ctx);
    dir[0] = Script__PopFloat(self, ctx);
    dir[1] = Script__PopFloat(self, ctx);
    dir[2] = Script__PopFloat(self, ctx);
    if (dir[0] == lbl_80311A8C && dir[1] == lbl_80311A8C && dir[2] == lbl_80311A8C) {
        Avatar__CreateEffectImpl((char *)obj + 0x684, name, p, 0, 0, lbl_80311A90);
    } else {
        Avatar__CreateEffectImpl((char *)obj + 0x684, name, pos, dir, 0, lbl_80311A90);
    }
    if (owned != 0 && name != 0) {
        Mem__DeleteArray(name);
    }
}
