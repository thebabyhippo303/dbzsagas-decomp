/* BoneChain__CheckParent @ 0x801DFCAC (size: 0xF0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32; typedef float f32;
extern int sprintf(char *s, const char *fmt, ...);
extern void fn_80189B8C(void *log, const char *msg, ...);
extern void fn_801E24F4(void *self, s32 arg2, s32 boneField, s32 zero, f32 *out);
extern char lbl_80343F80[];
extern void *lbl_803DCC10;
typedef struct BoneLink { void *bone; char pad[48]; } BoneLink;
s32 BoneChain__CheckParent(void *self, s32 index, s32 arg2, f32 *out) {
    union { char buf[256]; f32 words[3]; } local;
    BoneLink *links; void *bone; f32 distSq; f32 *p; f32 lim;
    f32 z, x, y;
    links = *(BoneLink **)((char *)self + 12);
    bone = links[index].bone;
    if (*(void **)((char *)bone + 0xC0) != links[index - 1].bone) {
        sprintf(local.buf, lbl_80343F80, index - 1, *(s32 *)((char *)self + 4), index);
        fn_80189B8C(lbl_803DCC10, local.buf);
        return 0;
    }
    fn_801E24F4(self, arg2, *(s32 *)((char *)bone + 0xD8), 0, out);
    z = *(volatile f32 *)((char *)out + 8);
    x = *(volatile f32 *)((char *)out + 0);
    y = *(volatile f32 *)((char *)out + 4);
    local.words[2] = z * z;
    local.words[0] = x * x;
    local.words[1] = y * y;
    p = local.words;
    distSq = p[0] + p[1] + p[2];
    lim = *(f32 *)((char *)self + 0x14);
    if (!(distSq <= lim)) *(f32 *)((char *)self + 0x14) = distSq;
    return 1;
}
