/* FileHandle__Read @ 0x80180658 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32; typedef unsigned int u32;

s32 FileStream__Read(void *, s32, s32);
s32 DvdFile__Read(void *, s32, s32);
extern s32 lbl_803DCB90;

s32 FileHandle__Read(s32 *arg0, void *arg1, s32 arg2, s32 *arg3) {
    s32 t;
    if (arg0[0] == 1) {
        t = FileStream__Read(arg1, arg2, arg0[1]) == arg2;
    } else {
        t = DvdFile__Read(arg1, arg2, arg0[1]);
    }
    if (t != 0) {
        return 1;
    }
    if (arg3 != 0) {
        *arg3 = lbl_803DCB90;
    }
    return 0;
}
