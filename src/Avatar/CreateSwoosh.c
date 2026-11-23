/* Avatar__CreateSwoosh @ 0x8003BA74 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__CreateSwoosh @ 0x8003BA74 (0x90). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

extern void *Script__PopInt(void *, void *);
extern char *Script__PopString(void *, void *, int *);
extern void Script__PushInt(void *, void *, int);
extern void fn_80184430(char *);
extern s32 Avatar__CreateSwooshImpl(void *, s8 *, void *);

void Avatar__CreateSwoosh(void *arg0, void *arg1) {
    s32 sp8;
    s8 *name;
    void *avatar;
    void *lane;
    s32 result;

    avatar = Script__PopInt(arg0, arg1);
    name = (s8 *) Script__PopString(arg0, arg1, &sp8);
    lane = Script__PopInt(arg0, arg1);
    result = Avatar__CreateSwooshImpl((char *) avatar + 0x684, name, lane);
    Script__PushInt(arg0, arg1, result);
    if (sp8 != 0 && name != NULL) {
        fn_80184430((char *) name);
    }
}
