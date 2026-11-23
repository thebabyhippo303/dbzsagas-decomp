/* CameraCollisionBlockers__Construct @ 0x800034A0 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


s32 CameraCollisionBlockers__SpawnGlassWall(void *); /* extern */

void *CameraCollisionBlockers__Construct(void *arg0) {
    s32 var_ctr;
    s32 var_ctr_2;

    var_ctr = 4;
    do {
        var_ctr -= 1;
    } while (var_ctr != 0);
    var_ctr_2 = 4;
    do {
        var_ctr_2 -= 1;
    } while (var_ctr_2 != 0);
    M2C_FIELD(arg0, s32 *, 0) = CameraCollisionBlockers__SpawnGlassWall(arg0);
    M2C_FIELD(arg0, s32 *, 4) = CameraCollisionBlockers__SpawnGlassWall(arg0);
    M2C_FIELD(arg0, s32 *, 8) = CameraCollisionBlockers__SpawnGlassWall(arg0);
    M2C_FIELD(arg0, s32 *, 0xC) = CameraCollisionBlockers__SpawnGlassWall(arg0);
    M2C_FIELD(arg0, s32 *, 0x10) = CameraCollisionBlockers__SpawnGlassWall(arg0);
    return arg0;
}
