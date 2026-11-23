/* PersistentData__Set @ 0x8002FE34 (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad0[4];
    int levelId;
} Level;

typedef struct {
    char pad0[0x238];
    Level *level;
} Game;

extern char *Script__PopString(void *, void *, int *);
extern int Script__PopInt(void *, void *);
extern void PersistentData__SetValue(void *, char *, char *, int, int);
extern void fn_80184430(char *);
extern char *lbl_803DC368;
extern Game *lbl_803DC3C0;

void PersistentData__Set(void *script, void *context) {
    int lengthB;
    int lengthA;
    char *name;
    char *text;
    int value;

    name = Script__PopString(script, context, &lengthA);
    text = Script__PopString(script, context, &lengthB);
    value = Script__PopInt(script, context);
    PersistentData__SetValue(lbl_803DC368 + 300, name, text, lbl_803DC3C0->level->levelId, value);
    if (lengthA != 0 && name != 0) {
        fn_80184430(name);
    }
    if (lengthB != 0 && text != 0) {
        fn_80184430(text);
    }
}
