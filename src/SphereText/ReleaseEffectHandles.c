/* SphereText__ReleaseEffectHandles @ 0x80271FEC (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

extern void EffectHandle__Release(unsigned int handle);
extern void Mem__DeleteArray(void *);

void SphereText__ReleaseEffectHandles(void *arg0) {
    s32 var_r29;
    s32 var_r30;
    s32 z;
    void *temp_r3;
    void *temp_r3_2;

    if (M2C_FIELD(arg0, void **, 488) == NULL) {
        goto done;
    }
    var_r30 = 0;
    if (var_r30 < M2C_FIELD(arg0, s32 *, 492)) {
        z = 0;
        var_r29 = 0;
        do {
            temp_r3 = *(void * *)((u32) var_r29 + (u32) M2C_FIELD(arg0, void **, 488));
            if (temp_r3 != NULL) {
                EffectHandle__Release((unsigned int) temp_r3);
            }
            var_r30 += 1;
            var_r29 += 4;
            M2C_FIELD(M2C_FIELD(arg0, void **, 488), s32 *, 0) = z;
        } while (var_r30 < M2C_FIELD(arg0, s32 *, 492));
    }
    temp_r3_2 = M2C_FIELD(arg0, void **, 488);
    if (temp_r3_2 != NULL) {
        Mem__DeleteArray(temp_r3_2);
    }
    M2C_FIELD(arg0, void **, 488) = NULL;
    M2C_FIELD(arg0, s32 *, 492) = 0;
done: ;
}
