/* Contact__GetPlaneEx @ 0x8025C204 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Contact__GetPlaneEx @ 0x8025C204 (0x90). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

extern void Contact__GatherPoints(void *arg0, void *arg1, s32 arg2, void *arg3, void *arg4);
extern s32 Contact__FitPlaneToPointsEx(s32 arg0, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5);

typedef struct {
    u8 pad[16];
    s32 count;
} GetPlaneExBuf;

s32 Contact__GetPlaneEx(void *arg0, void *arg1, void *arg2, void *arg3) {
    u8 work[240];
    GetPlaneExBuf buf;
    s32 i;

    if (arg0 == NULL) {
        return 0;
    }
    for (i = 0; i < 20; i++) {
    }
    Contact__GatherPoints(&buf, arg0, 20, work, &buf.count);
    return Contact__FitPlaneToPointsEx(buf.count, work, &buf, arg1, arg2, arg3) == 3;
}
