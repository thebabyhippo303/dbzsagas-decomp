/* SphereText__ReserveGlyphs @ 0x80271D04 (size: 0x134, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 EffectHandle__Release(u32);
void Mem__DeleteArray(void *);
char * Mem__NewArray(s32);
void Sphere__InvalidateParents(void **);
void * memcpy(void *, const void *, unsigned int);
void SphereText__ReserveGlyphs(void **arg0, s32 arg1) {
    s32 *var_r9;
    s32 temp_r0;
    u32 temp_r3_2;
    s32 temp_r5;
    s32 temp_r9;
    s32 var_ctr;
    s32 var_r29;
    s32 var_r31;
    s8 *temp_r3;
    s8 *temp_r3_3;
    s8 *temp_r4;

    if ((arg1 != 0) && (((s8 *) M2C_FIELD(arg0, s8 **, 0x1E0) == NULL) || (temp_r9 = M2C_FIELD(arg0, s32 *, 0x1E4), ((temp_r9 < arg1) != 0)) || (temp_r9 >= (s32) (arg1 + 8)))) {
        var_r31 = arg1 * 0x9C;
        temp_r3 = Mem__NewArray(var_r31);
        if (temp_r3 != NULL) {
            temp_r5 = M2C_FIELD(arg0, s32 *, 0x1E4);
            if (arg1 >= temp_r5) {
                temp_r4 = M2C_FIELD(arg0, s8 **, 0x1E0);
                if (temp_r4 != NULL) {
                    memcpy(temp_r3, temp_r4, temp_r5 * 0x9C);
                }
                temp_r0 = M2C_FIELD(arg0, s32 *, 0x1E4);
                if (temp_r0 < arg1) {
                    s8 *zdst = (s8 *)(temp_r0 * 0x9C + (s32)temp_r3);
                    for (; temp_r0 < arg1; temp_r0++, zdst += 0x9C) {
                        *(s32 *)zdst = 0;
                    }
                }
            } else {
                var_r29 = arg1;
                memcpy(temp_r3, M2C_FIELD(arg0, s8 **, 0x1E0), (u32) var_r31);
                if (arg1 < (s32) M2C_FIELD(arg0, s32 *, 0x1E4)) {
                    do {
                        temp_r3_2 = *(u32 *)((char *)var_r31 + (s32)M2C_FIELD(arg0, s8 **, 0x1E0));
                        if (temp_r3_2 != 0) {
                            EffectHandle__Release((u32) temp_r3_2);
                        }
                        var_r29 += 1;
                        var_r31 += 0x9C;
                    } while (var_r29 < (s32) M2C_FIELD(arg0, s32 *, 0x1E4));
                }
            }
            temp_r3_3 = M2C_FIELD(arg0, s8 **, 0x1E0);
            if (temp_r3_3 != NULL) {
                Mem__DeleteArray(temp_r3_3);
            }
            M2C_FIELD(arg0, s8 **, 0x1E0) = temp_r3;
            M2C_FIELD(arg0, s32 *, 0x1E4) = arg1;
            Sphere__InvalidateParents(arg0);
        }
    }
}
