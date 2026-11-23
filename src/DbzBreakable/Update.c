/* DbzBreakable__Update @ 0x800E73D4 (size: 0x108, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: DbzBreakable__Update @ 0x800E73D4 (0x108). ProDG -O2. */
typedef int s32;
typedef unsigned int u32;
typedef float f32;
typedef short s16;

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Vec3i;

extern f32 lbl_80323668 __attribute__((section(".data")));

extern void DbzBreakable__UpdateDespawnSequence(void *self);
extern void DbzBreakable__BeginDespawnSequence(void *self, f32 t);
extern void DbzBreakable__UpdateSwayAnimation(void *self, Vec3i *pos);
extern void fn_802B4D78(void *self);

void DbzBreakable__Update(void *breakable) {
    Vec3i sway;

    DbzBreakable__UpdateDespawnSequence(breakable);
    *(s32 *)((char *)breakable + 0x3F8) = *(s32 *)((char *)breakable + 0x8D8);
    if (*(s32 *)((char *)breakable + 0x548) == 5) {
        if (((u32)(*(s32 *)((char *)breakable + 0x544) - 4) > 2U) &&
            ((*(s32 *)((char *)breakable + 0x598) != 0) ||
             (DbzBreakable__BeginDespawnSequence(breakable, lbl_80323668),
              *(s32 *)((char *)breakable + 0x598) != 0)) &&
            (*(s32 *)((char *)breakable + 0x79C) != 0) &&
            (*(s32 *)((char *)breakable + 0x544) != 7)) {
            DbzBreakable__BeginDespawnSequence(breakable, lbl_80323668);
        }
        if (*(s32 *)((char *)breakable + 0x544) == 6) {
            void *owner = *(void **)((char *)breakable + 0x34);
            void (**vtbl)(void *, s32) = (void (**)(void *, s32))((char *)owner + 0x64);
            (*vtbl)((char *)breakable + *(s16 *)((char *)owner + 0x60), 0);
        }
    }
    if (*(s32 *)((char *)breakable + 0x53C) == 0) {
        sway = *(Vec3i *)((char *)breakable + 0x38);
        DbzBreakable__UpdateSwayAnimation(breakable, &sway);
    }
    fn_802B4D78(breakable);
}
