/* BoneChain__BindNumberedBones @ 0x801F0DCC (size: 0x1B0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef short s16;
s32 BoneChain__SetName(void *, char *);
s32 Skeleton__FindBoneByName(void *, void *, char *);
void *sprintf(char *, char *, ...);
int strlen(const char *);
extern char lbl_80344200[] __attribute__((section(".data")));

s32 BoneChain__BindNumberedBones(char *self, char *ctx, char *name, char *dst) {
    char buf[24];
    void *out;
    s32 n;
    s32 k;
    s32 i;
    s32 j;
    void *skel;
    char *vt;

    if (BoneChain__SetName(self, name) != 0) {
        n = 1;
        k = 16 - strlen(name);
        if (k > 0) {
            do {
                n *= 10;
                k -= 1;
                if (k <= 0) {
                    break;
                }
                if (n > 0xCCCCCCC) {
                    n = 0x7FFFFFFF;
                    break;
                }
            } while (1);
        }
        skel = *(void **)(ctx + 0xC);
        i = 1;
        while (i < n) {
            sprintf(buf, lbl_80344200, name, i);
            if (Skeleton__FindBoneByName(skel, &out, buf) == 0) {
                break;
            }
            i += 1;
        }
        vt = *(char **)(self + 0x34);
        if (((s32 (*)(void *, s32))*(void **)(vt + 0x1C))(self + *(s16 *)(vt + 0x18), i) != 0) {
            for (j = 1; j < i; j++) {
                sprintf(buf, lbl_80344200, name, j);
                Skeleton__FindBoneByName(skel, &out, buf);
                vt = *(char **)(self + 0x34);
                if (((s32 (*)(void *, s32, void *))*(void **)(vt + 0x24))(self + *(s16 *)(vt + 0x20), j, out) == 0) {
                    goto fail;
                }
            }
            if (dst == 0) {
                dst = ctx + 0x10;
            }
            vt = *(char **)(self + 0x34);
            if (((s32 (*)(void *, void *, void *))*(void **)(vt + 0x2C))(self + *(s16 *)(vt + 0x28), ctx, dst) != 0) {
                return 1;
            }
        }
    }
fail:
    vt = *(char **)(self + 0x34);
    return ((s32 (*)(void *))*(void **)(vt + 0x14))(self + *(s16 *)(vt + 0x10));
}
