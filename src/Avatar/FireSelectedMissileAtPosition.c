/* Avatar__FireSelectedMissileAtPosition @ 0x8009E330 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern void *WeaponInventory__GetSelected(void *inventory, int slot);
extern void *MissileWeapon__SpawnMissile(void *weapon, void *owner, Vec3 *pos);

void *Avatar__FireSelectedMissileAtPosition(char *avatar, Vec3 *pos) {
    void *weapon;

    weapon = WeaponInventory__GetSelected(avatar + 80, 1);
    if (weapon != 0) {
        Vec3 tmp;

        tmp = *pos;
        weapon = MissileWeapon__SpawnMissile(weapon, *(void **)(avatar + 868), &tmp);
    }
    return weapon;
}
