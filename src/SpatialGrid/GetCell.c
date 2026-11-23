/* SpatialGrid__GetCell @ 0x8025F960 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct { float x; float y; float z; } Vec3f;
typedef struct { float minX; float minZ; char pad[12]; float invCell; int nx; int nz; } Grid;
int SpatialGrid__GetCell(Grid *grid, Vec3f *pt, int *outX, int *outZ) {
    float ax = pt->x;
    float minX = grid->minX;
    float s1 = grid->invCell;
    float dx = ax - minX;
    float az = pt->z;
    float fx = dx * s1;
    float minZ = grid->minZ;
    float dz = az - minZ;
    int ix = (int)fx;
    int iz;
    float fz;
    *outX = ix;
    if (ix < 0 || ix >= grid->nx) return 0;
    fz = dz * grid->invCell;
    iz = (int)fz;
    *outZ = iz;
    if (iz < 0 || iz >= grid->nz) return 0;
    return 1;
}
