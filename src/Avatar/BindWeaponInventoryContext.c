/* Avatar__BindWeaponInventoryContext @ 0x8009D5C0 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__BindWeaponInventoryContext @ 0x8009D5C0 (0x54). ProDG -O2. */
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

void *Game__GetInstance(void);
int fn_8009D614(void *, unsigned short);

void Avatar__BindWeaponInventoryContext(void *arg0, int arg1) {
    if (arg1 != 0) {
        M2C_FIELD(arg0, int *, 0x50) = arg1;
        fn_8009D614(arg0, M2C_FIELD(M2C_FIELD(Game__GetInstance(), void **, 0x238), unsigned short *, 6));
    }
    M2C_FIELD(arg0, int *, 0x354) = 0;
    M2C_FIELD(arg0, int *, 0x358) = 0;
}
