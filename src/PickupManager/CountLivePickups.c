/* PickupManager__CountLivePickups @ 0x800E4CCC (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PickupManager__CountLivePickups @ 0x800E4CCC (0x38). ProDG -O2. */
typedef int s32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

s32 PickupManager__CountLivePickups(void *arg0) {
    s32 *var_r3;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_ctr;
    s32 var_r9;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    var_r9 = 0;
    if (var_r9 < temp_r0) {
        var_ctr = temp_r0;
        var_r3 = M2C_FIELD(arg0, s32 **, 0);
        do {
            temp_r0_2 = *var_r3;
            var_r3 += 1;
            if (temp_r0_2 != 0) {
                var_r9 += 1;
            }
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
    return var_r9;
}
