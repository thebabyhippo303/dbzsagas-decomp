/* SceneMgr__ReleaseSceneResources @ 0x8022BD0C (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

extern void SwooshStreak__DestroyResource(void *resource, int flags);

typedef struct {
    char pad[8];
    short adjust;
    char pad2[2];
    void (*destroy)(void *self, int mode);
} WidgetVtable;

typedef struct {
    char pad[0x18];
    WidgetVtable *vtable;
} Widget;

void SceneMgr__ReleaseSceneResources(void *mgr) {
    Widget *widget;
    void *res;
    char *base;
    int index;
    int remaining;
    void *cleared;

    res = *(void **)((char *)mgr + 852);
    if (res != 0) {
        SwooshStreak__DestroyResource(res, 3);
        *(void **)((char *)mgr + 852) = 0;
    }
    base = (char *)mgr + 856;
    cleared = 0;
    index = 0;
    remaining = 4;
    do {
        widget = *(Widget **)((char *)(index + (int)base));
        if (widget != 0) {
            widget->vtable->destroy((char *)widget + widget->vtable->adjust, 3);
            *(void **)((char *)(index + (int)base)) = cleared;
        }
        index += 4;
        remaining -= 1;
    } while (remaining != 0);
}
