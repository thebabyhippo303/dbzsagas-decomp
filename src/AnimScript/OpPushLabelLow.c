/* AnimScript__OpPushLabelLow @ 0x8023A008 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct {
    char pad[8];
    u8 cnt;
    char pad2[11];
    u32 w20;
    char pad5[23];
    u8 b11;
    char pad3[4];
    void *p1;
    char pad4[16];
    u32 *farr;
    u8 *tags;
} ALabel3;

typedef struct {
    char pad[56];
    void *p2;
} P1;

s32 AnimScript__OpPushLabelLow(void *ctx, s32 id, u32 *ppc) {
    void **labels = (void **)((char *)ctx + 240);
    ALabel3 *label = (ALabel3 *)labels[id];
    u8 b;
    u8 nb;
    register u8 one;
    u32 v;
    u8 b2;
    ALabel3 *label2;
    u32 *farr2;
    if (label == NULL) {
        goto done;
    }
    if (*(void **)((char *)*(void **)((char *)label + 28) + 56) == NULL) {
        goto done;
    }
    *ppc = *ppc + 4;
    one = 1;
    b = label->cnt;
    nb = b + 1;
    label2 = (ALabel3 *)labels[id];
    v = *(u8 *)((char *)label2 + 11);
    farr2 = label->farr;
    label->tags[(s8)nb] = one;
    label->cnt = nb;
    b2 = label->cnt;
    farr2[(s8)b2] = v;
done:
    return 0;
}
