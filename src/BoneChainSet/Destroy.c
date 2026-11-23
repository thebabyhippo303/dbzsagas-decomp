/* BoneChainSet__Destroy @ 0x801DB144 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Vt { char pad[8]; short adjust; short unused; void (*fn)(void *, int); } Vt;
typedef struct Inner { char pad[52]; Vt *vt; } Inner;
typedef struct Set { Inner *inner; void *arr; int count; } Set;

void Mem__Delete(void *);
void fn_8023FA4C(void *, void *, int);

void BoneChainSet__Destroy(Set *self, int flags) {
    Inner *in = self->inner;
    if (in != 0) {
        in->vt->fn((char *)in + in->vt->adjust, 3);
    }
    if (self->arr != 0 && self->count != 0) {
        fn_8023FA4C(self->arr, &self->count, 20);
    }
    if (flags & 1) {
        Mem__Delete(self);
    }
}
