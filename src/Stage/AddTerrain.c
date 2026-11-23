/* Stage__AddTerrain @ 0x801B22E0 (size: 0x15C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void * Mem__New(u32);
void * TerrainMesh__Load(void *, void *);
s32 TerrainQuadtree__Load(void *, s32);
void *Stage__AddTerrain(void *arg0, s32 arg1, void *arg2) {
    s32 ld_C_;
    s32 ld_C;
    s32 ld_4;
    s32 temp_r0_2;
    s32 temp_r3_3;
    s32 a1;
    void *temp_r0;
    void *temp_r0_3;
    void *temp_r3;
    void *mesh;
    void *temp_r8;
    void *temp_r10;
    void *a0;

    temp_r3 = Mem__New(0x18U);
    a0 = M2C_FIELD(arg0, void **, 0x200);
    M2C_FIELD(temp_r3, s32 *, 0) = arg1;
    M2C_FIELD(temp_r3, void **, 4) = arg2;
    mesh = TerrainMesh__Load(arg2, a0);
    if (mesh != NULL) {
        temp_r0 = M2C_FIELD(arg0, void **, 0x204);
        temp_r8 = (char *)arg0 + 0x204;
        if (temp_r0 == NULL) {
            M2C_FIELD(temp_r8, void **, 4) = mesh;
            M2C_FIELD(arg0, void **, 0x204) = mesh;
            M2C_FIELD(mesh, void **, 0x60C) = temp_r0;
            M2C_FIELD(mesh, void **, 0x608) = temp_r0;
        } else {
            M2C_FIELD(mesh, void **, 0x60C) = NULL;
            M2C_FIELD(mesh, void **, 0x608) = (void *) M2C_FIELD(temp_r8, void **, 4);
            M2C_FIELD(M2C_FIELD(temp_r8, void **, 4), void **, 0x60C) = mesh;
            M2C_FIELD(temp_r8, void **, 4) = mesh;
        }
        ld_C = M2C_FIELD(temp_r8, s32 *, 0xC);
        M2C_FIELD(temp_r8, s32 *, 0xC) = (s32) (ld_C + 1);
    }
    a1 = M2C_FIELD(arg0, s32 *, 0x1254);
    M2C_FIELD(temp_r3, void **, 8) = mesh;
    temp_r3_3 = TerrainQuadtree__Load(arg2, a1);
    if (temp_r3_3 != 0) {
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x1258);
        temp_r10 = (s32 *)((char *)arg0 + 0x1258);
        if (temp_r0_2 == 0) {
            M2C_FIELD(temp_r10, s32 *, 4) = temp_r3_3;
            M2C_FIELD(arg0, s32 *, 0x1258) = temp_r3_3;
            M2C_FIELD(temp_r3_3, s32 *, 0x10C) = temp_r0_2;
            M2C_FIELD(temp_r3_3, u32 *, 0x108) = temp_r0_2;
        } else {
            M2C_FIELD(temp_r3_3, s32 *, 0x10C) = 0;
            M2C_FIELD(temp_r3_3, s32 *, 0x108) = (s32) M2C_FIELD(temp_r10, s32 *, 4);
            ld_4 = M2C_FIELD(temp_r10, s32 *, 4);
            M2C_FIELD(ld_4, s32 *, 0x10C) = temp_r3_3;
            M2C_FIELD(temp_r10, s32 *, 4) = temp_r3_3;
        }
        M2C_FIELD(temp_r10, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r10, s32 *, 0xC) + 1);
    }
    temp_r0_3 = M2C_FIELD(arg0, void **, 0x127C);
    mesh = (char *)arg0 + 0x127C;
    M2C_FIELD(temp_r3, s32 *, 0xC) = temp_r3_3;
    if (temp_r0_3 == NULL) {
        M2C_FIELD(mesh, void **, 4) = temp_r3;
        M2C_FIELD(arg0, void **, 0x127C) = temp_r3;
        M2C_FIELD(temp_r3, void **, 0x14) = temp_r0_3;
        M2C_FIELD(temp_r3, void **, 0x10) = temp_r0_3;
    } else {
        M2C_FIELD(temp_r3, void **, 0x14) = NULL;
        M2C_FIELD(temp_r3, void **, 0x10) = M2C_FIELD(mesh, void **, 4);
        M2C_FIELD(M2C_FIELD(mesh, void **, 4), void **, 0x14) = temp_r3;
        M2C_FIELD(mesh, void **, 4) = temp_r3;
    }
    ld_C_ = M2C_FIELD(mesh, s32 *, 0xC);
    M2C_FIELD(mesh, s32 *, 0xC) = (s32) (ld_C_ + 1);
    return temp_r3;
}
