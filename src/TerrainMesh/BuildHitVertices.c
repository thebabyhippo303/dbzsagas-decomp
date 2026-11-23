/* TerrainMesh__BuildHitVertices @ 0x801D2DD4 (size: 0x124, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef unsigned char u8;
typedef unsigned int u32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
s32 TerrainMesh__AddUniqueHitVertex(s32, s32, s32);
extern int lbl_803732BC[] __attribute__((section(".data")));
s32 TerrainMesh__BuildHitVertices(void *arg0) {
    s32 temp_r0;
    s32 temp_r30;
    s32 var_r27;
    s32 var_r28;
    void *temp_r10;
    void *temp_r11;
    void *temp_r29;
    void *temp_r8;
    void *temp_r9;
    void *temp_r9_2;
    temp_r9 = M2C_FIELD(arg0, void **, 0x10);
    if (temp_r9 == NULL) {
        return 0;
    }
    if ((s32)M2C_FIELD(temp_r9, s32 *, 0x24) <= 0) {
        temp_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x24);
        if (temp_r0 > 0) {
            var_r27 = temp_r0;
            var_r28 = 0;
            do {
                temp_r30 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x2C);
                temp_r11 = *(void **)(temp_r30 + var_r28);
                temp_r29 = (void *)(temp_r30 + var_r28);
                M2C_FIELD(temp_r29, s32 *, 0x34) = TerrainMesh__AddUniqueHitVertex((s32)arg0, *(s32 *)((char *)&lbl_803732BC + (M2C_FIELD(temp_r11, u8 *, 0x1F) * 4)) + (M2C_FIELD(temp_r11, s32 *, 0x14) * 0xC), (s32)(temp_r29 + 0x10));
                temp_r9_2 = *(void **)(temp_r30 + var_r28);
                M2C_FIELD(temp_r29, s32 *, 0x38) = TerrainMesh__AddUniqueHitVertex((s32)arg0, *(s32 *)((char *)&lbl_803732BC + (M2C_FIELD(temp_r9_2, u8 *, 0x1F) * 4)) + (M2C_FIELD(temp_r9_2, s32 *, 0x18) * 0xC), (s32)(temp_r29 + 0x1C));
                temp_r8 = *(void **)(temp_r30 + var_r28);
                var_r28 += 0x4C;
                temp_r10 = (void *)(temp_r8 + 0x1C);
                M2C_FIELD(temp_r29, s32 *, 0x3C) = TerrainMesh__AddUniqueHitVertex((s32)arg0, lbl_803732BC[M2C_FIELD(temp_r8, u8 *, 0x1F)] + ((M2C_FIELD(temp_r8, u8 *, 0x1C) | (M2C_FIELD(temp_r10, u8 *, 1) << 8) | (M2C_FIELD(temp_r10, u8 *, 2) << 0x10)) * 0xC), (s32)(temp_r29 + 0x28));
                var_r27 -= 1;
            } while (var_r27 != 0);
        }
    }
    return 1;
}
