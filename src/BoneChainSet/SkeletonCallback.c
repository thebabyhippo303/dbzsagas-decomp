/* BoneChainSet__SkeletonCallback @ 0x801DB53C (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
void BoneChainSet__OnBoneUpdated(void *, int, int);
void BoneChainSet__SkeletonCallback(void *a, int b, int c, int d) {
    BoneChainSet__OnBoneUpdated(a, c, d);
}
