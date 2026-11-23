/* Exploder__SpawnFragments @ 0x800ED8B8 (size: 0x2F4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Database__GetReferenceStorage(void *, void *);
void *Mem__New(u32);
void Cast__AddNonProtagonist(s32, s32);
void Sound__Play3DAtActorWithVolumePitch(char *, void *, s32, f32, f32);
void Sound__Play3D(char *, void *, s32, s32);
void Exploder__ShrinkOrMarkForDeath(void *, f32);
void Simple__ApplyStateFlags(void *);
void EventDispatcher__Send(void *, s32, s32, s32, void *);
int String__CompareIgnoreCase(const char *, const char *);
int strcmp(const char *, const char *);
s32 ShatterPieces__ConstructFromParameters(void *, void *, void *, void *, void *, void *, s32, void *, f32, f32);
void ParticleMgr__CreateEffectByName(char *, void *, void *, s32, s32, s32, s32, s32, f32, f32, f32, f32);
extern f32 lbl_80323ACC __attribute__((section(".data")));
extern f32 lbl_80323AD0 __attribute__((section(".data")));
extern f32 lbl_80323AD4 __attribute__((section(".data")));
extern M2C_UNK lbl_803B1DDC __attribute__((section(".data")));
extern void *lbl_803DCCB8 __attribute__((section(".sdata")));
extern char lbl_8031D820[] __attribute__((section(".data")));
extern char lbl_8036AEB8[] __attribute__((section(".data")));

/* WIP 8.5% (id 9a123f7d). Full structure decoded (see lesson). WALLS (all MW-version
 * RA differences, not source-shape): ours keeps 12 (stmw r20) vs 9 (r23) - our MW
 * splits disjoint same-type reassigns (r29u/r30u/node dual-lives use 6 regs not 3);
 * ptr-copies coalesce (r7+mr-r23 -> single, missing mr); [0]-direct/[1,2]-ptr copy
 * pattern needs ptr-vars for [1,2] (ours all-direct). Frame 136 vs 128. */
typedef struct { f32 v0, v1, v2; } V3;
void Exploder__SpawnFragments(void *arg0) {
    V3 v32;
    V3 v48;
    V3 v64;
    V3 v80;
    s32 Sa;
    s32 Sb;
    s32 Sc;
    char *r7v;
    void *r23v;
    void *r24v;
    char *r25v;
    char *r26v;
    void *r27v;
    u32 r29u;
    u32 r30u;
    char *r30v;
    void *node;
    f32 f9v;
    f32 f8v;
    f32 f11v;
    void *newp;
    s32 shret;
    char *vbase;

    r7v = (char *) &v32;
    node = M2C_FIELD(arg0, void **, 0x704);
    M2C_FIELD(r7v, f32 *, 0) = lbl_80323ACC;
    M2C_FIELD(r7v, f32 *, 4) = lbl_80323ACC;
    M2C_FIELD(r7v, f32 *, 8) = lbl_80323ACC;
    if (node != NULL) {
        r23v = r7v;
        r29u = (u32) arg0 + 0x44;
        r27v = &v48;
        r24v = &v80;
        r25v = (char *)arg0 + 0x6F4;
        r26v = (char *)arg0 + 0x38;
        do {
            r30u = (u32)node + 8;
            r30v = (char *)r30u;
            f9v = M2C_FIELD(r30v, f32 *, 4);
            f8v = M2C_FIELD(node, f32 *, 8);
            f11v = M2C_FIELD(r30v, f32 *, 8);
            v48.v0 = (f11v * M2C_FIELD((void *)r29u, f32 *, 0x18)) + ((f8v * M2C_FIELD(arg0, f32 *, 0x44)) + (f9v * M2C_FIELD((void *)r29u, f32 *, 0xC)));
            v48.v1 = (f11v * M2C_FIELD((void *)r29u, f32 *, 0x1C)) + ((f8v * M2C_FIELD((void *)r29u, f32 *, 4)) + (f9v * M2C_FIELD((void *)r29u, f32 *, 0x10)));
            v48.v2 = (f11v * M2C_FIELD((void *)r29u, f32 *, 0x20)) + ((f8v * M2C_FIELD((void *)r29u, f32 *, 8)) + (f9v * M2C_FIELD((void *)r29u, f32 *, 0x14)));
            M2C_FIELD(node, s32 *, 8) = M2C_FIELD(&v48, s32 *, 0);
            M2C_FIELD(r30v, s32 *, 4) = M2C_FIELD(r27v, s32 *, 4);
            M2C_FIELD(r30v, s32 *, 8) = M2C_FIELD(r27v, s32 *, 8);
            Database__GetReferenceStorage(M2C_FIELD(node, void **, 0), r24v);
            v48.v0 = M2C_FIELD(arg0, f32 *, 0x6F4);
            v48.v1 = M2C_FIELD(r25v, f32 *, 4);
            v48.v2 = M2C_FIELD(r25v, f32 *, 8);
            newp = Mem__New(896);
            v64.v0 = M2C_FIELD(arg0, f32 *, 0x38) + M2C_FIELD(node, f32 *, 8);
            v64.v1 = M2C_FIELD(r26v, f32 *, 4) + M2C_FIELD(r30v, f32 *, 4);
            v64.v2 = M2C_FIELD(r26v, f32 *, 8) + M2C_FIELD(r30v, f32 *, 8);
            shret = ShatterPieces__ConstructFromParameters(newp, r24v, &v64, (void *)r29u, r23v, r23v, M2C_FIELD(arg0, s32 *, 0x6E8), r27v, M2C_FIELD(arg0, f32 *, 0x6D4), lbl_80323AD0);
            M2C_FIELD(node, s32 *, 4) = shret;
            Cast__AddNonProtagonist((s32)lbl_803DCCB8, shret);
            node = M2C_FIELD(node, void **, 0x14);
        } while (node != NULL);
    }
    if (M2C_FIELD(arg0, u8 *, 0x53A) != 0) {
        v48.v0 = lbl_80323ACC;
        v48.v1 = lbl_80323ACC;
        v48.v2 = lbl_80323ACC;
        v48.v1 = lbl_80323AD4;
        Sa = M2C_FIELD(arg0, s32 *, 0x38);
        Sb = M2C_FIELD(arg0, s32 *, 0x3C);
        Sc = M2C_FIELD(arg0, s32 *, 0x40);
        M2C_FIELD(&Sb, f32 *, 0) = M2C_FIELD(&Sb, f32 *, 0) + lbl_80323AD4;
        ParticleMgr__CreateEffectByName((char *)arg0 + 0x53A, &Sa, &v48, 0, 0, 0, 0, -1, lbl_80323ACC, lbl_80323AD4, lbl_80323AD4, lbl_80323AD4);
    }
    if (strcmp((char *)arg0 + 0x59E, lbl_8031D820) == 0) {
        r27v = (char *)arg0 + 0x19C;
        for (r29u = 0; r29u <= 6; r29u++) {
            r30u = r29u * 104;
            node = (void *)lbl_8036AEB8;
            if (String__CompareIgnoreCase((char *)node + r30u, (char *)arg0 + 0x508) == 0) {
                vbase = lbl_8036AEB8 + 100;
                Sound__Play3DAtActorWithVolumePitch(((char *)node + 50) + r30u, arg0, 0, *(f32 *)(vbase + r30u), lbl_80323ACC);
                break;
            }
        }
    } else {
        Sound__Play3D((char *)arg0 + 0x59E, (char *)arg0 + 0x38, 0, 0);
        r27v = (char *)arg0 + 0x19C;
    }
    Exploder__ShrinkOrMarkForDeath(arg0, lbl_80323ACC);
    M2C_FIELD(arg0, s32 *, 0x6C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x710) = 0;
    Simple__ApplyStateFlags(arg0);
    EventDispatcher__Send(&lbl_803B1DDC, 0x20072, (s32) arg0, (s32) arg0, r27v);
}
