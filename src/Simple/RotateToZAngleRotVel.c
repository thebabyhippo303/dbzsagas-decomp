/* Simple__RotateToZAngleRotVel @ 0x802AF384 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Simple__RotateToZAngleRotVel @ 0x802AF384 */
extern float Script__PopFloat(void *script, void *context);
extern void Simple__RotateToZAngleRotVelImpl(void *simple, float a, float b, float c, float d);
extern float lbl_80351DF4 __attribute__((section(".data")));

void Simple__RotateToZAngleRotVel(void *script, void *context) {
    float c;
    float b;
    float a;

    c = Script__PopFloat(script, context);
    b = Script__PopFloat(script, context);
    a = Script__PopFloat(script, context);
    Simple__RotateToZAngleRotVelImpl(*(void **)((char *)script + 0xC8), a, b, c, lbl_80351DF4);
}
