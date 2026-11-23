/* Actor__GetPointer @ 0x802AC240 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__GetPointer @ 0x802AC240 (0x24). ProDG -O2. */
typedef struct { char pad[0xc8]; void *field_c8; } ObjC8;
void fn_8023A224(void *a, void *b, void *c);
void Actor__GetPointer(ObjC8 *self, void *ctx) {
    fn_8023A224(self, ctx, self->field_c8);
}
