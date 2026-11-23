/* AI__SetStationary @ 0x8005B444 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct {
    char pad[0x288];
    float health;
    float maximum_health;
} AvatarHealth;
typedef struct {
    char pad0[0x390];
    AvatarHealth *avatar;
    char pad1[0x544 - 0x394];
    int stationary;
} AI;
extern char lbl_80320000[];
extern void Avatar__SetHealthImpl(AvatarHealth *avatar, float health);
void AI__SetStationary(AI *self, int stationary) {
    self->stationary = stationary;
    if (stationary != 0) {
        Avatar__SetHealthImpl(self->avatar, *(float *)(lbl_80320000 - 7472));
        self->avatar->maximum_health = *(float *)(lbl_80320000 - 7472);
    }
}