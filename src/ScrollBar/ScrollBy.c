/* ScrollBar__ScrollBy @ 0x80261D14 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct {
    short adj;
    short u;
    void *fn;
} SBVTx;

typedef struct {
    char pad[888];
    SBVTx sub;
    short adj1;
    short u1;
    void *fn1;
} SBVT;

void ScrollBar__ScrollBy(void *arg0, s32 arg1) {
    void *t = arg0;
    s32 d = arg1;
    SBVT *o = *(SBVT **)((char *)t + 412);
    SBVTx *o2 = &o->sub;
    ((void (*)(void *, s32))o2->fn)((char *)t + o2->adj, ((s32 (*)(void *))o->fn1)((char *)t + o->adj1) + d);
}
