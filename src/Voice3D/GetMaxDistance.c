/* Voice3D__GetMaxDistance @ 0x8019C354 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
extern float SoundDef__GetMaxDistance(void *def);
extern float lbl_8033FBAC __attribute__((section(".data")));
extern float lbl_8033FBB0 __attribute__((section(".data")));

float Voice3D__GetMaxDistance(char *self) {
    float v = *(float *)(self + 0x94) + SoundDef__GetMaxDistance(*(void **)(self + 4));
    float lo = lbl_8033FBAC;
    float hi = lbl_8033FBB0;
    float r;
    if (!(v >= lo)) {
        r = lo;
    } else if (!(v <= hi)) {
        r = hi;
    } else {
        r = v;
    }
    return r;
}
