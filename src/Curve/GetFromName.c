/* Curve__GetFromName @ 0x8003BF30 (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef struct Entry { void *obj; char *name; } Entry;
typedef struct Table { s32 count; Entry *entries; } Table;
char *Script__PopString(void *script, s32 context, s32 *owned);
int String__CompareIgnoreCase(const char *, const char *);
void Mem__DeleteArray(void *);
void Script__PushInt(void *script, s32 context, void *value);
extern s32 lbl_803DD140;
extern Entry *lbl_803DD144;

void Curve__GetFromName(void *script, s32 context) {
    s32 owned;
    char *name = Script__PopString(script, context, &owned);
    void *obj;
    s32 i;
    if (name == 0) {
        obj = 0;
    } else {
        void *found = 0;
        for (i = 0; i < lbl_803DD140; i++) {
            if (String__CompareIgnoreCase(name, lbl_803DD144[i].name) == 0) {
                found = lbl_803DD144[i].obj;
                break;
            }
        }
        obj = found;
    }
    if (owned != 0 && name != 0) {
        Mem__DeleteArray(name);
    }
    Script__PushInt(script, context, obj);
}
