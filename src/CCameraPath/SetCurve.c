/* CCameraPath__SetCurve @ 0x800CBB60 (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;

typedef struct {
    s32 object;
    char *name;
} CurveEntry;

typedef struct {
    s32 count;
    CurveEntry *entries;
} CurveTable;

typedef struct {
    char pad[0x44];
    f32 time;
    s32 curve;
} CCameraPath;

int String__CompareIgnoreCase(const char *, const char *);
void Debug__FormatMessage(const char *, ...);
extern CurveTable lbl_803DD140 __attribute__((section(".sdata")));
extern f32 lbl_80321BA0 __attribute__((section(".data")));

static inline s32 FindCurveByName(const char *name) {
    s32 i;
    s32 found;
    if (name == 0) {
        return 0;
    }
    found = 0;
    for (i = 0; i < lbl_803DD140.count; i++) {
        if (String__CompareIgnoreCase(name, lbl_803DD140.entries[i].name) == 0) {
            found = lbl_803DD140.entries[i].object;
            break;
        }
    }
    return found;
}

void CCameraPath__SetCurve(CCameraPath *self, char *name) {
    s32 curve = FindCurveByName(name);
    self->curve = curve;
    if (curve == 0) {
        Debug__FormatMessage("CCameraPath::SetCurve() : path %s not found.\n", name);
    }
    self->time = lbl_80321BA0;
}
