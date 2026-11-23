/* DynamicBoneChain__IsPointInsideBox @ 0x801F0340 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32; typedef float f32;

s32 DynamicBoneChain__IsPointInsideBox(void *arg0, f32 *p, f32 *b) {
    if (p[0] <= -b[0]) return 0;
    if (p[1] <= -b[1]) return 0;
    if (p[2] <= -b[2]) return 0;
    if (p[0] >= b[0]) return 0;
    if (p[1] >= b[1]) return 0;
    return (p[2] < b[2]);
}
