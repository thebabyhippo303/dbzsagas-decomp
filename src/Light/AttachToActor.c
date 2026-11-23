/* Light__AttachToActor @ 0x8002E0C8 (size: 0x138, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct { f32 x, y, z; } V3f;
s32 Script__PopInt(void *, s32);
char *Script__PopString(void *, s32, void *);
f32 Script__PopFloat(void *, s32);
s32 Skeleton__FindBoneByName(void *, void *, char *);
void Mem__DeleteArray(void *);
extern f32 lbl_80311678 __attribute__((section(".data")));

void Light__AttachToActor(void *arg0, s32 arg1) {
    s32 bone;
    s32 owned;
    V3f pos;
    V3f zero;
    V3f *pp;
    V3f *zp;
    f32 c;
    char *name;
    char *light;
    char *actor;

    light = (char *) Script__PopInt(arg0, arg1);
    actor = (char *) Script__PopInt(arg0, arg1);
    name = Script__PopString(arg0, arg1, &owned);
    pp = &pos;
    pp->x = Script__PopFloat(arg0, arg1);
    pp->y = Script__PopFloat(arg0, arg1);
    pp->z = Script__PopFloat(arg0, arg1);
    bone = 0;
    if (name != NULL && *name != 0) {
        Skeleton__FindBoneByName(M2C_FIELD(M2C_FIELD(actor, void **, 0x84), void **, 0xC), &bone, name);
    }
    c = lbl_80311678;
    M2C_FIELD(light, s32 *, 0xB8) = bone;
    *(V3f *) (light + 0x34) = pos;
    zp = &zero;
    zero.x = c;
    zp->y = c;
    zp->z = c;
    *(V3f *) (light + 0x40) = zero;
    M2C_FIELD(light, char **, 0xB4) = actor;
    if (owned != 0 && name != NULL) {
        Mem__DeleteArray(name);
    }
}
