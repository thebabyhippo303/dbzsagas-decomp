/* UiSpriteResources__HideOverlayRows @ 0x8000FEBC (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef short s16;
typedef void (*RowCallback)(s32);
void UiSpriteResources__HideOverlayRows(void *arg0) {
    char *row = (char *)arg0 + 4;
    char *widgets = (char *)arg0 + 0x1A0;
    s32 count = 10;
    do {
        void *widget = *(void **)widgets;
        RowCallback callback = *(RowCallback *)((char *)widget + 0x1E4);
        s16 offset = *(s16 *)((char *)widget + 0x1E0);
        widgets += 0x1A0;
        callback((s32)(row + offset));
        row += 0x1A0;
        count--;
    } while (count != 0);
}
