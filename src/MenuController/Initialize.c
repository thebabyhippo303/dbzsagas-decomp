/* MenuController__Initialize @ 0x8004B424 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct MenuControllerVTable {
    char pad[0x1E0];
    short thisAdjustment;
    void (*initialize)(void *subobject);
} MenuControllerVTable;

typedef struct MenuController {
    char pad[0x19C];
    MenuControllerVTable *vtable;
} MenuController;

extern void MenuController__CreateMenuWidgets(MenuController *self);
extern void MenuController__CreateConfirmationDialog(MenuController *self);

void MenuController__Initialize(MenuController *self) {
    MenuController__CreateMenuWidgets(self);
    MenuController__CreateConfirmationDialog(self);
    self->vtable->initialize((char *)self + self->vtable->thisAdjustment);
}
