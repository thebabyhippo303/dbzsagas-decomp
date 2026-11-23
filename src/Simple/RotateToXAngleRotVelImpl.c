/* Simple__RotateToXAngleRotVelImpl @ 0x802C61D0 (size: 0x1E8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef float f32;
extern void Simple__SetXRot(void *self, f32 x);
extern f32 lbl_803531CC __attribute__((section(".data")));
extern f32 lbl_803531D0 __attribute__((section(".data")));
extern f32 lbl_803531D4 __attribute__((section(".data")));
extern f32 lbl_803DE500;
extern f32 lbl_803DE504;
extern f32 lbl_803DE520;
void Simple__RotateToXAngleRotVelImpl(void *actor, f32 angle, f32 speed, f32 velocity, f32 maxSpeed) {
    f32 delta, pi;
    s32 changed;
    f32 *rot;
    if (angle > lbl_803531CC || !(angle >= lbl_803531D0)) {
        angle = lbl_803531D4;
    }
    if (!(angle >= -lbl_803DE500)) {
        do {
            angle += lbl_803DE504;
        } while (angle < -lbl_803DE500);
    }
    pi = lbl_803DE500;
    if (!(angle <= pi)) {
        do {
            angle -= lbl_803DE504;
        } while (angle > pi);
    }
    if (*(f32 *)((char *)actor + 0x2A8) != angle) {
        rot = (f32 *)((char *)actor + 0x2C0);
        changed = 0;
        *(f32 *)((char *)actor + 0x2C0) = velocity;
        if (velocity != lbl_803531D4 || rot[1] != lbl_803531D4 || rot[2] != lbl_803531D4) {
            changed = 1;
        }
        *(s32 *)((char *)actor + 0x220) = changed;
        if (speed == lbl_803531D4) {
            Simple__SetXRot(actor, angle);
            return;
        }
        delta = angle - *(f32 *)((char *)actor + 0x2A8);
        if (delta > lbl_803531CC || !(delta >= lbl_803531D0)) {
            delta = lbl_803531D4;
        }
        if (!(delta >= -lbl_803DE500)) {
            do {
                delta += lbl_803DE504;
            } while (delta < -lbl_803DE500);
        }
        pi = lbl_803DE500;
        if (!(delta <= pi)) {
            do {
                delta -= lbl_803DE504;
            } while (delta > pi);
        }
        if (!(delta >= (lbl_803DE520 + lbl_803DE520) - pi)) {
            delta += lbl_803DE504;
        }
        if (!(maxSpeed <= lbl_803531D4) && !(__builtin_fabsf(delta / speed) >= maxSpeed)) {
            speed = __builtin_fabsf(delta / maxSpeed);
        }
        if (delta >= lbl_803531D4) {
            *(f32 *)((char *)actor + 0x74) = speed;
        } else {
            f32 negSpeed = -speed;
            *(f32 *)((char *)actor + 0x74) = negSpeed;
        }
        *(s32 *)((char *)actor + 0x214) = 1;
        *(f32 *)((char *)actor + 0x2B4) = angle;
    }
}
