/* Device__GetID @ 0x8002C034 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Device__GetID @ 0x8002C034 (0x28). ProDG -O2. */
typedef struct {
    char pad[0x50c];
    int id;
} DevInner;

typedef struct {
    char pad[0xc8];
    DevInner *inner;
} DevObj;

void fn_8023A224(void *a, void *b, int c);

void Device__GetID(DevObj *self, void *ctx) {
    fn_8023A224(self, ctx, self->inner->id);
}
