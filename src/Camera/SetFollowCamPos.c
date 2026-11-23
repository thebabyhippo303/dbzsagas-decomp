/* Camera__SetFollowCamPos @ 0x8002C888 (size: 0xFC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8;
typedef int s32;
typedef unsigned int u32;
typedef float f32;
typedef struct { f32 x, y, z; } Vec3;

f32 Script__PopFloat(void *, void *);
int String__CompareIgnoreCase(const char *, const char *);
void Camera__SetFollowCamPosImpl(void *, Vec3 *, int, f32);
extern char lbl_80311630[];
extern f32 lbl_8031163C;
extern void **lbl_803DC5B4;

void Camera__SetFollowCamPos(void *script, void *stack) {
    Vec3 position;
    Vec3 result;
    void **entries;
    void *camera;
    s32 count;
    s32 index;

    position.x = Script__PopFloat(script, stack);
    position.y = Script__PopFloat(script, stack);
    position.z = Script__PopFloat(script, stack);
    camera = 0;
    entries = lbl_803DC5B4;
    if (lbl_80311630 != 0) {
        count = (s32)entries[0];
        index = 0;
        while (++index < count) {
            void **entry = (void **)((char *)entries[1] + index * 8);
            if (String__CompareIgnoreCase(lbl_80311630, (char *)entry[0]) == 0) {
                camera = (void *)entry;
                break;
            }
        }
    }
    *(Vec3 *)((char *)camera + 0x60) = position;
    Camera__SetFollowCamPosImpl(camera, &result, 1, lbl_8031163C);
}
