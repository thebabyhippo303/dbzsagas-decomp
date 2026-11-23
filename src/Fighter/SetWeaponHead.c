/* Fighter__SetWeaponHead @ 0x8002BCFC (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched. ProDG -O2. */
typedef struct { char pad[0xc8]; void *field_c8; } ObjC8;

void fn_800F0248(void *p);
void Fighter__SetWeaponMouth(ObjC8 *self) { fn_800F0248(self->field_c8); }

void fn_800F0254(void *p);
void Fighter__SetWeaponPelvis(ObjC8 *self) { fn_800F0254(self->field_c8); }

void fn_800F02AC(void *p);
void Fighter__SetWeaponHead(ObjC8 *self) { fn_800F02AC(self->field_c8); }
