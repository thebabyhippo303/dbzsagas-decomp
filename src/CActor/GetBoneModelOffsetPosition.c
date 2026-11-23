/* CActor__GetBoneModelOffsetPosition @ 0x801DCE74 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;

typedef struct Vec3 {
    f32 x, y, z;
} Vec3;

typedef struct Skel {
    char pad[0xC];
    void *bones;
} Skel;

typedef struct CActor {
    char pad[0x84];
    Skel *skel;
} CActor;

void fn_8023DF00(void *, s32, Vec3 *);

Vec3 CActor__GetBoneModelOffsetPosition(CActor *self, s32 bone) {
    Vec3 pos;
    fn_8023DF00(self->skel->bones, bone, &pos);
    return pos;
}
