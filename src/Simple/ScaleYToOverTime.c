/* Simple__ScaleYToOverTime @ 0x802C6ED0 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct { float x, y, z; } V3;
typedef struct {
    char pad0[0x22C]; int f22C; int f230; int f234; int f238;
    char pad1[0x2D0 - 0x23C]; float f2D0; char pad2[0x2DC - 0x2D4]; float f2DC;
    char pad3[0x2E8 - 0x2E0]; float f2E8; char pad4[0x2F4 - 0x2EC]; float f2F4;
    char pad5[0x2FC - 0x2F8]; V3 v;
} Simple;
extern float lbl_80353270 __attribute__((section(".data")));
void Simple__AnimateScaleY(Simple *self, int arg1, float a, float dur, float c) {
    float target = a * self->f2DC;
    V3 *v;
    int flag;
    if (self->f2D0 != target) {
        self->f2E8 = target;
        v = &self->v;
        v->y = c;
        flag = 0;
        if (self->v.x != lbl_80353270 || c != lbl_80353270 || v->z != lbl_80353270) {
            flag = 1;
        }
        self->f238 = arg1;
        self->f230 = flag;
        self->f22C = 1;
        self->f2F4 = (target - self->f2D0) / dur;
    }
}
