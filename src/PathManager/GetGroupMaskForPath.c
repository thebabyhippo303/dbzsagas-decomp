/* PathManager__GetGroupMaskForPath @ 0x801FD1C0 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef struct Node { s32 key; struct Node *next; } Node;
typedef struct Group { s32 pad0; s32 mask; s32 pad8; Node *list; } Group;

s32 PathManager__GetGroupMaskForPath(void *self, s32 key) {
    Group **groups = (Group **)((char *)self + 8);
    Group **p = groups;
    s32 off = 0;
    s32 i;
    if (key != 0) {
        for (i = 0; i < 32; i++) {
            Group *g = *p++;
            if (g != 0) {
                Node *n = g->list;
                if (n != 0) {
                    do {
                        if (key == n->key) {
                            return (*(Group **)((char *)groups + off))->mask;
                        }
                        n = n->next;
                    } while (n != 0);
                }
            }
            off += 4;
        }
    }
    return 0;
}
