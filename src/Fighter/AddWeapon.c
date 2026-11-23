/* Fighter__AddWeapon @ 0x8002B250 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Fighter__AddWeapon @ 0x8002B250 */
extern int Script__PopInt(void *script, void *context);
extern void Fighter__AddWeaponImpl(void *inner, int id);

void Fighter__AddWeapon(void *script, void *context) {
    int id;

    id = Script__PopInt(script, context);
    Fighter__AddWeaponImpl(*(void **)((char *)script + 200), id);
}
