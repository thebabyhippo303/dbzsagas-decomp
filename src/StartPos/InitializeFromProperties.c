/* StartPos__InitializeFromProperties @ 0x800EB974 (size: 0x31C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct { f32 x, y, z; } Vec3;

typedef struct {
    u8 pad[16];
    f32 a0;
    f32 a1;
    f32 a2;
    f32 a3;
    f32 b0;
    f32 b1;
    f32 b2;
    f32 b3;
    f32 c0;
    f32 c1;
    f32 c2;
    f32 c3;
    f32 d0;
    f32 d1;
    f32 d2;
} StartPosInst;

typedef struct {
    u8 pad[116];
    Vec3 pos[2];
    f32 ang[2];
} StartPosTable;

char *PropertyStream__ReadInstanceName(void *);
void *Instance__FindByName(void *, char *, int, int);
s32 PropertyStream__ReadInt(void *, const char *, const char *);
float sqrtf(float);
f32 asinf(f32);
extern M2C_UNK lbl_803BEFC0 __attribute__((section(".data")));
extern M2C_UNK lbl_803B1E84 __attribute__((section(".data")));
extern s8 lbl_80323910[] __attribute__((section(".data")));
extern s8 lbl_80323898[] __attribute__((section(".data")));
extern f32 lbl_80323920 __attribute__((section(".data")));
extern f32 lbl_80323924 __attribute__((section(".data")));
extern f32 lbl_80323928 __attribute__((section(".data")));
extern f32 lbl_8032392C __attribute__((section(".data")));
extern void *lbl_803DC3C0;

void StartPos__InitializeFromProperties(void) {
    Vec3 v8;
    Vec3 v18;
    Vec3 v40;
    Vec3 v56;
    Vec3 v72;
    Vec3 v88;
    Vec3 v104;
    Vec3 v120;
    StartPosInst *inst;
    char *name;
    u32 player;
    f32 cA;
    f32 cB;
    f32 t9;
    f32 t7;
    f32 t13;
    f32 t10;
    f32 t8;
    f32 t11;
    f32 t12;
    f32 t13b;
    f32 t0b;
    f32 dot;
    f32 inv;

    name = PropertyStream__ReadInstanceName(&lbl_803BEFC0);
    if (name == NULL) {
        return;
    }
    inst = (StartPosInst *)Instance__FindByName(&lbl_803B1E84, name, 0, 0);
    if (inst == NULL) {
        return;
    }
    player = (u32)(PropertyStream__ReadInt(&lbl_803BEFC0, lbl_80323910, lbl_80323898) - 1);
    if (player > 1U) {
        player = 0;
    }
    cA = lbl_80323920;
    cB = lbl_80323924;
    v8.x = cA;
    v8.y = cA;
    v8.z = cA;
    v40.x = cA;
    v40.z = cB;
    v40.y = cA;
    t9 = v8.y * inst->b0;
    t7 = v8.y * inst->b1;
    t13 = v8.y * inst->b2;
    t10 = v8.x * inst->a2 + t13;
    t8 = v8.x * inst->a0 + t9;
    t11 = v8.z * inst->c0 + t8;
    t12 = v8.x * inst->a1 + t7;
    t13b = v8.z * inst->c2 + t10;
    t0b = v8.z * inst->c1 + t12;
    v56.x = t11 + inst->d0;
    v56.y = t0b + inst->d1;
    v56.z = t13b + inst->d2;
    v72.x = inst->c0;
    v72.y = inst->c1;
    v72.z = inst->c2;
    v18 = v72;
    v18.y = cA;
    v88.x = v18.x * v18.x;
    v88.y = v18.y * v18.y;
    v88.z = v18.z * v18.z;
    if (!((v88.x + v88.y + v88.z) >= lbl_80323928)) {
        v18.x = cA;
        v18.z = cB;
        v18.y = cA;
    }
    v104.x = v18.x * v18.x;
    v104.y = v18.y * v18.y;
    v104.z = v18.z * v18.z;
    inv = cB / sqrtf(v104.x + v104.y + v104.z);
    v120.z = v18.z * inv;
    v120.x = v18.x * inv;
    v120.y = v18.y * inv;
    v18 = v120;
    v104 = v120;
    ((StartPosTable *)lbl_803DC3C0)->pos[player] = v56;
    v72.x = v18.x * v40.x;
    v72.y = v18.y * v40.y;
    v72.z = v18.z * v40.z;
    dot = v72.x + v72.y + v72.z;
    if (!(dot >= lbl_8032392C)) {
        dot = lbl_8032392C;
    }
    if (!(dot <= cB)) {
        dot = cB;
    }
    ((StartPosTable *)lbl_803DC3C0)->ang[player] = asinf(dot);
    if (!(v18.x >= cA)) {
        ((StartPosTable *)lbl_803DC3C0)->ang[player] = -((StartPosTable *)lbl_803DC3C0)->ang[player];
    }
}
