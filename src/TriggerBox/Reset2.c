/* TriggerBox__Reset2 @ 0x8002BD44 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched. ProDG -O2. */
typedef struct { char pad[0xc8]; void *field_c8; } ObjC8;
void *fn_8023A310(void *out, void *ctx);
void fn_800FCC98(void *p);

void TriggerBox__Reset(ObjC8 *self) { fn_800FCC98(self->field_c8); }

void TriggerBox__Reset2(void *out, void *ctx) {
    fn_800FCC98(fn_8023A310(out, ctx));
}
