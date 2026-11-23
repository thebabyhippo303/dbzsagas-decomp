/* Avatar__SetSpawnPositionAndHeading @ 0x800937C8 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct { s32 x, y, z; } Vec3;

void Avatar__SetSpawnPositionAndHeading(void *arg0, void *arg1, f32 farg0) {
    *(Vec3 *)((char *)arg0 + 0x1BE0) = *(Vec3 *)arg1;
    M2C_FIELD(arg0, f32 *, 0x1BEC) = farg0;
}
