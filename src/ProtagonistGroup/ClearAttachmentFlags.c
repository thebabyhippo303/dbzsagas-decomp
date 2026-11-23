/* ProtagonistGroup__ClearAttachmentFlags @ 0x801E8C60 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
void ProtagonistGroup__ClearAttachmentFlags(void *, void *);
typedef struct Att { char p0[60]; int flags; char p1[28]; void *left; void *right; } Att;

void ProtagonistGroup__ClearAttachmentFlags(void *group, void *node) {
    Att *a = *(Att **)((char *)node + 392);
    a->flags = 0;
    if (a->left != 0) {
        ProtagonistGroup__ClearAttachmentFlags(group, a->left);
    }
    if (a->right != 0) {
        ProtagonistGroup__ClearAttachmentFlags(group, a->right);
    }
}
