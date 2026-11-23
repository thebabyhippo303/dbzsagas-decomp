/* SoftBodyParams__Release @ 0x80211730 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern int SoftBodyParams__HasUser(void *entry, void *ref);
extern void SoftBodyParams__RemoveUser(void *entry, void *ref);
extern void SoftBodyParams__Destroy(void *entry, int flags);
extern void *lbl_803DCD20;

void SoftBodyParams__Release(void *ref) {
    void *entry;

    entry = lbl_803DCD20;
    if (entry != 0) {
        for (;;) {
            if (SoftBodyParams__HasUser(entry, ref) != 0) {
                SoftBodyParams__RemoveUser(entry, ref);
                if (*(int *)((char *)entry + 24) <= 0) {
                    if (entry == lbl_803DCD20) {
                        lbl_803DCD20 = *(void **)((char *)entry + 4);
                    }
                    if (entry != 0) {
                        SoftBodyParams__Destroy(entry, 3);
                    }
                }
                return;
            }
            entry = *(void **)((char *)entry + 4);
            if (entry == 0) {
                return;
            }
        }
    }
}
