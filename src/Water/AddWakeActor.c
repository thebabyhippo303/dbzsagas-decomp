/* Water__AddWakeActor @ 0x8029416C (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

extern void WaterPool__AddWakeActor(void *, void *);

void Water__AddWakeActor(void *arg0, void *actor) {
    s32 i = 0;
    s32 n = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4);

    for (; (u32)i < (u32)n; i++) {
        void *v = M2C_FIELD(arg0, void **, 0);
        s32 k = i;
        u32 *pp;

        if (i < 0) {
            k = M2C_FIELD(v, s32 *, 4) - 1;
        }
        if (k >= M2C_FIELD(v, s32 *, 4)) {
            pp = NULL;
        } else if (M2C_FIELD(v, s32 *, 4) == 0) {
            pp = NULL;
        } else {
            pp = (u32 *)M2C_FIELD(v, void **, 0) + k;
        }
        WaterPool__AddWakeActor(*(void **)pp, actor);
    }
}
