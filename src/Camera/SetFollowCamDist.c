/* Camera__SetFollowCamDist @ 0x8002C530 (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct CameraEntry {
    void *obj;
    char *name;
} CameraEntry;

typedef struct CameraTable {
    int count;
    CameraEntry *entries;
} CameraEntryTable;

f32 Script__PopFloat(void *, void *);
int String__CompareIgnoreCase(const char *, const char *);
void FollowCamera__SetDistance(void *, f32, f32);
extern char lbl_80311630[] __attribute__((section(".data")));
extern f32 lbl_80311638 __attribute__((section(".data")));
extern CameraEntryTable *lbl_803DC5B4;

static inline void *FindCamera(CameraEntryTable *table, const char *name) {
    void *found;
    int i;

    if (name == NULL) {
        return NULL;
    }
    found = NULL;
    for (i = 0; i < table->count; i++) {
        if (String__CompareIgnoreCase(name, table->entries[i].name) == 0) {
            found = table->entries[i].obj;
            break;
        }
    }
    return found;
}

void Camera__SetFollowCamDist(void *arg0, void *arg1) {
    f32 value;

    value = Script__PopFloat(arg0, arg1);
    FollowCamera__SetDistance(FindCamera(lbl_803DC5B4, lbl_80311630), value, lbl_80311638);
}
