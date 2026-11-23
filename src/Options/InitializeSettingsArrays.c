/* Options__InitializeSettingsArrays @ 0x80126C68 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Options__InitializeSettingsArrays @ 0x80126C68 */
extern void *fn_80184348(int size);

void *Options__InitializeSettingsArrays(void *self) {
    void *tail;

    tail = (char *)self + 0x18;
    *(void **)((char *)self + 0x00) = fn_80184348(0x120);
    *(int *)((char *)self + 0x04) = 0;
    *(int *)((char *)self + 0x08) = 8;
    *(int *)((char *)self + 0x0C) = 8;
    *(int *)((char *)self + 0x10) = 0;
    *(int *)((char *)self + 0x14) = 0;
    *(void **)((char *)self + 0x18) = fn_80184348(0x120);
    *(int *)((char *)tail + 0x04) = 0;
    *(int *)((char *)tail + 0x08) = 8;
    *(int *)((char *)tail + 0x0C) = 8;
    *(int *)((char *)tail + 0x10) = 0;
    *(int *)((char *)tail + 0x14) = 0;
    return self;
}
