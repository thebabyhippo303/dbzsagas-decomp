/* AnimationData__FindTrack @ 0x8023AEEC (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned short u16;
typedef struct { char pad[4]; void *name; char rest[4]; } Track;
s32 String__CompareNIgnoreCase(void *, void *, int);
void *AnimationData__FindTrack(void *self, void *name)
{
    int i;
    Track *arr = *(Track **)((char *)self + 20);

    for (i = 0; i < *(u16 *)((char *)self + 18); i++) {
        if (String__CompareNIgnoreCase(arr[i].name, name, 15) != 0) {
            continue;
        }
        return &arr[i];
    }
    return 0;
}
