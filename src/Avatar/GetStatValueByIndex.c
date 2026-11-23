/* Avatar__GetStatValueByIndex @ 0x80099628 (size: 0x210, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

extern s32 Avatar__GetAccumulatedStatByIndex(void *self, s32 index);
extern s32 Avatar__GetStatRatioPercent(void *self);

s32 Avatar__GetStatValueByIndex(void *self, s32 index) {
    s32 value;

    value = 0;
    switch (index) {
    case 0:
        value = *(s32 *)((char *)self + 0x1AC4);
        break;
    case 1:
        value = *(s32 *)((char *)self + 0x1AC8);
        break;
    case 2:
        value = *(s32 *)((char *)self + 0x1ACC);
        break;
    case 3:
        value = *(s32 *)((char *)self + 0x1AD0);
        break;
    case 4:
        value = *(s32 *)((char *)self + 0x1AD4);
        break;
    case 5:
        value = *(s32 *)((char *)self + 0x1AD8);
        break;
    case 6:
        value = *(s32 *)((char *)self + 0x1ADC);
        break;
    case 7:
        value = *(s32 *)((char *)self + 0x1AE0);
        break;
    case 8:
        value = *(s32 *)((char *)self + 0x1AE4);
        break;
    case 9:
        value = *(s32 *)((char *)self + 0x1AE8);
        break;
    case 10:
        value = *(s32 *)((char *)self + 0x1AEC);
        break;
    case 11:
        value = *(s32 *)((char *)self + 0x1AF0);
        break;
    case 12:
        value = *(s32 *)((char *)self + 0x1AF4);
        break;
    case 14:
        value = *(s32 *)((char *)self + 0x1AFC);
        break;
    case 13:
        value = *(s32 *)((char *)self + 0x1AF8);
        break;
    case 15:
        value = *(s32 *)((char *)self + 0x1B28);
        break;
    case 16:
        value = *(s32 *)((char *)self + 0x1B2C);
        break;
    case 17:
        value = *(s32 *)((char *)self + 0x1B30);
        break;
    case 18:
        value = *(s32 *)((char *)self + 0x1B34);
        break;
    case 19:
        value = *(s32 *)((char *)self + 0x1B38);
        break;
    case 23:
        value = Avatar__GetAccumulatedStatByIndex(self, 23) + *(s32 *)((char *)self + 0x1B00);
        break;
    case 20:
        value = *(s32 *)((char *)self + 0x1B3C);
        break;
    case 21:
        value = *(s32 *)((char *)self + 0x1B40);
        break;
    case 22:
        value = *(s32 *)((char *)self + 0x1B44);
        break;
    case 25:
        value = Avatar__GetStatRatioPercent(self);
        break;
    case 26:
        value = 100 - Avatar__GetStatRatioPercent(self);
        break;
    }
    return value;
}
