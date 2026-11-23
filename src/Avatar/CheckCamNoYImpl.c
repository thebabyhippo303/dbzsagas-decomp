/* Avatar__CheckCamNoYImpl @ 0x80092810 (size: 0xC8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef struct Entry {
    void *obj;
    char *name;
} Entry;
typedef struct Bag {
    s32 count;
    Entry *entries;
} Bag;
typedef struct AvatarSelf {
    char pad[0x84];
    void *script;
    char pad2[0x1508];
    Bag *bag;
} AvatarSelf;
int CameraBag__IsCurrentNamed(void *, char *);
int String__CompareIgnoreCase(const char *, const char *);
s32 FollowCamera__GetNoYFlag(void *);
void Script__PushInt(void *, void *, int);
extern char lbl_8031F7B8[];
static inline void *FindByName(Bag *bag, const char *name) {
    s32 i;
    void *found;
    if (name == 0) {
        return 0;
    }
    found = 0;
    for (i = 0; i < bag->count; i++) {
        if (String__CompareIgnoreCase(name, bag->entries[i].name) == 0) {
            found = bag->entries[i].obj;
            break;
        }
    }
    return found;
}
void Avatar__CheckCamNoYImpl(AvatarSelf *self, void *context) {
    void *obj;
    s32 flag;
    if (CameraBag__IsCurrentNamed(self->bag, lbl_8031F7B8) != 0) {
        obj = FindByName(self->bag, lbl_8031F7B8);
        flag = FollowCamera__GetNoYFlag(obj);
    } else {
        flag = 0;
    }
    Script__PushInt(self->script, context, flag);
}
