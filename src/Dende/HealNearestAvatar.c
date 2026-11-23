/* Dende__HealNearestAvatar @ 0x800407F8 (size: 0x128, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;
typedef struct HealQuery {
    f32 x;
    f32 y;
    f32 z;
    f32 distance;
    void *avatar;
} HealQuery;
typedef struct Vector3 { f32 x, y, z; } Vector3;
typedef struct QueryFrame {
    HealQuery query;
    f32 pad1;
    Vector3 input;
} QueryFrame;
extern void *Script__PopInt(void *, void *);
extern void Script__PushInt(void *, void *, int);
extern void fn_80251510(void *, int, void *, void *, int);
extern void Avatar__StopFireShieldImpl(void *, void *);
extern int lbl_803B1DDC __attribute__((section(".data")));
extern f32 lbl_80311BFC __attribute__((section(".data")));
extern f32 lbl_80311C00 __attribute__((section(".data")));
extern f32 lbl_80311C04 __attribute__((section(".data")));
extern f32 lbl_80311C08 __attribute__((section(".data")));
void Dende__HealNearestAvatar(void *script, void *stack) {
    s32 result;
    QueryFrame frame;
    Script__PopInt(script, stack);
    result = 0;
    frame.query.avatar = 0;
    frame.query.distance = lbl_80311BFC;
    frame.input.x = *(f32 *)((char *)script + 0x40);
    frame.input.y = *(f32 *)((char *)script + 0x44);
    frame.input.z = *(f32 *)((char *)script + 0x48);
    frame.query.x = frame.input.x;
    frame.query.y = frame.input.y;
    frame.query.z = frame.input.z;
    fn_80251510(&lbl_803B1DDC, 0x10000, &frame.query, *(void **)((char *)script + 0xC8), 0);
    if (frame.query.avatar != 0) {
        if (!(frame.query.distance >= lbl_80311C00)) {
            f32 numerator = *(f32 *)((char *)frame.query.avatar + 0x288);
            f32 denominator = *(f32 *)((char *)frame.query.avatar + 0x28C);
            if (!(numerator / denominator >= lbl_80311C04)) {
                if (!(numerator <= lbl_80311C08)) {
                    result = 1;
                } else {
                    Avatar__StopFireShieldImpl(frame.query.avatar, (void *)2);
                }
            } else {
                Avatar__StopFireShieldImpl(frame.query.avatar, (void *)2);
            }
        } else {
            Avatar__StopFireShieldImpl(frame.query.avatar, (void *)2);
        }
    }
    Script__PushInt(script, stack, result);
}
