/* SoundEmitter__InitializeFromProperties @ 0x800EB81C (size: 0x114, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: SoundEmitter__InitializeFromProperties @ 0x800EB81C (0x114). ProDG -O2. */
extern char lbl_803BEFC0[] __attribute__((section(".data")));
extern char lbl_803B1E84[] __attribute__((section(".data")));
extern char lbl_803238C0[] __attribute__((section(".data")));
extern char lbl_80323898[] __attribute__((section(".data")));
extern char lbl_803238CC[] __attribute__((section(".data")));
extern char lbl_803238E0[] __attribute__((section(".data")));
extern char lbl_803238EC[] __attribute__((section(".data")));
extern float lbl_8032390C __attribute__((section(".data")));
extern char *fn_802B30E0(void *props);
extern void *Instance__FindByName(void *table, char *name, int a, int b);
extern char *fn_802B3010(void *props, char *key, char *def);
extern void fn_802B2FE8(void *props, char *key, char *def);
extern void fn_80189018();
extern void Debug__FormatMessage(char *fmt, ...);

void SoundEmitter__InitializeFromProperties(void) {
    float v[3];
    float out[3];
    char *name = fn_802B30E0(lbl_803BEFC0);
    if (name != 0) {
        char *inst = Instance__FindByName(lbl_803B1E84, name, 0, 0);
        if (inst != 0) {
            char *str = fn_802B3010(lbl_803BEFC0, lbl_803238C0, lbl_80323898);
            float *m;
            fn_802B2FE8(lbl_803BEFC0, lbl_803238CC, lbl_80323898);
            fn_802B2FE8(lbl_803BEFC0, lbl_803238E0, lbl_80323898);
            fn_80189018();
            m = (float *)(inst + 0x10);
            {
                float *p = v;
                float t0, t1, t2;
                v[0] = lbl_8032390C;
                p[1] = lbl_8032390C;
                p[2] = lbl_8032390C;
                t0 = v[0] * *(float *)(inst + 0x10) + m[12];
                t1 = v[0] * m[1] + m[13];
                t2 = v[0] * m[2] + m[14];
                out[0] = t0;
                out[1] = t1;
                out[2] = t2;
            }
            if (str != 0 && *(unsigned char *)str != 0)
                Debug__FormatMessage(lbl_803238EC, str);
        }
    }
}
