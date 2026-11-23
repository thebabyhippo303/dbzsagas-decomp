/* ObbChildList__AcquireQueryGeometry @ 0x802CC73C (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void *ObbChildList__AcquireQueryGeometry(void *self, void *key) {
    void *s = M2C_FIELD(self, void **, 68);
    s32 n;
    s32 i;
    void *p;
    void *ck;
    s32 found;
    if (s == NULL) {
        goto set0;
    }
    if (key == NULL) {
        goto set0;
    }
    n = M2C_FIELD(s, s32 *, 36);
    i = 0;
    if (i >= n) {
        goto set0;
    }
    p = M2C_FIELD(s, void **, 44);
    do {
        ck = M2C_FIELD(p, void **, 0);
        p = (char *)p + 4;
        if (key == ck) {
            goto set1;
        }
        i++;
    } while (i < n);
set0:
    found = 0;
chk:
    if (found != 0) {
        goto nullret;
    }
geomret:
    return M2C_FIELD(self, void **, 224);
set1:
    found = 1;
    goto chk;
nullret:
    return NULL;
}
