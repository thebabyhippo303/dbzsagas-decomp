/* Script__DecodeVector @ 0x800333FC (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Script__DecodeVector @ 0x800333FC (0x64). ProDG -O2. docs/compiler.md */
float *fn_8023A310(void *out, void *ctx);
void fn_8023A264(void *out, void *ctx, float f);

void Script__DecodeVector(void *out, void *ctx) {
    float *v = fn_8023A310(out, ctx);
    fn_8023A264(out, ctx, v[0]);
    fn_8023A264(out, ctx, v[1]);
    fn_8023A264(out, ctx, v[2]);
}
