/* TriggerBox__UpdatePlayerOverlap @ 0x800FCCB4 (size: 0x384, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct {
    char pad_0[0x34];
    void *vtable_34;
    char pad_38[0x160];
    void *vtable_198;
    char pad_19C[0x18];
    void *vtable_1B4;
    char pad_1B8[0x310];
    void *vtable_4C8;
    char pad_4CC[0x44];
    int field_510;
    char pad_514[0x28];
    int field_53C;
    char pad_540[8];
    int field_548;
    int field_54C;
    char pad_550[4];
    int field_554;
    int field_558;
    void *allocation_55C;
    int field_560;
} TriggerBox;

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    s32 flags;
    s32 zero;
    u32 ms;
    s32 unk;
    char pad[12];
    void *ptr;
    s32 three;
    void *s1;
    void *s2;
    s32 tail;
} ObbArg;

void *Game__GetPlayerImpl(s32, s32);
s32 Game__GetConfiguredPlayerCount(s32);
u32 Timer__GetMilliseconds(void);
s32 ObbToObb__Test(void *);
void TriggerBox__ProcessActorOverlap(s8 *, void *, void *);
extern s32 lbl_803DC3C0;
extern f32 lbl_803247D4 __attribute__((section(".data")));
extern char lbl_80342350[];
extern char lbl_803420F8[];
extern s32 lbl_803A35A0 __attribute__((section(".data")));
extern char lbl_803ACEE4[];

void TriggerBox__UpdatePlayerOverlap(TriggerBox *tb, s32 arg1, s32 arg2) {
    f32 thr;
    s32 idx;
    char *ref;
    void *p42350;
    s32 three;
    s32 one;
    Vec3 d1;
    Vec3 d2;
    ObbArg obb;
    s32 i;
    void *player;
    s32 fbit;
    void *shape;
    s16 off;
    void *res;
    void *mtx;
    f32 dx;
    f32 dy;
    f32 dz;
    s32 hit;
    void *shape2;
    void *res2;
    void **list;
    s32 n;
    s32 k;
    s32 j;

    if (tb->field_53C == 0) {
        return;
    }
    thr = lbl_803247D4;
    idx = 0;
    ref = (char *)&tb->vtable_198;
    three = 3;
    p42350 = lbl_80342350;
    one = 1;
    goto check;
loop:
    player = Game__GetPlayerImpl(lbl_803DC3C0, idx);
    if (player == NULL) {
        goto next;
    }
    if (!(M2C_FIELD(player, f32 *, 0x288) > thr)) {
        goto next;
    }
    fbit = tb->field_554 & 0x1000;
    if (fbit == 0) {
        shape = tb->vtable_198;
        off = M2C_FIELD(shape, s16 *, 0x78);
        res = ((void *(*)(void *))M2C_FIELD(shape, void **, 0x7C))(ref + off);
        shape2 = M2C_FIELD(player, void **, 0x198);
        off = M2C_FIELD(shape2, s16 *, 0x78);
        res2 = ((void *(*)(void *))M2C_FIELD(shape2, void **, 0x7C))((char *)player + 0x198 + off);
        obb.flags = fbit;
        obb.ptr = p42350;
        obb.ms = Timer__GetMilliseconds();
        obb.unk = lbl_803A35A0;
        obb.ptr = lbl_803420F8;
        for (i = 48; i != 0; --i) {
            obb.s1 = res;
            obb.s2 = res2;
            obb.three = three;
        }
        obb.zero = 0;
        hit = ObbToObb__Test(&obb);
        obb.ptr = p42350;
    } else {
        shape = tb->vtable_198;
        off = M2C_FIELD(shape, s16 *, 0x78);
        res = ((void *(*)(void *))M2C_FIELD(shape, void **, 0x7C))(ref + off);
        mtx = M2C_FIELD(res, void **, 0x24);
        {
            f32 *pv = (f32 *)((char *)player + 0x38);
            dx = pv[0] - M2C_FIELD(mtx, f32 *, 0);
            dz = pv[2] - M2C_FIELD(mtx, f32 *, 8);
            d1.x = dx;
            dy = pv[1] - M2C_FIELD(mtx, f32 *, 4);
        }
        d1.z = dz;
        d1.y = dy;
        mtx = M2C_FIELD(res, void **, 0x20);
        d2.x = dx * M2C_FIELD(mtx, f32 *, 0) + dy * M2C_FIELD(mtx, f32 *, 4) + dz * M2C_FIELD(mtx, f32 *, 8);
        d2.y = dx * M2C_FIELD(mtx, f32 *, 12) + dy * M2C_FIELD(mtx, f32 *, 16) + dz * M2C_FIELD(mtx, f32 *, 20);
        d2.z = dx * M2C_FIELD(mtx, f32 *, 24) + dy * M2C_FIELD(mtx, f32 *, 28) + dz * M2C_FIELD(mtx, f32 *, 32);
        hit = 0;
        if (d2.x < M2C_FIELD(res, f32 *, 4)) {
            goto done;
        }
        if (d2.x > M2C_FIELD(res, f32 *, 16)) {
            goto done;
        }
        if (d2.y < M2C_FIELD(res, f32 *, 8)) {
            goto done;
        }
        if (d2.y > M2C_FIELD(res, f32 *, 4)) {
            goto done;
        }
        if (d2.z < M2C_FIELD(res, f32 *, 12)) {
            goto done;
        }
        hit = (d2.z <= M2C_FIELD(res, f32 *, 8));
done:
        ;
    }
    list = (void **)tb->allocation_55C;
    if (list != NULL) {
        if (hit == 0) {
            if (list[0] != NULL && (list[0] == player || list[1] != NULL)) {
                k = 0;
                n = 0;
                do {
                    if (list[k] == player) {
                        j = n * 4;
                        do {
                            *(s32 *)((char *)tb->allocation_55C + j) = *(s32 *)((char *)tb->allocation_55C + j + 4);
                            j += 4;
                        } while (*(s32 *)((char *)tb->allocation_55C + j) != 0);
                        goto next2;
                    }
                    k++;
                    n++;
                } while (list[k] != NULL);
            }
        } else {
            n = 0;
            if (list[0] != NULL) {
                k = 0;
                do {
                    if (list[k] == player) {
                        hit = 0;
                        goto next2;
                    }
                    k++;
                    n++;
                } while (list[k] != NULL);
            }
            if (n <= 15) {
                list[n] = player;
                M2C_FIELD(player, s32 *, 0x110) |= 0x20000;
            }
            hit = 1;
        }
    }
next2:
    if (hit != 0) {
        if (arg1 != 0) {
            TriggerBox__ProcessActorOverlap((s8 *)tb, player, lbl_803ACEE4);
            tb->field_548 = one;
        }
        if (arg2 != 0) {
            tb->field_54C = one;
            return;
        }
    }
next:
    idx++;
check:
    if (idx < Game__GetConfiguredPlayerCount(lbl_803DC3C0)) {
        goto loop;
    }
}
