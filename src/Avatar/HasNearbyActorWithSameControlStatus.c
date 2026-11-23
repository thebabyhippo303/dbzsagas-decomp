/* Avatar__HasNearbyActorWithSameControlStatus @ 0x80093C3C (size: 0x1A4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;
typedef struct Actor {
    int flags;
    char pad[0x38 - 4];
    Vec3 pos;
    char pad2[0x84 - 0x44];
    void *script;
    char pad3[0x71C - 0x88];
    int mode;
    char pad4[0x7E4 - 0x720];
    int ctrl;
} Actor;
typedef struct Node {
    Actor *actor;
    char pad[0x14 - 4];
    struct Node *next;
} Node;
typedef struct Mask {
    int value;
    int bits;
} Mask;
typedef struct World {
    char pad[0x2C];
    Node *head;
} World;

extern World *lbl_803DCCB8;
extern Mask lbl_803945E4 __attribute__((section(".data")));
extern float lbl_8031F900 __attribute__((section(".data")));
int AnimScript__GetCurrentLabel(void *, int);

int Avatar__HasNearbyActorWithSameControlStatus(Actor *self) {
    Vec3 pos;
    volatile Vec3 gap;
    Vec3 delta2;
    Vec3 other;
    Vec3 delta;
    Vec3 sq;
    int found;
    float limit;
    Node *n;

    pos = self->pos;
    found = 0;
    limit = lbl_8031F900;
    n = lbl_803DCCB8->head;
    if (n != 0) {
        do {
            Actor *a;
            Vec3 *ppos;
            Vec3 *psq;
            float x;
            float y;
            float z;
            float xx;
            float sum;

            a = n->actor;
            AnimScript__GetCurrentLabel(a->script, 0);
            if ((a->flags & lbl_803945E4.bits) == lbl_803945E4.value && a != self && a->mode != 2) {
                ppos = &pos;
                other = a->pos;
                delta.x = other.x - pos.x;
                delta.y = other.y - ppos->y;
                delta.z = other.z - ppos->z;
                delta2 = delta;
                x = delta2.x;
                y = delta2.y;
                z = delta2.z;
                xx = x * x;
                sq.x = xx;
                sq.y = y * y;
                sq.z = z * z;
                psq = &sq;
                sum = xx + psq->y + psq->z;
                if (!(sum >= limit) && self->ctrl == a->ctrl) {
                    found = 1;
                    break;
                }
            }
            {
                World *w;

                w = lbl_803DCCB8;
                if (n != 0) {
                    n = n->next;
                } else {
                    n = w->head;
                }
            }
        } while (n != 0);
    }
    return found;
}
