/* AnimScript__CallActorLabelWithResult @ 0x802AC130 (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
void Script__PushInt(void *, s32, s32);
void AnimScript__SetLabelAddress(void *, s32, s32);
void AnimScript__RunThread(void *, s32, s32);
s32 Script__PopInt(void *, s32);
typedef struct {
    char pad[8];
    s8 b8;
    s8 b9;
    char pad2[12 - 10];
    s32 w12;
    s32 w16;
} Sub;
typedef struct {
    char pad[252];
    Sub *sub;
} State;
s32 AnimScript__CallActorLabelWithResult(State *s, s32 label, s32 val, s32 flag) {
    Sub *sub = s->sub;
    s32 sav12;
    s32 sav16;
    s32 res;
    sav12 = sub->w12;
    sav16 = sub->w16;
    Script__PushInt(s, 3, val);
    AnimScript__SetLabelAddress(s, 3, label);
    AnimScript__RunThread(s, 3, 1);
    s->sub->w12 = sav12;
    s->sub->w16 = sav16;
    res = Script__PopInt(s, 3);
    if ((flag != 0) && (res != -1)) {
        sub = s->sub;
        sub->b9 = -1;
        sub->b8 = -1;
        AnimScript__SetLabelAddress(s, 3, res);
    }
    return res;
}
