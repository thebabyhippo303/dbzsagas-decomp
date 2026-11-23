/* AvatarControls__SerializeMoveTowardTarget @ 0x8008A620 (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct { s32 x, y, z; } StmVec3;
s32 AvatarControls__GetMoveTowardTargetSerializedSize(void *);

s32 AvatarControls__SerializeMoveTowardTarget(void *arg0, void *arg1, s32 arg2) {
    void *vt;

    if (arg2 != 0) {
        *(StmVec3 *)arg1 = M2C_FIELD(arg0, StmVec3 *, 0xB0);
        M2C_FIELD(arg1, f32 *, 0xC) = M2C_FIELD(arg0, f32 *, 0xBC);
    } else {
        vt = M2C_FIELD(arg0, void **, 4);
        M2C_FIELD(vt, M2C_UNK (**)(void *), 0x34)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x30));
        M2C_FIELD(arg0, StmVec3 *, 0xB0) = *(StmVec3 *)arg1;
        M2C_FIELD(arg0, f32 *, 0xBC) = M2C_FIELD(arg1, f32 *, 0xC);
    }
    return AvatarControls__GetMoveTowardTargetSerializedSize(arg0);
}
