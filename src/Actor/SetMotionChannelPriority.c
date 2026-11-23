/* Actor__SetMotionChannelPriority @ 0x8003140C (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32; typedef unsigned int u32;
s32 Script__PopInt(void *, s32);
s32 fn_8023FA2C(void *);
void fn_8023FAE0(void *, void *, s32);
typedef struct Entry { s32 prio; s32 a[3]; s32 id; char pad[0x1C - 20]; } Entry;
typedef struct Tbl { u32 count; s32 pad[2]; char *entries; } Tbl;
typedef struct Mesh { char pad[0x174]; Tbl *tbl; } Mesh;
typedef struct Inner { char pad[0x84]; Mesh *mesh; } Inner;
typedef struct Actor { char pad[0xC8]; Inner *inner; } Actor;

void Actor__SetMotionChannelPriority(Actor *self, s32 ctx) {
    Entry *found = 0;
    s32 id = Script__PopInt(self, ctx);
    u32 i = 0;
    s32 off = 0;
    s32 prio = Script__PopInt(self, ctx);
    Tbl *t = self->inner->mesh->tbl;
    while (i < t->count) {
        Entry *e;
        if (fn_8023FA2C(t->entries + off) == 0) {
            e = (Entry *)(off + (s32)t->entries);
            if (e->id == id) {
                found = e;
                break;
            }
        }
        off += 0x1C;
        i++;
    }
    if (found->prio != prio) {
        fn_8023FAE0(t, found, prio);
    }
}
