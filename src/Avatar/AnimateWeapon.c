/* Avatar__AnimateWeapon @ 0x800303AC (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__AnimateWeapon @ 0x800303AC (0x94). ProDG -O2. */
typedef struct AnimBank {
    char pad[360];
    void *table;
} AnimBank;

typedef struct AvatarAnim {
    char pad0[132];
    AnimBank *bank;
    char pad1[5480];
    void *inventory;
} AvatarAnim;

extern int Script__PopInt(void *script, void *context);
extern void *WeaponInventory__GetSelected(void *inventory, int which);
extern void *AnimationTable__GetById(void *table, int id);
extern void Weapon__Animate(void *weapon, void *anim, int mode, int flags);

void Avatar__AnimateWeapon(void *script, void *context) {
    AvatarAnim *avatar;
    int ignored;
    int id;
    int mode;
    void *weapon;
    void *anim;

    avatar = (AvatarAnim *)Script__PopInt(script, context);
    ignored = Script__PopInt(script, context);
    id = Script__PopInt(script, context);
    mode = Script__PopInt(script, context);
    (void)ignored;
    weapon = WeaponInventory__GetSelected(&avatar->inventory, 1);
    anim = AnimationTable__GetById(avatar->bank->table, id);
    Weapon__Animate(weapon, anim, mode, 0);
}
