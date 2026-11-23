/* MenuList__GetSelectedRecordId @ 0x800143A8 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
/* MenuList__GetSelectedRecordId @ 0x800143A8 */
extern int MenuList__SubtractAndWrapIndex(void *self, int index, int step);

int MenuList__GetSelectedRecordId(void *self) {
    void *node;
    void *found;
    int index;
    int i;

    node = *(void **)((char *)self + 0x538);
    i = 0;
    found = 0;
    if (node != 0) {
        if (*(int *)((char *)self + 0x50C) <= *(int *)((char *)self + 0x1A0)) {
            index = *(int *)((char *)self + 0x1A4);
        } else {
            index = MenuList__SubtractAndWrapIndex(self, *(int *)((char *)self + 0x1A4), 1);
        }
        while (node != 0) {
            if (index == i) {
                found = node;
            }
            node = *(void **)((char *)node + 0x208);
            i++;
        }
        return *(int *)((char *)found + 0x200);
    }
    return -1;
}
