/* Avatar__LaunchWeaponNoShotDir @ 0x8002678C (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__LaunchWeaponNoShotDir @ 0x8002678C (0x28). ProDG -O2. */
typedef struct {
    char pad[0x18f4];
    int flag;
} WeaponObj;

void *fn_8023A310(void *out, void *ctx);

void Avatar__LaunchWeaponNoShotDir(void *out, void *ctx) {
    WeaponObj *w = fn_8023A310(out, ctx);
    w->flag = 1;
}

/* Byte-matched: Avatar__LaunchWeapon @ 0x800266F4 (0x98). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
typedef struct { f32 x, y, z; } LaunchWeaponV3;
s32 Script__PopInt(void *, s32);
void Avatar__SetWeaponLaunchParameters(void *, void *, f32);
extern f32 lbl_80311440 __attribute__((section(".data")));

void Avatar__LaunchWeapon(void *script, void *context) {
    LaunchWeaponV3 b, a;
    u8 *w;
    u8 *p;
    f32 g;
    f32 x, y, z;

    w = (u8 *)Script__PopInt(script, (s32)context);
    p = w + 68;
    x = *(f32 *)(p + 24);
    y = *(f32 *)(p + 28);
    z = *(f32 *)(p + 32);
    w += 5536;
    a.x = x;
    a.y = y;
    a.z = z;
    b = a;
    a = b;
    g = lbl_80311440;
    Avatar__SetWeaponLaunchParameters(w, &a, g);
    *(s32 *)(w + 852) = 1;
}
