/* MenuController__UpdateActiveMenu @ 0x8004B620 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MenuController__UpdateActiveMenu @ 0x8004B620 (0x70). ProDG -O2. */
typedef struct MenuController MenuController;
typedef struct MenuControllerVTable MenuControllerVTable;
typedef struct ChildMenu ChildMenu;
typedef struct ChildMenuVTable ChildMenuVTable;

struct MenuControllerVTable {
    char pad[0x3A0];
    short thisAdjustment;
    int (*hasActiveMenu)(void *subobject);
};

struct ChildMenuVTable {
    char pad[0x38];
    short thisAdjustment;
    void (*update)(void *subobject);
};

struct ChildMenu {
    char pad[0x19C];
    ChildMenuVTable *vtable;
};

struct MenuController {
    char pad[0x19C];
    MenuControllerVTable *vtable;
    char pad2[0xAE9C - 0x1A0];
    ChildMenu *activeMenu;
};

extern void fn_8026BF14(void *self);

void MenuController__UpdateActiveMenu(MenuController *self) {
    if (self->vtable->hasActiveMenu((char *)self + self->vtable->thisAdjustment)) {
        ChildMenu *menu = self->activeMenu;
        menu->vtable->update((char *)menu + menu->vtable->thisAdjustment);
    }
    fn_8026BF14(self);
}
