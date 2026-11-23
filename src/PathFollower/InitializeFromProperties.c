/* PathFollower__InitializeFromProperties @ 0x802BD4D8 (size: 0x318, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void PropertyStream__PreReadHook2(void *);
void PropertyStream__PreReadHook3(void *, const char *);
char *PropertyStream__ReadString(void *, const char *, const char *);
f32 PropertyStream__ReadFloat(void *, const char *, const char *);
s32 PropertyStream__ReadInt(void *, const char *, const char *);
int strcmp(const char *, const char *);
extern s8 lbl_8035243C[] __attribute__((section(".data")));
extern s8 lbl_80352448[] __attribute__((section(".data")));
extern s8 lbl_80352454[] __attribute__((section(".data")));
extern s8 lbl_80352464[] __attribute__((section(".data")));
extern s8 lbl_80352474[] __attribute__((section(".data")));
extern s8 lbl_80352488[] __attribute__((section(".data")));
extern s8 lbl_80352498[] __attribute__((section(".data")));
extern s8 lbl_803524A4[] __attribute__((section(".data")));
extern s8 lbl_803524B4[] __attribute__((section(".data")));
extern s8 lbl_803524C0[] __attribute__((section(".data")));
extern s8 lbl_803524CC[] __attribute__((section(".data")));
extern s8 lbl_803524E0[] __attribute__((section(".data")));
extern s8 lbl_803524EC[] __attribute__((section(".data")));
extern s8 lbl_80352500[] __attribute__((section(".data")));
extern s8 lbl_80352510[] __attribute__((section(".data")));
extern s8 lbl_80352528[] __attribute__((section(".data")));
extern s8 lbl_8035253C[] __attribute__((section(".data")));
extern s8 lbl_80352550[] __attribute__((section(".data")));
extern s8 lbl_8035255C[] __attribute__((section(".data")));
extern s8 lbl_80352570[] __attribute__((section(".data")));
extern s8 lbl_80352580[] __attribute__((section(".data")));
extern s8 lbl_80352594[] __attribute__((section(".data")));
extern s8 lbl_803525A4[] __attribute__((section(".data")));
extern s8 lbl_803525B8[] __attribute__((section(".data")));
extern s8 lbl_803525C8[] __attribute__((section(".data")));
extern s8 lbl_803525E4[] __attribute__((section(".data")));
extern s8 lbl_803525FC[] __attribute__((section(".data")));
extern s8 lbl_80352604[] __attribute__((section(".data")));
extern s8 lbl_80352610[] __attribute__((section(".data")));
extern s8 lbl_8035261C[] __attribute__((section(".data")));
extern s8 lbl_8035263C[] __attribute__((section(".data")));
extern s8 lbl_80352654[] __attribute__((section(".data")));
extern s8 lbl_80352670[] __attribute__((section(".data")));
extern s8 lbl_80352684[] __attribute__((section(".data")));
extern s8 lbl_8035269C[] __attribute__((section(".data")));
extern s8 lbl_803526B0[] __attribute__((section(".data")));
extern s8 lbl_803526C0[] __attribute__((section(".data")));
extern M2C_UNK lbl_803BEFC0 __attribute__((section(".data")));
typedef void (*PFInitFn)(void *, char *, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32);
void PathFollower__InitializeFromProperties(void *arg0, s32 arg1) {
    void *self = arg0;
    void *stream = (void *) &lbl_803BEFC0;
    char *path;
    char *behavior;
    f32 init_speed;
    f32 target_speed;
    f32 accel;
    f32 max_g;
    f32 reset_delay;
    f32 restart_delay;
    s32 drop_on_ground;
    s32 true_ground;
    s32 keep_orient;
    s32 reverse_at_end;
    s32 restart_at_end;
    s32 waitmode;
    s32 face;
    s32 orient_y;
    s32 bounded;
    s32 calc;
    void *vt;
    PropertyStream__PreReadHook2(stream);
    PropertyStream__PreReadHook3(stream, lbl_8035243C);
    M2C_FIELD(self, s32 *, 4) = 0;
    path = PropertyStream__ReadString(stream, lbl_80352448, lbl_80352448);
    if (path == NULL || *path == 0) {
        return;
    }
    waitmode = 0;
    init_speed = PropertyStream__ReadFloat((void *) &lbl_803BEFC0, lbl_80352454, lbl_80352464);
    target_speed = PropertyStream__ReadFloat((void *) &lbl_803BEFC0, lbl_80352474, lbl_80352488);
    accel = PropertyStream__ReadFloat((void *) &lbl_803BEFC0, lbl_80352498, lbl_803524A4);
    max_g = PropertyStream__ReadFloat((void *) &lbl_803BEFC0, lbl_803524B4, lbl_803524C0);
    reset_delay = PropertyStream__ReadFloat((void *) &lbl_803BEFC0, lbl_803524CC, lbl_803524E0);
    drop_on_ground = PropertyStream__ReadInt((void *) &lbl_803BEFC0, lbl_803524EC, lbl_80352500);
    true_ground = PropertyStream__ReadInt((void *) &lbl_803BEFC0, lbl_80352510, lbl_80352528);
    keep_orient = PropertyStream__ReadInt((void *) &lbl_803BEFC0, lbl_8035253C, lbl_80352550);
    reverse_at_end = PropertyStream__ReadInt((void *) &lbl_803BEFC0, lbl_8035255C, lbl_80352570);
    restart_at_end = PropertyStream__ReadInt((void *) &lbl_803BEFC0, lbl_80352580, lbl_80352594);
    restart_delay = PropertyStream__ReadFloat((void *) &lbl_803BEFC0, lbl_803525A4, lbl_803525B8);
    behavior = PropertyStream__ReadString((void *) &lbl_803BEFC0, lbl_803525C8, lbl_803525E4);
    if (behavior != NULL) {
        strcmp(behavior, lbl_803525FC);
        waitmode = (strcmp(behavior, lbl_80352604) == 0);
        if (strcmp(behavior, lbl_80352610) == 0) {
            waitmode = 2;
        }
    }
    stream = (void *) &lbl_803BEFC0;
    face = PropertyStream__ReadInt(stream, lbl_8035261C, lbl_8035263C);
    orient_y = PropertyStream__ReadInt(stream, lbl_80352654, lbl_80352670);
    bounded = PropertyStream__ReadInt(stream, lbl_80352684, lbl_8035269C);
    calc = PropertyStream__ReadInt(stream, lbl_803526B0, lbl_803526C0);
    vt = M2C_FIELD(self, void **, 0xB4);
    M2C_FIELD(vt, PFInitFn *, 0x1C)((char *) self + M2C_FIELD(vt, s16 *, 0x18), path, drop_on_ground, true_ground, keep_orient, reverse_at_end, restart_at_end, waitmode, init_speed, target_speed, accel, max_g, reset_delay, restart_delay, face, orient_y, bounded, calc, arg1);
}
