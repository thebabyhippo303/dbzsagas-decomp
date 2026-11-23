/* Avatar__GetHeadPosition @ 0x8008B744 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned char u8;
typedef struct { s32 x, y, z; } V3i;
typedef struct {
    char pad0[0x38];
    V3i pos;
    char pad1[0x19DD - 0x44];
    u8 headBone;
} HeadAvatar;

void fn_801DD1B4(V3i *, HeadAvatar *, u8);

V3i *Avatar__GetHeadPosition(V3i *out, HeadAvatar *self) {
    u8 bone = self->headBone;
    if (bone == 0xFF) {
        *out = self->pos;
    } else {
        fn_801DD1B4(out, self, bone);
    }
    return out;
}
