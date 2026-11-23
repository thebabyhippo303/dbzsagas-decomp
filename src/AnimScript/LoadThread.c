/* AnimScript__LoadThread @ 0x80234054 (size: 0xE8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void *AnimScript__FindLoaded(void *);
void *dblLoad(const char *, void *, int);
void *Database__GetTypedObject(void *, void *, void *, void *);
void AnimScript__RegisterLoaded(s32, char *);
void AnimScript__CreateThread(void *, s32, void *);
void *Database__FindObjectInFileByPath(void *, void *);
extern char lbl_80345C10[] __attribute__((section(".data")));

void *AnimScript__LoadThread(void *arg0, s32 arg1, void *arg2, void *arg3, s32 arg4) {
    void *found;
    void *p;
    void *sp;
    void *arrBase;
    void *newobj;

    found = AnimScript__FindLoaded(arg2);
    if (found == NULL) {
        p = dblLoad(arg2, NULL, 0);
        if (p == NULL)
            return NULL;
        found = Database__GetTypedObject(arg3, lbl_80345C10, p, NULL);
        AnimScript__RegisterLoaded((s32)found, arg2);
        if (found == NULL)
            goto ret0;
    }
    if (arg4 == 0)
        return (void *)1;
    AnimScript__CreateThread(arg0, arg1, found);
    newobj = Database__FindObjectInFileByPath(arg2, &sp);
    arrBase = (char *)arg0 + 0xF0;
    *(void **)(*(void **)((char *)arrBase + arg1 * 4) + 0x18) = newobj;
    if ((u32)arg1 > 2U)
        goto ret1;
    *(u8 *)((char *)*(void **)((char *)arrBase + arg1 * 4) + 4) |= 2;
ret1:
    return (void *)1;
ret0:
    return NULL;
}
