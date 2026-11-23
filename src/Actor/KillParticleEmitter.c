/* Actor__KillParticleEmitter @ 0x802AE064 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched actor helpers. ProDG -O2.
   Instance__Billboard3d        @ 0x80045050 (0x2C)
   Actor__KillParticleEmitter   @ 0x802AE064 (0x2C)
   Protagonist__DestroyAttacher @ 0x802AE528 (0x2C)
   Actor__SetBaseAmbientLight   @ 0x802AC95C (0x30)
   Actor__IsHidden              @ 0x802ACA58 (0x30)
   Actor__KillOwnedParticle     @ 0x802AE034 (0x30)
*/
typedef struct { char pad[0x84]; void *obj; } Billboard;
Billboard *fn_802AC1E8(void *a, void *b, int c);
void fn_8020688C(void *p);

void Instance__Billboard3d(void *a, void *b) {
    fn_8020688C(fn_802AC1E8(a, b, 0)->obj);
}

void *fn_8023A310(void *a, void *b);
void fn_8022433C(void *p);
void fn_80216D18(void *p);
void fn_80221230(void *p, int c);

void Actor__KillParticleEmitter(void *a, void *b) {
    void *p = fn_8023A310(a, b);
    if (p)
        fn_8022433C(p);
}

void Protagonist__DestroyAttacher(void *a, void *b) {
    void *p = fn_8023A310(a, b);
    if (p)
        fn_80216D18(p);
}

void Actor__KillOwnedParticle(void *a, void *b) {
    void *p = fn_8023A310(a, b);
    if (p)
        fn_80221230(p, 0);
}

/* Callee sees self and b still in r3/r4. Naming them on the call
   makes ProDG copy r3 and the load no longer matches. */
typedef struct { char pad[0xdc]; void *light; } LightInner;
typedef struct { char pad[0xc8]; LightInner *inner; } LightObj;
void *fn_8021A6B8(void);

void Actor__SetBaseAmbientLight(LightObj *self, void *b) {
    LightInner *inner = self->inner;
    inner->light = fn_8021A6B8();
    (void)b;
}

typedef struct { char pad[2]; unsigned short bits; } FlagW;
typedef struct { char pad[0x84]; FlagW *flags; } HidMid;
typedef struct { char pad[0xc8]; HidMid *inner; } HidObj;
void fn_8023A224(void *a, void *b, int c);

void Actor__IsHidden(HidObj *self, void *ctx) {
    fn_8023A224(self, ctx, self->inner->flags->bits & 1);
}
