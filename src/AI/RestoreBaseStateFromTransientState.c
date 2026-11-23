/* AI__RestoreBaseStateFromTransientState @ 0x80061DC0 (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned int u32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
void *Actor__GetStateHandler(u32);
void AI__RestoreBaseStateFromTransientState(void *arg0) {
    s32 var_r0;
    u32 var_r3;
    if (M2C_FIELD(arg0, s32 *, 0x574) == 0) return;
    if (M2C_FIELD(arg0, s32 *, 0x74) == 6) goto state_six;
    if (M2C_FIELD(arg0, s32 *, 0x74) <= 6) {
        if (M2C_FIELD(arg0, s32 *, 0x74) == 2) goto state_two;
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x74) == 7) goto state_seven;
    if (M2C_FIELD(arg0, s32 *, 0x74) == 11) goto state_eleven;
    return;
state_two:
    var_r0 = 0; var_r3 = 0; goto apply_state;
state_eleven:
    var_r0 = 10; var_r3 = 10; goto apply_state;
state_seven:
    var_r0 = 5; var_r3 = 5; goto apply_state;
state_six:
    var_r0 = 4; var_r3 = 4;
apply_state:
    M2C_FIELD(arg0, s32 *, 0x74) = var_r0;
    M2C_FIELD(arg0, void **, 0x388) = Actor__GetStateHandler(var_r3);
    M2C_FIELD(arg0, s32 *, 0x78) = M2C_FIELD(arg0, s32 *, 0x74);
}
