/* Avatar__StrafeShooting @ 0x8003A29C (size: 0x160, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    float x;
    float y;
    float z;
} Vec3f;

extern void *Script__PopInt(void *script, void *context);
extern float Script__PopFloat(void *script, void *context);
extern float atan2f(float y, float x);
extern float lbl_80311A04 __attribute__((section(".data")));
extern float lbl_80311A08 __attribute__((section(".data")));
extern float lbl_80311A0C __attribute__((section(".data")));
extern float lbl_803DE500;

void Avatar__StrafeShooting(void *script, void *context) {
    char *avatar;
    char *sub;
    float popped[3];
    float *p;
    float fourth;
    Vec3f self;
    float dz;
    float dx;
    float angle;
    float zero;

    avatar = Script__PopInt(script, context);
    p = popped;
    p[0] = Script__PopFloat(script, context);
    p[1] = Script__PopFloat(script, context);
    p[2] = Script__PopFloat(script, context);
    fourth = Script__PopFloat(script, context);
    if (*(int *)(avatar + 0x71C) == 5) {
        sub = *(char **)(avatar + 0x7FC);
        *(float *)(sub + 0x568) = fourth;
        *(int *)(sub + 0x564) = 9;
        self = *(Vec3f *)(avatar + 0x38);
        zero = lbl_80311A04;
        dz = self.z - p[2];
        dx = self.x - p[0];
        if (dz == zero) {
            if (dx == zero) {
                angle = zero;
            } else if (!(dx <= zero)) {
                angle = lbl_803DE500 * lbl_80311A08;
            } else {
                angle = -lbl_803DE500 * lbl_80311A08;
            }
        } else {
            angle = atan2f(dx, dz);
        }
        {
            float pi = lbl_803DE500;
            float z = lbl_80311A04;
            float c = lbl_80311A0C;
            float sum = pi + angle;
            *(float *)(sub + 0x560) = z;
            *(float *)(sub + 0x558) = c;
            *(int *)(sub + 0x554) = 1;
            *(float *)(sub + 0x55C) = sum;
            angle = sum;
        }
        if (*(int *)(avatar + 0x7E4) == 0) {
            *(float *)(*(char **)(avatar + 0xB8C) + 0x384) = angle;
        }
    }
}
