/* ProtagonistGroup__Remove @ 0x801E8AB0 (size: 0xE8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
s32 fn_801DF0C8(void *, void *);

void ProtagonistGroup__Remove(void *arg0, void *arg1) {
    s32 var_r0;
    s32 var_r0_2;
    void *var_r31;
    void *var_r9;
    void *var_r9_2;

    *(s32 *)((char *)arg1 + 0x188) = 0;
    var_r31 = *(void **)((char *)arg0 + 0x3C);
    goto check;
next:
    var_r31 = *(void **)((char *)var_r31 + 0x10);
check:
    if (var_r31 != 0) {
        if (fn_801DF0C8(var_r31, arg1) == 0) {
            goto next;
        }
        return;
    }
    var_r9 = *(void **)((char *)arg0 + 0x24);
    if (var_r9 != 0) {
loop_6:
        if ((s32)arg1 == *(s32 *)var_r9) {
            var_r0 = 1;
        } else {
            var_r9 = *(void **)((char *)var_r9 + 0x14);
            if (var_r9 == 0) {
                goto block_9;
            }
            goto loop_6;
        }
    } else {
block_9:
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        fn_801DF0C8((char *)arg0 + 0x24, arg1);
    }
    var_r9_2 = *(void **)((char *)arg0 + 0x30);
    if (var_r9_2 != 0) {
loop_13:
        if ((s32)arg1 == *(s32 *)var_r9_2) {
            var_r0_2 = 1;
        } else {
            var_r9_2 = *(void **)((char *)var_r9_2 + 0x14);
            if (var_r9_2 == 0) {
                goto block_16;
            }
            goto loop_13;
        }
    } else {
block_16:
        var_r0_2 = 0;
    }
    if (var_r0_2 != 0) {
        fn_801DF0C8((char *)arg0 + 0x30, arg1);
    }
}
