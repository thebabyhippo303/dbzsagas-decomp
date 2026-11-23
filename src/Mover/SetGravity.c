/* Mover__SetGravity @ 0x802B06B4 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Mover__SetGravity @ 0x802B06B4 */
extern float Script__PopFloat(void *script, void *context);

void Mover__SetGravity(void *script, void *context) {
    float gravity;
    char *mover;

    gravity = Script__PopFloat(script, context);
    mover = *(char **)((char *)script + 200);
    *(float *)(mover + 1360) = gravity;
}
