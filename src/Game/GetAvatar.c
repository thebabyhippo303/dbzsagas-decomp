/* Game__GetAvatar @ 0x8002D810 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Game__GetAvatar @ 0x8002D810 (0x24). ProDG -O2. */
typedef struct { char pad[0xc8]; void *field_c8; } ObjC8;
void fn_8023A224(void *a, void *b, void *c);
void Game__GetAvatar(ObjC8 *self, void *ctx) {
    fn_8023A224(self, ctx, self->field_c8);
}
