/* AvatarCurve__IsAtEnd @ 0x800A1504 (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AvatarCurve__IsAtEnd @ 0x800A1504 (0x20). ProDG -O2. */
typedef struct {
    char pad[0x88];
    int node;
    char pad8c[8];
    int active;
} AvatarCurveCtl;

int AvatarCurve__IsAtEnd(AvatarCurveCtl *ctl) {
    if (ctl->node != 0) {
        return ctl->active ^ 1;
    }
    return 1;
}
