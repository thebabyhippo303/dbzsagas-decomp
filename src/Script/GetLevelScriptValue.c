/* Script__GetLevelScriptValue @ 0x8002ED7C (size: 0x128, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void *Game__GetInstance(void);
extern char *Game__GetCurrentLevelDescriptor(void *game);
extern int sprintf(char *dst, const char *fmt, ...);
extern char *Script__PopString(void *script, void *context, int *owned);
extern void Game__BuildCurrentWorldAssetPath(void *game, char *dst, char *src);
extern void CmdCon__RemoveContext(void *table, char *name);
extern void CmdCon__SetContextScript(void *table, char *name, char *path);
extern void VarRealUnit__CreateWithScale(void *table, char *a, char *b, float f, void *out, int c, int d, int e, int g);
extern void CmdCon__ExecuteFileInContext(void *table, char *name);
extern void Mem__DeleteArray(void *ptr);
extern void Script__PushFloat(void *script, void *context, float value);
extern int lbl_803DC3C0;
extern void *lbl_803DCC10;
extern float lbl_803116A4 __attribute__((section(".data")));

void Script__GetLevelScriptValue(void *script, void *context) {
    char descriptor[64];
    char path[128];
    int ownName;
    int ownKey;
    float value;
    char *name;
    char *key;

    sprintf(descriptor, Game__GetCurrentLevelDescriptor(Game__GetInstance()));
    name = Script__PopString(script, context, &ownName);
    key = Script__PopString(script, context, &ownKey);
    Game__BuildCurrentWorldAssetPath((void *)lbl_803DC3C0, path, descriptor);
    CmdCon__RemoveContext(lbl_803DCC10, name);
    CmdCon__SetContextScript(lbl_803DCC10, name, path);
    VarRealUnit__CreateWithScale(lbl_803DCC10, name, key, lbl_803116A4, &value, 0, 0, -1, 0);
    CmdCon__ExecuteFileInContext(lbl_803DCC10, name);
    CmdCon__RemoveContext(lbl_803DCC10, name);
    if (ownName != 0 && name != 0) {
        Mem__DeleteArray(name);
    }
    if (ownKey != 0 && key != 0) {
        Mem__DeleteArray(key);
    }
    Script__PushFloat(script, context, value);
}
