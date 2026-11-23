/* BoneChainSet__CreateFromModel @ 0x801DB1CC (size: 0x294, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef short s16; typedef unsigned short u16; typedef unsigned char u8; typedef int s32; typedef unsigned int u32;
typedef struct Vt { char pad0[8]; s16 adj8; s16 padA; void (*fnC)(void *, s32); char pad1[0x30 - 0x10]; s16 adj30; s16 padB; s32 (*fn34)(void *, char *); } Vt;
char * strncpy(char *, char *, u32);
void * Mem__New(u32);
void * BoneChain__Construct(void *);
s32 BoneChain__ParseControls(void *, void *, char *);
void BoneChainSet__Destroy(void *, s32);
s32 DynamicBoneChain__LinkIfSameRoot(void *, void *);
void * BoneChainSet__Construct(void *);
u8 BoneChain__GetRootBoneIndex(void *);
void BoneChainSet__RegisterSkeletonCallback(void *, void *, s32);
#define F(p, t, o) (*(t *)((char *)(p) + (o)))
#define VT(c) F(c, Vt *, 0x34)
#define NEXT(c) F(c, char *, 0x17C)

void *BoneChainSet__CreateFromModel(char *self) {
    char buf[16];
    char *set;
    char *model;
    char *chains;
    char *c;
    char *p;
    char *q;
    s32 i;
    s32 j;
    u32 root;
    char *bp;
    char *fnd;
    char *fc;
    char *ch;
    char *nul;
    char z;
    s32 one;
    s32 mask;

    set = 0;
    model = F(self, char *, 0xC);
    if (model == 0) goto fail;
    chains = F(model, char *, 4);
    if (chains == 0) goto fail;
    i = 0;
    if (i < F(model, u16, 0)) {
        z = 0;
        nul = 0;
        do {
            j = 0;
            do {
                bp = chains + 0xB0;
                if (F(bp, u8, j) == 0x21) {
                    strncpy(buf, bp, j);
                    buf[j] = z;
                    if (set == 0 || F(F(set, char *, 0), Vt *, 0x34)->fn34(F(set, char *, 0) + F(F(set, char *, 0), Vt *, 0x34)->adj30, buf) == 0) {
                        c = BoneChain__Construct(Mem__New(0x18C));
                        if (c == 0 || BoneChain__ParseControls(c, self, buf) == 0) {
                            if (c != 0) {
                                VT(c)->fnC(c + VT(c)->adj8, 3);
                            }
                            if (set == 0) goto fail;
                            BoneChainSet__Destroy(set, 3);
                            goto fail;
                        }
                        fnd = 0;
                        if (set != 0) {
                            fnd = F(set, char *, 0);
                            while (fnd != 0) {
                                if (DynamicBoneChain__LinkIfSameRoot(fnd, c) != 0) break;
                                fnd = NEXT(fnd);
                            }
                        }
                        if (fnd == 0) {
                            if (set == 0) {
                                set = BoneChainSet__Construct(Mem__New(12));
                                if (set == 0) {
                                    if (c != 0) {
                                        VT(c)->fnC(c + VT(c)->adj8, 3);
                                    }
fail:
                                    return 0;
                                }
                                F(set, char *, 0) = c;
                                NEXT(c) = nul;
                            } else {
                                root = BoneChain__GetRootBoneIndex(c);
                                if (root < BoneChain__GetRootBoneIndex(F(set, char *, 0))) {
                                    NEXT(c) = F(set, char *, 0);
                                    F(set, char *, 0) = c;
                                } else {
                                    p = F(set, char *, 0);
                                    while ((q = NEXT(p)) != 0 && root >= BoneChain__GetRootBoneIndex(q)) {
                                        p = q;
                                    }
                                    NEXT(c) = q;
                                    NEXT(p) = c;
                                }
                            }
                        }
                    }
                    break;
                }
                j++;
            } while (j <= 15);
            i++;
            chains += 0xF0;
        } while (i < F(model, u16, 0));
    }
    if (set != 0) {
        fc = F(set, char *, 0);
        mask = 0;
        if (fc != 0) {
            one = 1;
            do {
                ch = F(fc, char *, 0);
                while (ch != 0) {
                    NEXT(ch) = NEXT(fc);
                    ch = F(ch, char *, 0);
                }
                mask |= one << BoneChain__GetRootBoneIndex(fc);
                fc = NEXT(fc);
            } while (fc != 0);
        }
        BoneChainSet__RegisterSkeletonCallback(set, self, mask);
    }
    return set;
}
