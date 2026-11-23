/* Mover__MoveForward @ 0x802B063C (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Mover__MoveForward @ 0x802B063C */
extern float Script__PopFloat(void *script, void *context);
extern void fn_802BA468(void *mover, float distance);

void Mover__MoveForward(void *script, void *context) {
    float distance;

    distance = Script__PopFloat(script, context);
    fn_802BA468(*(void **)((char *)script + 200), distance);
}
