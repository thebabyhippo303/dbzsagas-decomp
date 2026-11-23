/* ShotListEntry__SetCameraAndTimer @ 0x800B9B00 (size: 0x14, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
s32 ShotListEntry__SetCameraAndTimer(void *arg0, s32 arg1, f32 timer) {
    void *entry = arg0;
    M2C_FIELD(entry, s32 *, 0x40) = arg1;
    M2C_FIELD(entry, f32 *, 0x48) = timer;
    return 1;
}
