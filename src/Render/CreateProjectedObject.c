/* Render__CreateProjectedObject @ 0x802817D4 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Render__CreateObject @ 0x802817D4 */
extern void *fn_80281984(float a, float b, float c, float d, float e);
extern void fn_80281F14(float value);
extern float lbl_8034F294 __attribute__((section(".data")));

void *Render__CreateObject(float a, float b, float c, float d, float e, float f, float g) {
    float *slot;
    float k;
    char *obj;

    obj = fn_80281984(c, d, e, f, g);
    slot = (float *)(obj + 252);
    k = lbl_8034F294;
    *(float *)(obj + 252) = a;
    slot[2] = b;
    slot[1] = k;
    *(void **)(obj + 364) = fn_80281F14;
    fn_80281F14(k);
    return obj;
}
