/* SpatialGrid__GetClampedCell @ 0x8025F9E8 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

typedef struct { float minX; float minZ; char pad[12]; float invCell; int nx; int nz; } Grid;

s32 SpatialGrid__GetClampedCell(void *arg0, s32 *arg1, s32 *arg2, f32 farg0, f32 farg1) {
    Grid *grid = (Grid *)arg0;
    float minX = grid->minX;
    float s1 = grid->invCell;
    float dx = farg0 - minX;
    float minZ = grid->minZ;
    float fx = dx * s1;
    int ix = (int)fx;
    float dz;
    float fz;
    int iz;

    *arg1 = ix;
    dz = farg1 - minZ;
    if (ix < 0) {
        *arg1 = 0;
    } else if (ix >= grid->nx) {
        *arg1 = grid->nx - 1;
    }
    fz = dz * grid->invCell;
    iz = (int)fz;
    *arg2 = iz;
    if (iz < 0) {
        *arg2 = 0;
    } else if (iz >= grid->nz) {
        *arg2 = grid->nz - 1;
    }
}
