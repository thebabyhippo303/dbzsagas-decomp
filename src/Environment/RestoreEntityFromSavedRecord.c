/* Environment__RestoreEntityFromSavedRecord @ 0x800EAFC0 (size: 0x168, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef short s16; typedef unsigned char u8; typedef float f32;
#define F(e, t, o) (*(t)((char *)(e) + (o)))
extern char lbl_803BEFC0[] __attribute__((section(".data")));
void fn_802B2ED8(void *, s32);
char *fn_802B3010(void *, s32, s32);
void *Environment__CreateEntityFromType(char *);
void Environment__GetEntityTypeFlags(s32 *, char *);
f32 Environment__CacheEntityTypeIndex(void *, void *);
void fn_802C5034(void *, s32);
void Script__ApplyAiParameters(void *);
void fn_802C50CC(void *);

void *Environment__RestoreEntityFromSavedRecord(void *arg0, s32 arg1) {
    s32 flags;
    char *type;
    char *ent;
    void *vt;
    void *vt_b;
    char *ai;
    char *ai2;
    s32 t;

    fn_802B2ED8(lbl_803BEFC0, arg1);
    type = fn_802B3010(lbl_803BEFC0, 0, 0);
    ent = Environment__CreateEntityFromType(type);
    if (ent == 0) return 0;
    vt = F(ent, void **, 0x34);
    F(ent, s32 *, 0x26C) = 1;
    if (F(vt, s32 (**)(void *), 0x174)(ent + F(vt, s16 *, 0x170)) == 0) {
        vt = F(ent, void **, 0x34);
        F(vt, void (**)(void *, s32), 0x3C)(ent + F(vt, s16 *, 0x38), 3);
        fn_802B2ED8(lbl_803BEFC0, 0);
        return 0;
    }
    Environment__GetEntityTypeFlags(&flags, type);
    t = F(ent, s32 *, 0x10);
    t |= flags;
    F(ent, s32 *, 0x10) = t;
    Environment__CacheEntityTypeIndex(arg0, ent);
    fn_802C5034(ent, 0);
    ai = F(F(ent, void **, 0x84), char **, 0xFC);
    if (ai != 0) {
        F(ai, u8 *, 4) = F(ai, u8 *, 4) | 2;
        Script__ApplyAiParameters(ent);
        ai2 = F(F(ent, void **, 0x84), char **, 0xFC);
        F(ai2, u8 *, 4) = F(ai2, u8 *, 4) & 0xFD;
        if (F(F(ent, void **, 0x84), char **, 0xFC) != 0) fn_802C50CC(ent);
    }
    vt_b = F(ent, void **, 0x34);
    F(vt_b, void (**)(void *), 0x17C)(ent + F(vt_b, s16 *, 0x178));
    fn_802B2ED8(lbl_803BEFC0, 0);
    return ent;
}
