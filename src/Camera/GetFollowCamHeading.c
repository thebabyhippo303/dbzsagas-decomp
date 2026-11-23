/* Camera__GetFollowCamHeading @ 0x8002D0B8 (size: 0xD4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef float f32;
#define NULL 0

typedef struct {
    void *obj;
    char *name;
} CameraEntry;

typedef struct {
    int count;
    CameraEntry *entries;
} CameraTable;

int CameraBag__IsCurrentNamed(void *, char *);
int String__CompareIgnoreCase(const char *, const char *);
f32 Camera__GetHeading(void *);
void Script__PushFloat(void *, s32, f32);
extern char lbl_80311630[] __attribute__((section(".data")));
extern f32 lbl_80311658 __attribute__((section(".data")));
extern CameraTable *lbl_803DC5B4;

static inline void *FindByName(CameraTable *table, const char *name) {
    s32 i;
    void *found;
    if (name == 0) {
        return 0;
    }
    found = 0;
    for (i = 0; i < table->count; i++) {
        if (String__CompareIgnoreCase(name, table->entries[i].name) == 0) {
            found = table->entries[i].obj;
            break;
        }
    }
    return found;
}

void Camera__GetFollowCamHeading(void *script, void *context) {
    f32 value = lbl_80311658;
    CameraTable *table = lbl_803DC5B4;
    if (CameraBag__IsCurrentNamed(table, lbl_80311630) != 0) {
        char *name = lbl_80311630;
        void *obj;
        if (name == NULL) {
            obj = NULL;
        } else {
            obj = FindByName(table, name);
        }
        value = Camera__GetHeading(obj);
    }
    Script__PushFloat(script, context, value);
}
