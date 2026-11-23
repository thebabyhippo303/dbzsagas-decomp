/* Bike__WarpToStart @ 0x801FEB94 (size: 0x144, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;

void Debug__FormatMessage(char *fmt, ...);
s32 fn_801FC8A8(void *bike);

extern char lbl_80345480[] __attribute__((section(".data")));
extern f32 lbl_803454BC __attribute__((section(".data")));
extern f32 lbl_803454C0 __attribute__((section(".data")));
extern f32 lbl_803454C4 __attribute__((section(".data")));

f32 Bike__WarpToStart(void *bike, f32 distance) {
    void *arr;
    f32 limit;
    f32 head;
    f32 len;
    f32 sum;
    f32 *elem;
    s32 index;

    if ((distance < lbl_803454BC) || (distance > lbl_803454C0)) {
        Debug__FormatMessage(lbl_80345480, distance);
        distance = lbl_803454C4;
    }
    arr = *(void **)((char *)bike + 0x24);
    limit = lbl_803454C4;
    head = *(f32 *)((char *)arr + 0x18);
    if (head != limit) {
        index = *(s32 *)((char *)bike + 0x20);
        elem = (f32 *)((char *)arr + (index * 28) - 28);
        sum = elem[6] + elem[5];
        if (distance < head) {
            distance = head;
        } else if (distance > sum) {
            distance = sum;
        }
    } else if (fn_801FC8A8(bike) != 0) {
        len = *(f32 *)((char *)bike + 8);
        while (distance < limit) {
            distance += len;
        }
        while (distance > len) {
            distance -= len;
        }
    } else {
        len = *(f32 *)((char *)bike + 8);
        if (distance < limit) {
            distance = limit;
        } else if (distance > len) {
            distance = len;
        }
    }
    return distance;
}
