/* Contact__GetPlane @ 0x8025C17C (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

extern void Contact__GatherPoints(void *arg0, void *arg1, s32 arg2, void *arg3, void *arg4);
extern s32 Contact__FitPlaneToPoints(s32 arg0, void *arg1, void *arg2, void *arg3, void *arg4);

typedef struct {
    u8 pad[16];
    s32 count;
} GetPlaneBuf;

s32 Contact__GetPlane(void *arg0, void *arg1, void *arg2) {
    u8 work[240];
    GetPlaneBuf buf;
    s32 i;

    if (arg0 == NULL) {
        return 0;
    }
    for (i = 0; i < 20; i++) {
    }
    Contact__GatherPoints(&buf, arg0, 20, work, &buf.count);
    return Contact__FitPlaneToPoints(buf.count, work, &buf, arg1, arg2) == 3;
}
