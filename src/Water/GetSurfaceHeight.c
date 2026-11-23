/* Water__GetSurfaceHeight @ 0x8002D974 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Water__GetSurfaceHeight @ 0x8002D974 (0x48). ProDG -O2. */
extern int Script__PopInt(void *script, void *context);
extern void *lbl_803D8B20;
extern float Water__GetSurfaceHeightImpl(void *water, int number);
extern void Script__PushFloat(void *script, void *context, float value);

void Water__GetSurfaceHeight(void *script, void *context) {
    int number = Script__PopInt(script, context);
    float height = Water__GetSurfaceHeightImpl(lbl_803D8B20, number);
    Script__PushFloat(script, context, height);
}
