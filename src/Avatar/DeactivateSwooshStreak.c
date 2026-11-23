/* Avatar__DeactivateSwooshStreak @ 0x80033294 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched. ProDG -O2. */
void *fn_8023A310(void *out, void *ctx);
void fn_80095A10(void *p);
void fn_80095A70(void *p);

void Avatar__StopSwooshStreak(void *out, void *ctx) {
    fn_80095A10(fn_8023A310(out, ctx));
}
void Avatar__DeactivateSwooshStreak(void *out, void *ctx) {
    fn_80095A70(fn_8023A310(out, ctx));
}
