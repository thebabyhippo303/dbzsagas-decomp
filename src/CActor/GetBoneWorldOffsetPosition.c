/* CActor__GetBoneWorldOffsetPosition @ 0x801DD1B4 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void CActor__TransformModelPointToWorld(void *, void *, void *);
void CActor__GetBoneModelOffsetPosition(f32 *); /* extern */

void *CActor__GetBoneWorldOffsetPosition(void *arg0, void *arg1) {
    f32 sp8[3];

    CActor__GetBoneModelOffsetPosition(&sp8);
    CActor__TransformModelPointToWorld(arg0, arg1, &sp8);
    return arg0;
}
