/* Simple__RotateToXAngleRotVel @ 0x802AF02C (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Simple__RotateToXAngleRotVel @ 0x802AF02C */
extern float Script__PopFloat(void *script, void *context);
extern void Simple__RotateToXAngleRotVelImpl(void *simple, float a, float b, float c, float d);
extern float lbl_80351DEC __attribute__((section(".data")));

void Simple__RotateToXAngleRotVel(void *script, void *context) {
    float c;
    float b;
    float a;

    c = Script__PopFloat(script, context);
    b = Script__PopFloat(script, context);
    a = Script__PopFloat(script, context);
    Simple__RotateToXAngleRotVelImpl(*(void **)((char *)script + 0xC8), a, b, c, lbl_80351DEC);
}
