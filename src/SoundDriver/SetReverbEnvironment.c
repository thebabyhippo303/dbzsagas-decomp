/* SoundDriver__SetReverbEnvironment @ 0x80196470 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void SoundDriver__LoadReverbPreset(void *);
extern void fn_802D2E3C(void *, void *);
extern void fn_802D5C58(void *);
extern void fn_802D5CC4(void *);
extern char SoundDriver__ReverbAuxCallback __attribute__((section(".data")));

typedef struct SoundDriver {
    char pad[0x37C];
    int env;
    float level;
    int pad2;
    char reverb[1];
} SoundDriver;

int SoundDriver__SetReverbEnvironment(SoundDriver *self, int env, float level) {
    int old = self->env;
    self->level = level;
    if (old == env) {
        return 1;
    }
    if (old != 0) {
        fn_802D2E3C(0, 0);
        fn_802D5CC4(self->reverb);
    }
    self->env = env;
    if (env != 0) {
        SoundDriver__LoadReverbPreset(self);
        fn_802D5C58(self->reverb);
        fn_802D2E3C(&SoundDriver__ReverbAuxCallback, self->reverb);
        return 1;
    }
    return 1;
}
