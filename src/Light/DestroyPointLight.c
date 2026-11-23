/* Light__DestroyPointLight @ 0x8002DC18 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void *Script__PopInt(void *script, void *context);
extern void Light__UnregisterPointLight(void *table, void *light);
extern void fn_801843CC(void *ptr);
extern char lbl_803ACF24[] __attribute__((section(".data")));

void Light__DestroyPointLight(void *script, void *context) {
    void *light = Script__PopInt(script, context);

    Light__UnregisterPointLight(lbl_803ACF24, light);
    if (light != 0) {
        fn_801843CC(light);
    }
}
