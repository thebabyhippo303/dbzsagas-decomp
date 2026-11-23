/* Simple__RotateToYAngleRotVel @ 0x802AF210 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Simple__RotateToYAngleRotVel @ 0x802AF210 */
extern float Script__PopFloat(void *script, void *context);
extern void Simple__RotateToYAngleRotVelImpl(void *simple, float a, float b, float c, float d);
extern float lbl_80351DF0 __attribute__((section(".data")));

void Simple__RotateToYAngleRotVel(void *script, void *context) {
    float c;
    float b;
    float a;

    c = Script__PopFloat(script, context);
    b = Script__PopFloat(script, context);
    a = Script__PopFloat(script, context);
    Simple__RotateToYAngleRotVelImpl(*(void **)((char *)script + 0xC8), a, b, c, lbl_80351DF0);
}
