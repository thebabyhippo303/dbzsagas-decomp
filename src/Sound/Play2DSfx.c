/* Sound__Play2DSfx @ 0x8002C05C (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Sound__Play2DSfx @ 0x8002C05C (0x74). ProDG -O2. */
extern char *Script__PopString(void *script, void *context, int *ok);
extern float Script__PopFloat(void *script, void *context);
extern void fn_80188B94(char *name, int flag, float volume, float pan);
extern void fn_80184430(char *text);
extern char lbl_80310000[];

void Sound__Play2DSfx(void *script, void *context) {
    int ok;
    char *name = Script__PopString(script, context, &ok);
    float volume = Script__PopFloat(script, context);
    fn_80188B94(name, 0, volume, *(float *)(lbl_80310000 + 0x1628));
    if (ok != 0 && name != 0)
        fn_80184430(name);
}
