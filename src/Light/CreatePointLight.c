/* Light__CreatePointLight @ 0x8002DA98 (size: 0x180, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern void *Mem__New(unsigned int size);
extern void *memset(void *dst, int val, unsigned int n);
extern float Script__PopFloat(void *script, int ctx);
extern void LightMgr__AddDynamicLight(void *table, void *light);
extern void Script__PushInt(void *script, void *ctx, int value);
extern float lbl_8031166C __attribute__((section(".data")));
extern float lbl_80311670 __attribute__((section(".data")));
extern char lbl_803ACF24[] __attribute__((section(".data")));

void Light__CreatePointLight(void *arg0, int arg1) {
    float pos[3];
    volatile float src[4];
    volatile int d[4];
    int t0, t1, t2, t3;
    int i0, i1, i2;
    float *pp;
    int *q;
    void *light;
    float v3, v4, v5, v6;

    pos[0] = Script__PopFloat(arg0, arg1);
    pp = pos;
    pos[1] = Script__PopFloat(arg0, arg1);
    pos[2] = Script__PopFloat(arg0, arg1);
    v3 = Script__PopFloat(arg0, arg1);
    v4 = Script__PopFloat(arg0, arg1);
    v5 = Script__PopFloat(arg0, arg1);
    v6 = Script__PopFloat(arg0, arg1);
    light = Mem__New(188);
    memset(light, 0, 188);
    q = (int *)((char *)light + 16);
    src[0] = v4;
    src[1] = v5;
    src[2] = v6;
    src[3] = lbl_8031166C;
    *(float *)((char *)light + 0) = v4;
    *(float *)((char *)light + 4) = v5;
    *(float *)((char *)light + 8) = v6;
    *(float *)((char *)light + 12) = src[3];
    t0 = *(int *)((char *)light + 0);
    t1 = *(int *)((char *)light + 4);
    t2 = *(int *)((char *)light + 8);
    t3 = *(int *)((char *)light + 12);
    d[0] = t0;
    d[1] = t1;
    d[2] = t2;
    d[3] = t3;
    *(int *)((char *)light + 0x4C) = 0;
    i0 = *(int *)&pos[0];
    i1 = *(int *)&pp[1];
    i2 = *(int *)&pp[2];
    *(int *)((char *)light + 16) = i0;
    q[1] = i1;
    q[2] = i2;
    *(float *)((char *)light + 84) = lbl_80311670;
    *(float *)((char *)light + 88) = v3;
    *(float *)((char *)light + 80) = lbl_80311670;
    LightMgr__AddDynamicLight(lbl_803ACF24, light);
    Script__PushInt(arg0, arg1, (int)light);
}
