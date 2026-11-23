/* CameraCollisionBlockers__SetProtagonistCast @ 0x80003560 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Actor__ToProtagonistCastImpl(void *);
void CameraCollisionBlockers__SetProtagonistCast(void *arg0) {
    Actor__ToProtagonistCastImpl(M2C_FIELD(arg0, void **, 0));
    Actor__ToProtagonistCastImpl(M2C_FIELD(arg0, void **, 4));
    Actor__ToProtagonistCastImpl(M2C_FIELD(arg0, void **, 8));
    Actor__ToProtagonistCastImpl(M2C_FIELD(arg0, void **, 0xC));
    Actor__ToProtagonistCastImpl(M2C_FIELD(arg0, void **, 0x10));
}
