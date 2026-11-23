/* Actor__SetBoneHidden @ 0x801DD140 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
void *Actor__GetBoneById(void *actor, int bone);
void Bone__SetHidden(void *bone, int hidden);

void Actor__SetBoneHidden(void *actor, int bone, int hidden) {
    if (bone != 255) {
        void *node = Actor__GetBoneById(actor, bone);
        Bone__SetHidden(node, hidden);
    }
}
