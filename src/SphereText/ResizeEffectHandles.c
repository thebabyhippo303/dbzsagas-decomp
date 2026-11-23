/* SphereText__ResizeEffectHandles @ 0x80271EC4 (size: 0x128, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;

void *Mem__NewArray(s32);
void *memcpy(void *, const void *, u32);
s32 EffectHandle__Release(void *);
void Mem__DeleteArray(void *);
void Sphere__InvalidateParents(void *);

void SphereText__ResizeEffectHandles(void *arg0, s32 arg1) {
    s32 bytes;
    void **nw;

    if (arg1 == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 492) == arg1 && M2C_FIELD(arg0, void **, 488) != NULL) {
        return;
    }
    bytes = arg1 * 4;
    nw = Mem__NewArray(bytes);
    if (nw == NULL) {
        return;
    }
    if (arg1 >= M2C_FIELD(arg0, s32 *, 492)) {
        s32 k;
        if (M2C_FIELD(arg0, void **, 488) != NULL) {
            memcpy(nw, M2C_FIELD(arg0, void **, 488), M2C_FIELD(arg0, s32 *, 492) * 4);
        }
        for (k = M2C_FIELD(arg0, s32 *, 492); k < arg1; k++) {
            nw[k] = NULL;
        }
    } else {
        s32 i;
        memcpy(nw, M2C_FIELD(arg0, void **, 488), bytes);
        for (i = arg1; i < M2C_FIELD(arg0, s32 *, 492); i++) {
            if (((void **)M2C_FIELD(arg0, void **, 488))[i] != NULL) {
                EffectHandle__Release(((void **)M2C_FIELD(arg0, void **, 488))[i]);
            }
        }
    }
    if (M2C_FIELD(arg0, void **, 488) != NULL) {
        Mem__DeleteArray(M2C_FIELD(arg0, void **, 488));
    }
    M2C_FIELD(arg0, void **, 488) = nw;
    M2C_FIELD(arg0, s32 *, 492) = arg1;
    Sphere__InvalidateParents(arg0);
}
