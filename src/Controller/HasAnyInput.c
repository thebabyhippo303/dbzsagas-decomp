/* Controller__HasAnyInput @ 0x801D4FE8 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;

extern f32 lbl_80342508 __attribute__((section(".data")));

s32 Controller__HasAnyInput(char *self) {
    s32 *btn = (s32 *)(self + 4);
    f32 *axis;
    s32 n = 19;
    f32 a;

    do {
        s32 v = *btn;
        btn += 2;
        if (v != 0) {
            return 1;
        }
        n -= 1;
    } while (n != 0);
    n = 17;
    axis = (f32 *)(self + 0x98);
    while (n != 0) {
        a = *axis;
        axis += 1;
        if (__builtin_fabsf(a) > lbl_80342508) {
            return 1;
        }
        n -= 1;
    }
    return 0;
}
