/* Script__TriggerShockWave @ 0x8002A59C (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Script__TriggerShockWave @ 0x8002A59C (0xC4). ProDG -O2. */
float Script__PopFloat(void *, void *);
void fn_80251510(void *, int, void *, void *, int);
extern float lbl_8031158C __attribute__((section(".data")));
extern float lbl_80311590 __attribute__((section(".data")));
extern char lbl_803B1DDC __attribute__((section(".data")));

typedef struct ShockWaveParams {
    int owner;
    float a, b, c;
    float d, e, f;
    float g;
    int flag;
} ShockWaveParams;

void Script__TriggerShockWave(void *self, void *ctx) {
    ShockWaveParams p;
    ShockWaveParams *pp = &p;
    float t;

    p.owner = *(int *)((char *)self + 0xC8);
    p.a = Script__PopFloat(self, ctx);
    p.b = Script__PopFloat(self, ctx);
    p.c = Script__PopFloat(self, ctx);
    t = Script__PopFloat(self, ctx);
    p.e = t;
    p.d = t * lbl_8031158C;
    p.f = lbl_80311590;
    p.g = Script__PopFloat(self, ctx);
    p.flag = 1;
    fn_80251510(&lbl_803B1DDC, 0x30104, pp, self, 0);
}
