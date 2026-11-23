/* Simple__ScaleZToOverTime @ 0x802C6F44 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct { float x, y, z; } V3;
typedef struct {
    char pad0[0x22C]; int f22C; int f230; int f234; int f238; int f23C;
    char pad1[0x2D4 - 0x240]; float f2D4; char pad2[0x2E0 - 0x2D8]; float f2E0;
    char pad3[0x2EC - 0x2E4]; float f2EC; char pad4[0x2F8 - 0x2F0]; float f2F8;
    V3 v;
} Simple;
extern float lbl_80353274 __attribute__((section(".data")));
void Simple__AnimateScaleZ(Simple *self, int arg1, float a, float dur, float c) {
    float target = a * self->f2E0;
    V3 *v;
    int flag;
    if (self->f2D4 != target) {
        self->f2EC = target;
        v = &self->v;
        v->z = c;
        flag = 0;
        if (self->v.x != lbl_80353274 || v->y != lbl_80353274 || c != lbl_80353274) {
            flag = 1;
        }
        self->f23C = arg1;
        self->f230 = flag;
        self->f22C = 1;
        self->f2F8 = (target - self->f2D4) / dur;
    }
}
