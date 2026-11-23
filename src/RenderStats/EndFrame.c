/* RenderStats__EndFrame @ 0x8022AFF4 (size: 0x200, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct {
    char pad[872];
    s32 data[23];
} RenderEntry;

typedef struct {
    s32 frames;
    RenderEntry *ents[10];
    s32 acc[23];
    s32 count;
} RenderStats;

extern RenderStats lbl_803AD910 __attribute__((section(".bss")));
extern void memset(void *, int, u32);
extern void *memcpy(void *, const void *, u32);

void RenderStats__EndFrame(void) {
    s32 **pp;
    RenderStats *st = &lbl_803AD910;
    s32 n;
    s32 i;

    st->frames++;
    if (st->count == 1) {
        memcpy(st->acc, st->ents[0]->data, 92);
        return;
    }
    memset(st->acc, 0, 92);
    n = st->count;
    if (n > 1) {
        pp = (s32 **)st->ents;
        for (i = 0; i < n; i++) {
            s32 *e = (s32 *)((char *)*pp + 872);
            pp++;
            st->acc[0] += e[0];
            st->acc[1] += e[1];
            st->acc[3] += e[3];
            st->acc[4] += e[4];
            st->acc[5] += e[5];
            st->acc[6] += e[6];
            st->acc[2] += e[2];
            st->acc[7] += e[7];
            st->acc[8] += e[8];
            st->acc[9] += e[9];
            st->acc[10] += e[10];
            st->acc[18] += e[18];
            st->acc[19] += e[19];
            st->acc[20] += e[20];
            st->acc[21] += e[21];
            st->acc[22] += e[22];
        }
    }
}
