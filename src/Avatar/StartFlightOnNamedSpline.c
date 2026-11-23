/* Avatar__StartFlightOnNamedSpline @ 0x800A12FC (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;

typedef struct {
    s32 object;
    char *name;
} SplineEntry;

typedef struct {
    s32 count;
    SplineEntry *entries;
} SplineTable;

int String__CompareIgnoreCase(const char *, const char *);
void Avatar__StartFlightOnNamedSplineImpl(void *, s32, f32, s32, s32);
extern SplineTable lbl_803DD140 __attribute__((section(".sdata")));

static inline s32 FindSplineByName(const char *name) {
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

void Avatar__StartFlightOnNamedSpline(void *self, char *name, f32 speed, s32 arg) {
    Avatar__StartFlightOnNamedSplineImpl(self, FindSplineByName(name), speed, arg, 0);
}
