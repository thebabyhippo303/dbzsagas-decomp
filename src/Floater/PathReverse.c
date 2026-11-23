/* Floater__PathReverse @ 0x802B0094 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;

typedef struct {
    char pad[176];
    short adjust;
    char pad2[2];
    void (*fn)(void *self, f32 v);
} FloaterVtbl;

extern f32 lbl_80351E1C __attribute__((section(".data")));

void Floater__PathReverse(char *arg0) {
    FloaterVtbl *vt;

    arg0 = *(char **)(arg0 + 200);
    vt = *(FloaterVtbl **)(arg0 + 1224);
    arg0 = arg0 + 1044;
    vt->fn(arg0 + vt->adjust, lbl_80351E1C);
}
