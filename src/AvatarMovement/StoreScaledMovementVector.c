/* AvatarMovement__StoreScaledMovementVector @ 0x800A836C (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


typedef struct { f32 x, y, z; } SmvVec3;

void AvatarMovement__StoreScaledMovementVector(void *arg0, void *arg1) {
    SmvVec3 tmp;
    f32 scale;

    scale = M2C_FIELD(arg0, f32 *, 0x568);
    tmp.x = M2C_FIELD(arg1, f32 *, 0) * scale;
    tmp.y = M2C_FIELD(arg1, f32 *, 4) * scale;
    tmp.z = M2C_FIELD(arg1, f32 *, 8) * scale;
    M2C_FIELD(arg0, SmvVec3 *, 0x614) = tmp;
}
