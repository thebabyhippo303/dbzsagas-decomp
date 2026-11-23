/* MenuList__DisableEntryWidgetUpdates @ 0x8001A9AC (size: 0xC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[0x548];
    int entryWidgetUpdates;
} MenuListWidgetUpdates;

void MenuList__DisableEntryWidgetUpdates(MenuListWidgetUpdates *self) {
    self->entryWidgetUpdates = 0;
}
