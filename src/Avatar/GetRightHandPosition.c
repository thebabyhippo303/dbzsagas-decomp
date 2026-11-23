/* Avatar__GetRightHandPosition @ 0x8008B7A4 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct V3 { int x, y, z; } V3;
void *CActor__GetBoneWorldOffsetPosition(void *, void *, int);

void *Avatar__GetRightHandPosition(void *out, void *actor) {
    int bone = *(unsigned char *)((char *)actor + 0x19DE);
    if (bone == 0xFF) {
        *(V3 *)out = *(V3 *)((char *)actor + 0x38);
    } else {
        CActor__GetBoneWorldOffsetPosition(out, actor, bone);
    }
    return out;
}
