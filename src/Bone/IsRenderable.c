/* Bone__IsRenderable @ 0x8023BD90 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Bone__IsRenderable @ 0x8023BD90 (0x68). ProDG -O2. */
typedef struct {
    float scale0;
    char pad4[0x10];
    float scale1;
    char pad18[0x10];
    float scale2;
    char pad2c[0xB0];
    unsigned char opacity;
} Bone;

extern char lbl_80340000[];

int Bone__IsRenderable(Bone *bone) {
    float scale0;
    float min;
    if (bone == 0)
        return 0;
    if (bone->opacity == 0)
        return 0;
    scale0 = bone->scale0;
    min = *(float *)(lbl_80340000 + 0x6F34);
    if (__builtin_fabsf(scale0) < min)
        return 0;
    if (__builtin_fabsf(bone->scale1) < min)
        return 0;
    return __builtin_fabsf(bone->scale2) >= min;
}
