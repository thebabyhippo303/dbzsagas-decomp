/* Avatar__GetBoneIdForSlot @ 0x800AE188 (size: 0x1E0, .text, ProDG 3.9.3 -O2) - MATCHED */
extern int Actor__FindBoneIdByName(void *actor, const char *name, unsigned char *bone_id);
extern void *WeaponInventory__GetSelected(void *inventory, int which);

extern char lbl_80320DE4[] __attribute__((section(".rodata")));
extern char lbl_8031E248[] __attribute__((section(".rodata")));
extern char lbl_8031F834[] __attribute__((section(".rodata")));
extern char lbl_8031F840[] __attribute__((section(".rodata")));
extern char lbl_80320DF0[] __attribute__((section(".rodata")));
extern char lbl_80320DF8[] __attribute__((section(".rodata")));
extern char lbl_8031E9D0[] __attribute__((section(".rodata")));
extern char lbl_80320E00[] __attribute__((section(".rodata")));
extern char lbl_80320E08[] __attribute__((section(".rodata")));
extern char lbl_80320E14[] __attribute__((section(".rodata")));
extern char lbl_80320E20[] __attribute__((section(".rodata")));
extern char lbl_80320E2C[] __attribute__((section(".rodata")));

int Avatar__GetBoneIdForSlot(void *self, void *actor, int slot) {
    volatile unsigned char bone_id;

    (void)self;
    bone_id = 0;
    switch (slot) {
    case 0:
    case 15:
        if (bone_id != 0) {
            break;
        }
        Actor__FindBoneIdByName(actor, lbl_80320DE4, &bone_id);
        break;
    case 1:
    case 16:
        if (bone_id != 0) {
            break;
        }
        Actor__FindBoneIdByName(actor, lbl_8031E248, &bone_id);
        break;
    case 2:
    case 13:
        if (bone_id != 0) {
            break;
        }
        Actor__FindBoneIdByName(actor, lbl_8031F834, &bone_id);
        break;
    case 3:
    case 14:
        if (bone_id != 0) {
            break;
        }
        Actor__FindBoneIdByName(actor, lbl_8031F840, &bone_id);
        break;
    case 4:
        Actor__FindBoneIdByName(actor, lbl_80320DF0, &bone_id);
        break;
    case 5:
        Actor__FindBoneIdByName(actor, lbl_80320DF8, &bone_id);
        break;
    case 7:
        Actor__FindBoneIdByName(actor, lbl_8031E9D0, &bone_id);
        break;
    case 8:
        Actor__FindBoneIdByName(actor, lbl_80320E00, &bone_id);
        break;
    case 9:
        if (bone_id != 0) {
            break;
        }
        Actor__FindBoneIdByName(actor, lbl_80320E08, &bone_id);
        break;
    case 10:
        Actor__FindBoneIdByName(actor, lbl_80320E14, &bone_id);
        break;
    case 11:
        Actor__FindBoneIdByName(actor, lbl_80320E20, &bone_id);
        break;
    case 12:
        Actor__FindBoneIdByName(actor, lbl_80320E2C, &bone_id);
        break;
    case 6:
        Actor__FindBoneIdByName(actor,
            (char *)WeaponInventory__GetSelected((char *)actor + 0x15F0, 0) + 16,
            (unsigned char *)&bone_id);
        break;
    default:
        break;
    }
    return bone_id;
}
