/* SoundBank__ResolveEntry @ 0x80192EC4 (size: 0x148, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef struct SB { int pad0; int mode; int count; unsigned used; int *entries; } SB;
s32 Random__IntBelow(s32);
s32 SoundBank__ResolveEntry(void *unused, SB *sb) {
    s32 ret = 0;
    int avail[32];
    int n, i, idx;
    switch (sb->mode) {
    case 1:
        ret = sb->entries[Random__IntBelow(sb->count)];
        break;
    case 2:
        n = 0;
        for (i = 0; i < sb->count; i++) {
            if (!(sb->used & (1 << i))) {
                avail[n] = i;
                n++;
            }
        }
        if (n == 0) {
            sb->used = n;
            idx = Random__IntBelow(sb->count);
        } else {
            idx = avail[Random__IntBelow(n)];
        }
        sb->used = sb->used | (1 << idx);
        ret = sb->entries[idx];
        break;
    case 3:
        if (Random__IntBelow(100) <= 19) {
            idx = Random__IntBelow(sb->count);
        } else {
            idx = (sb->used + 1) % (unsigned)sb->count;
        }
        sb->used = idx;
        ret = sb->entries[idx];
        break;
    }
    return ret;
}
