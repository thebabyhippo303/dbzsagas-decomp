/* AI__GetNearestAvatarVerticalRelation @ 0x8007045C (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct VertAvatar {
    char pad[0x3C];
    float y;
} VertAvatar;

typedef struct AI {
    char pad[0x390];
    VertAvatar *avatar;
} AI;

extern float lbl_8031EE04 __attribute__((section(".rodata")));
extern float lbl_8031EE08 __attribute__((section(".rodata")));
extern float lbl_8031EE0C __attribute__((section(".rodata")));
extern void *Game__FindNearestEligibleAvatar(void *actor);

float AI__GetNearestAvatarVerticalRelation(AI *self) {
    float result;
    VertAvatar *near;
    float self_y;
    float near_y;

    result = lbl_8031EE04;
    near = Game__FindNearestEligibleAvatar(self->avatar);
    if (near != 0) {
        self_y = self->avatar->y;
        near_y = near->y;
        if (!(self_y >= near_y)) {
            result = lbl_8031EE08;
        } else if (!(near_y >= self_y)) {
            result = lbl_8031EE0C;
        }
    }
    return result;
}
