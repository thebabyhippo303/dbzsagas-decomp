/* AvatarCurve__HasReachedTime @ 0x800A1524 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AvatarCurve__HasReachedTime @ 0x800A1524 (0x74). ProDG -O2. */
typedef int s32;
typedef float f32;

extern f32 lbl_803DE51C __attribute__((section(".sdata")));

s32 AvatarCurve__HasReachedTime(void *arg0, f32 farg0) {
    char *curve;
    char *vtable;
    f32 value;
    s32 result;

    curve = *(char **)((char *)arg0 + 0x88);
    if (curve != 0) {
        vtable = *(char **)curve;
        value = ((f32 (*)(void *))(*(void **)(vtable + 0x54)))(curve + *(short *)(vtable + 0x50));
        result = 0;
        if (*(f32 *)((char *)arg0 + 0x90) < value * farg0 - lbl_803DE51C) {
            return result;
        }
    }
    return 1;
}
