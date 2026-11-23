/* Avatar__SetHealth @ 0x80024E74 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;
void *Script__PopInt(void *, void *);
void Avatar__SetHealthImpl(void *, f32);

static const char pool_pad[0x13D8] = {1};

void Avatar__SetHealth(void *script, void *ctx) {
    void *avatar = Script__PopInt(script, ctx);
    Avatar__SetHealthImpl(avatar, (f32)(s32)Script__PopInt(script, ctx));
}
