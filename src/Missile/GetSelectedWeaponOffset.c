/* Missile__GetSelectedWeaponOffset @ 0x8009E1D0 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32; typedef float f32;
typedef struct Vec3 { f32 x, y, z; } Vec3;
void *WeaponInventory__GetSelected(void *, s32);
Vec3 Missile__GetSelectedWeaponOffset(char *obj) {
    Vec3 result;
    Vec3 tmp;
    void *sel = WeaponInventory__GetSelected(obj + 0x50, 1);
    if (sel != 0) {
        char *base = *(char **)((char *)sel + 0x48) + 0x10;
        f32 x, y, z;
        x = *(f32 *)(base + 0x30);
        y = *(f32 *)(base + 0x34);
        z = *(f32 *)(base + 0x38);
        tmp.x = x;
        tmp.y = y;
        tmp.z = z;
        result = tmp;
    }
    return result;
}
