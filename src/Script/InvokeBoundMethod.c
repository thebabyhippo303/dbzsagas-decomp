/* Script__InvokeBoundMethod @ 0x8015924C (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[8];
    short adjust;
    char pad2[2];
    void (*fn)(void *self);
} BoundVtbl;

void Script__InvokeBoundMethod(void *arg0, void *arg1, void *obj) {
    if (obj != 0) {
        BoundVtbl *vt = *(BoundVtbl **)obj;
        vt->fn((char *)obj + vt->adjust);
    }
}
