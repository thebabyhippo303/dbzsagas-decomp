/* Stage__RemoveTerrain @ 0x801B243C (size: 0x1C0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void TerrainMesh__Destroy(void *, s32);
void Mem__Delete(void *);
M2C_UNK fn_801CB174(s32, s32);
void Stage__RemoveTerrain(void *arg0, void *arg1) {
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r30;
    void *temp_r30_2;
    void *temp_r30_3;
    void *temp_r3;
    void *temp_r3_2;

    if (arg1 == NULL) {
        return;
    }
    temp_r3 = M2C_FIELD(arg1, void **, 8);
    if (temp_r3 != NULL) {
        temp_r30 = arg0 + 0x204;
        if ((void *) M2C_FIELD(arg0, void **, 0x204) == temp_r3) {
            M2C_FIELD(arg0, void **, 0x204) = (void *) M2C_FIELD(temp_r3, void **, 0x60C);
        } else {
            M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x608), void **, 0x60C) = (void *) M2C_FIELD(temp_r3, void **, 0x60C);
        }
        if ((void *) M2C_FIELD(temp_r30, void **, 4) == temp_r3) {
            M2C_FIELD(temp_r30, void **, 4) = (void *) M2C_FIELD(temp_r3, void **, 0x608);
        } else {
            M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x60C), void **, 0x608) = (void *) M2C_FIELD(temp_r3, void **, 0x608);
        }
        temp_r0 = M2C_FIELD(temp_r30, void **, 8);
        if (temp_r0 != NULL) {
            if (temp_r3 != NULL) {
                TerrainMesh__Destroy(temp_r3, 3);
            }
        } else {
            M2C_FIELD(temp_r3, void **, 0x608) = temp_r0;
            M2C_FIELD(temp_r3, void **, 0x60C) = temp_r0;
        }
        M2C_FIELD(temp_r30, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r30, s32 *, 0xC) - 1);
    }
    temp_r3_2 = M2C_FIELD(arg1, void **, 0xC);
    if (temp_r3_2 != NULL) {
        temp_r30_2 = arg0 + 0x1258;
        if ((void *) M2C_FIELD(arg0, void **, 0x1258) == temp_r3_2) {
            M2C_FIELD(arg0, void **, 0x1258) = (void *) M2C_FIELD(temp_r3_2, void **, 0x10C);
        } else {
            M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 0x108), void **, 0x10C) = M2C_FIELD(temp_r3_2, void **, 0x10C);
        }
        if ((void *) M2C_FIELD(temp_r30_2, void **, 4) == temp_r3_2) {
            M2C_FIELD(temp_r30_2, void **, 4) = (void *) M2C_FIELD(temp_r3_2, void **, 0x108);
        } else {
            M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 0x10C), void **, 0x108) = (void *) M2C_FIELD(temp_r3_2, void **, 0x108);
        }
        temp_r0_2 = M2C_FIELD(temp_r30_2, void **, 8);
        if (temp_r0_2 != NULL) {
            if (temp_r3_2 != NULL) {
                fn_801CB174((s32) temp_r3_2, 3);
            }
        } else {
            M2C_FIELD(temp_r3_2, void **, 0x108) = temp_r0_2;
            M2C_FIELD(temp_r3_2, void **, 0x10C) = temp_r0_2;
        }
        M2C_FIELD(temp_r30_2, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r30_2, s32 *, 0xC) - 1);
    }
    temp_r30_3 = arg0 + 0x127C;
    if ((void *) M2C_FIELD(arg0, void **, 0x127C) == arg1) {
        M2C_FIELD(arg0, void **, 0x127C) = (void *) M2C_FIELD(arg1, void **, 0x14);
    } else {
        M2C_FIELD(M2C_FIELD(arg1, void **, 0x10), void **, 0x14) = (void *) M2C_FIELD(arg1, void **, 0x14);
    }
    if ((void *) M2C_FIELD(temp_r30_3, void **, 4) == arg1) {
        M2C_FIELD(temp_r30_3, void **, 4) = (void *) M2C_FIELD(arg1, void **, 0x10);
    } else {
        M2C_FIELD(M2C_FIELD(arg1, void **, 0x14), void **, 0x10) = (void *) M2C_FIELD(arg1, void **, 0x10);
    }
    temp_r0_3 = M2C_FIELD(temp_r30_3, void **, 8);
    if (temp_r0_3 != NULL) {
        Mem__Delete(arg1);
    } else {
        M2C_FIELD(arg1, void **, 0x10) = temp_r0_3;
        M2C_FIELD(arg1, void **, 0x14) = temp_r0_3;
    }
    M2C_FIELD(temp_r30_3, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r30_3, s32 *, 0xC) - 1);
}
