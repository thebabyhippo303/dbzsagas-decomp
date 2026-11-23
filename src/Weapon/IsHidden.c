/* Weapon__IsHidden @ 0x800DD8F0 (size: 0x10, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Weapon__IsHidden @ 0x800DD8F0 (0x10). ProDG -O2. */
typedef struct {
    char pad[2];
    unsigned short flags;
} WeaponFlags;

typedef struct {
    char pad[0x48];
    WeaponFlags *state;
} WeaponStatePointer;

int Weapon__IsHidden(WeaponStatePointer *weapon) {
    return weapon->state->flags & 1;
}
