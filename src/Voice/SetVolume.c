/* Voice__SetVolume @ 0x8019CD78 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef void (*VolFn)(void *self);
typedef struct {
    char pad[72];
    short adjust;
    short unused;
    VolFn fn;
} VolVtable;

extern float lbl_8033FBD4 __attribute__((section(".data")));
extern float lbl_8033FBD8 __attribute__((section(".data")));

void Voice__SetVolume(void *self, float vol) {
    float lo = lbl_8033FBD4;
    float hi = lbl_8033FBD8;
    float v = lo;
    VolVtable *vt;
    if (!(vol < lo)) {
        if (!(vol <= hi)) v = hi; else v = vol;
    }
    *(float *)((char *)self + 0x34) = v;
    vt = *(VolVtable **)((char *)self + 0x54);
    vt->fn((char *)self + vt->adjust);
}
