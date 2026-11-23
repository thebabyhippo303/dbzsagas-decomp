/* Simple__ScaleXToOverTime @ 0x802C6E5C (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct { float x, y, z; } V3;
typedef struct {
    char pad0[0x22C]; int f22C; int f230; int f234;
    char pad1[0x2CC - 0x238]; float f2CC; char pad2[0x2D8 - 0x2D0]; float f2D8;
    char pad3[0x2E4 - 0x2DC]; float f2E4; char pad4[0x2F0 - 0x2E8]; float f2F0;
    char pad5[0x2FC - 0x2F4]; V3 v;
} Simple;
extern float lbl_8035326C __attribute__((section(".data")));
void Simple__AnimateScaleX(Simple *self, int arg1, float a, float dur, float c) {
    float target = a * self->f2D8;
    V3 *v;
    int flag;
    if (self->f2CC != target) {
        self->f2E4 = target;
        v = &self->v;
        v->x = c;
        flag = 0;
        if (c != lbl_8035326C || v->y != lbl_8035326C || v->z != lbl_8035326C) {
            flag = 1;
        }
        self->f234 = arg1;
        self->f230 = flag;
        self->f22C = 1;
        self->f2F0 = (target - self->f2CC) / dur;
    }
}
