/* Weapon__IsAttachmentBoneRenderable @ 0x800DEEC8 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
void *Skeleton__GetBoneById(void *skeleton, int bone_id);
int Bone__IsRenderable(void *bone);
float fabsf(float value);
extern float lbl_80322B70 __attribute__((section(".data")));
typedef struct {
    char pad[0x84];
    void *inner;
} WeaponAttachment;
typedef struct {
    char pad[0xC];
    void *skeleton;
} WeaponInner;
typedef struct {
    float extent;
} AttachmentBone;

int Weapon__IsAttachmentBoneRenderable(void *self, WeaponAttachment *weapon, int bone_id) {
    int result = 0;
    AttachmentBone *bone = Skeleton__GetBoneById(((WeaponInner *)weapon->inner)->skeleton, bone_id);
    if (Bone__IsRenderable(bone)) {
        result = fabsf(bone->extent) >= lbl_80322B70;
    }
    return result;
}
