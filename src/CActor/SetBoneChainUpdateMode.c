/* CActor__SetBoneChainUpdateMode @ 0x801DE2C0 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

void BoneChainSet__SetUpdateMode(void *, s32);
void fn_80210D54(void *, s32);

void CActor__SetBoneChainUpdateMode(char *self, s32 mode) {
    void *set = *(void **)(self + 0xA4);
    void *other;

    if (set != 0) {
        BoneChainSet__SetUpdateMode(set, mode);
    }
    other = *(void **)(self + 0xA8);
    if (other != 0) {
        fn_80210D54(other, mode);
    }
}
