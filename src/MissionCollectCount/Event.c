/* MissionCollectCount__Event @ 0x8012A298 (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

extern char lbl_80327A98[];
extern void Debug__FormatMessage(char *fmt, ...);
M2C_UNK MissionCollect__Event(void *, M2C_UNK, s32); /* extern */
M2C_UNK MissionProgress__Complete(void *);          /* extern */

void MissionCollectCount__Event(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r9;

    MissionCollect__Event(arg0, arg1, arg2);
    if ((arg1 == 0xC9) && (arg2 == (s32) M2C_FIELD(arg0, s32 *, 0x24))) {
        temp_r9 = M2C_FIELD(arg0, s32 *, 0x1C) + 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_r9;
        if (((s32) M2C_FIELD(arg0, s32 *, 0) != 0) && (temp_r9 == (s32) M2C_FIELD(arg0, s32 *, 0x20))) {
            MissionProgress__Complete(arg0);
            MissionCollect__Event(arg0, 0x65, M2C_FIELD(arg0, s32 *, 4));
        }
        Debug__FormatMessage(lbl_80327A98, M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg0, s32 *, 0x20));
    }
}
