/* ProtagonistGroup__RestoreFlaggedAttachments @ 0x801E8CB8 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Attachment Attachment;
typedef struct Node Node;

struct Attachment {
    char *owner;
    char pad[0x24 - 4];
    Node *child0;
    Node *child1;
    char pad2[0x3C - 0x2C];
    int flagged;
};

struct Node {
    char pad[0x188];
    Attachment *attachment;
};

void Attachment__RestoreHomeParent(Attachment *);
void ProtagonistGroup__ClearAttachmentFlags(void *, void *);

void ProtagonistGroup__RestoreFlaggedAttachments(void *self, Node *node) {
    Attachment *a = node->attachment;

    if (a->flagged != 0) {
        char *vt = *(char **)(a->owner + 0x34);

        ((void (*)(void *))*(void **)(vt + 0x144))(a->owner + *(short *)(vt + 0x140));
        Attachment__RestoreHomeParent(a);
        ProtagonistGroup__ClearAttachmentFlags(self, a->owner);
    }
    if (a->child0 != 0) {
        ProtagonistGroup__RestoreFlaggedAttachments(self, a->child0);
    }
    if (a->child1 != 0) {
        ProtagonistGroup__RestoreFlaggedAttachments(self, a->child1);
    }
}
