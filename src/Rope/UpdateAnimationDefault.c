/* Rope__UpdateAnimationDefault @ 0x802C1F04 (size: 0xCC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void CActor__UpdateAnimationDefault(s32);
M2C_UNK DebugDraw__Box(s32, s32, s32, s32, s32);

void Rope__UpdateAnimationDefault(void *arg0) {
    void *b1; void *q1; s32 v1; void *q2; s32 a1; void *e1; s32 c1; void *q3;
    void *b2; s32 v2; s32 a2; void *e2; s32 c2;
    void *b3; s32 v3; s32 a3; void *e3; s32 c3;

    if (M2C_FIELD(arg0, s32 *, 0x64C) != 0) {
        DebugDraw__Box((s32)(arg0 + 0x43C), (s32)(arg0 + 0x430), 0, 0, 2);
    }
    if (M2C_FIELD(arg0, s32 *, 0x644) != 3) {
        CActor__UpdateAnimationDefault((s32)arg0);
        b1 = M2C_FIELD(arg0, void **, 0x84);
        q1 = arg0 + 0x284;
        v1 = M2C_FIELD(arg0, s32 *, 0x284);
        q2 = arg0 + 0x430;
        a1 = M2C_FIELD(q1, s32 *, 4);
        e1 = b1 + 0x50;
        c1 = M2C_FIELD(q1, s32 *, 8);
        q3 = arg0 + 0x43C;
        M2C_FIELD(b1, s32 *, 0x50) = v1;
        M2C_FIELD(e1, s32 *, 4) = a1;
        M2C_FIELD(e1, s32 *, 8) = c1;
        b2 = M2C_FIELD(arg0, void **, 0x84);
        v2 = M2C_FIELD(arg0, s32 *, 0x430);
        a2 = M2C_FIELD(q2, s32 *, 4);
        e2 = b2 + 0x60;
        c2 = M2C_FIELD(q2, s32 *, 8);
        M2C_FIELD(b2, s32 *, 0x60) = v2;
        M2C_FIELD(e2, s32 *, 4) = a2;
        M2C_FIELD(e2, s32 *, 8) = c2;
        b3 = M2C_FIELD(arg0, void **, 0x84);
        v3 = M2C_FIELD(arg0, s32 *, 0x43C);
        a3 = M2C_FIELD(q3, s32 *, 4);
        e3 = b3 + 0x6C;
        c3 = M2C_FIELD(q3, s32 *, 8);
        M2C_FIELD(b3, s32 *, 0x6C) = v3;
        M2C_FIELD(e3, s32 *, 4) = a3;
        M2C_FIELD(e3, s32 *, 8) = c3;
    }
}
