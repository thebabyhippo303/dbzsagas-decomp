/* PathGroup__AddPath @ 0x801FD420 (size: 0xCC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned int u32;

typedef struct PathNode PathNode;
struct PathNode {
    void *data;
    PathNode *next;
};

typedef struct {
    char pad0[8];
    u32 type;
    PathNode *head;
} PathGroup;

typedef struct {
    char pad[64];
    s32 f64;
} PathDef;

void *Mem__New(u32);
void *TrackPath__Construct(void *, void *, void *, s32, s32);
void *BezierPath__Construct(void *, void *, void *, s32, s32);
void *fn_80200288(void *, void *, void *, s32, s32);

void PathGroup__AddPath(PathGroup *self, PathDef *def, s32 arg) {
    void *path = 0;
    PathNode *node;
    PathNode *old;

    switch (self->type) {
    case 0:
        path = TrackPath__Construct(Mem__New(132), def, (char *)def + 72, def->f64, arg);
        break;
    case 1:
        path = BezierPath__Construct(Mem__New(120), def, (char *)def + 72, def->f64, 0);
        break;
    case 2:
        path = fn_80200288(Mem__New(128), def, (char *)def + 72, def->f64, 0);
        break;
    }
    node = Mem__New(8);
    old = self->head;
    self->head = node;
    node->next = old;
    node->data = path;
}
