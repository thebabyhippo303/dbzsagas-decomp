/* UiAnimator__RemoveKey @ 0x8026044C (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

void UiKeyframe__Destroy(void *node, s32 arg1);

void UiAnimator__RemoveKey(void *obj, f32 key) {
    void *n = *(void **)((char *)obj + 32);

    goto check;
adv:
    n = *(void **)((char *)n + 4);
check:
    if (n == NULL) {
        return;
    }
    if (*(f32 *)((char *)n + 8) != key) {
        goto adv;
    }
    if (*(void **)((char *)obj + 32) == n) {
        *(void **)((char *)obj + 32) = *(void **)((char *)n + 4);
    }
    if (*(void **)((char *)obj + 20) == n) {
        *(void **)((char *)obj + 20) = *(void **)((char *)obj + 32);
    }
    if (*(void **)((char *)obj + 24) == n) {
        *(void **)((char *)obj + 24) = *(void **)((char *)obj + 32);
    }
    UiKeyframe__Destroy(n, 3);
}
