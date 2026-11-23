/* FluffLoop__Update @ 0x8004CFAC (size: 0xD0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned int u32;
typedef float f32;
typedef double f64;

typedef struct FluffGlobals {
    char pad0[0xC];
    u32 raw;
    char pad1[0xC];
    f32 extra;
    char pad2[0x1C];
    s32 flag;
} FluffGlobals;

void fn_80184CA8(s32, f32, f32);
void fn_8026BF14(void *);
void fn_8004D0B8(void);
void fn_8025FEA4(f32);
void Sphere__ResetRegistry(void);
void fn_8022876C(void);

extern f32 lbl_803199A8 __attribute__((section(".data")));
extern FluffGlobals lbl_803A35A0 __attribute__((section(".data")));
extern s32 lbl_803DC354 __attribute__((section(".sdata")));
extern s32 lbl_803DC358 __attribute__((section(".sdata")));

/* Keep the int-to-float constant pool at the same low 16 bits as the DOL. */
static const char pool_pad[0x99A0] = {1};

s32 FluffLoop__Update(void *arg0) {
    f32 extra;
    s32 value;

    extra = lbl_803A35A0.extra;
    if ((lbl_803DC354 == 0) && (lbl_803DC358 == 0)) {
        fn_80184CA8(lbl_803A35A0.flag == 0, (f32)lbl_803A35A0.raw * lbl_803199A8, extra);
        fn_8026BF14((char *)arg0 + 0xC);
        fn_8004D0B8();
        fn_8025FEA4(extra);
        Sphere__ResetRegistry();
        fn_8022876C();
        fn_8022876C();
        value = *(s32 *)((char *)arg0 + 0x49158);
        return value == 0;
    }
    return 0;
}
