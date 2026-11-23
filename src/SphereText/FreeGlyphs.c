/* SphereText__FreeGlyphs @ 0x80271E38 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 EffectHandle__Release(u32);
void Mem__DeleteArray(void *);
void SphereText__FreeGlyphs(void *arg0) {
    s32 temp_r3;
    s32 var_r30;
    s32 var_r29;
    u32 base_r9;
    void *temp_r3_2;

    if ((void *) M2C_FIELD(arg0, void **, 0x1E0) != NULL) {
        var_r30 = 0;
        if (var_r30 < (s32) M2C_FIELD(arg0, s32 *, 0x1E4)) {
            var_r29 = 0;
            do {
                base_r9 = (u32) M2C_FIELD(arg0, void **, 0x1E0);
                temp_r3 = *(s32 *)(var_r29 + base_r9);
                if (temp_r3 != 0) {
                    EffectHandle__Release((u32) temp_r3);
                }
                var_r30 += 1;
                var_r29 += 0x9C;
            } while (var_r30 < (s32) M2C_FIELD(arg0, s32 *, 0x1E4));
        }
        temp_r3_2 = M2C_FIELD(arg0, void **, 0x1E0);
        if (temp_r3_2 != NULL) {
            Mem__DeleteArray(temp_r3_2);
        }
        M2C_FIELD(arg0, void **, 0x1E0) = NULL;
        M2C_FIELD(arg0, s32 *, 0x1E4) = 0;
    }
}
