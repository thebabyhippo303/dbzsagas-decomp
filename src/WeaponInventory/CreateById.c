/* WeaponInventory__CreateById @ 0x800DF750 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: WeaponInventory__CreateById @ 0x800DF750 (0x48). ProDG -O2. */
typedef struct {
    char pad[0x20];
    short this_adjust;
    short pad24;
    void *(*construct)(void *self);
} WeaponConstructor;

typedef struct {
    char pad[0x54];
    WeaponConstructor *constructor;
} WeaponDefinition;

extern WeaponDefinition *WeaponInventory__FindDefinitionById(
    void *inventory, int id);

void *WeaponInventory__CreateById(void *inventory, int id) {
    WeaponDefinition *definition =
        WeaponInventory__FindDefinitionById(inventory, id);
    if (definition == 0) {
        return 0;
    }
    return definition->constructor->construct(
        (char *)definition + definition->constructor->this_adjust);
}
