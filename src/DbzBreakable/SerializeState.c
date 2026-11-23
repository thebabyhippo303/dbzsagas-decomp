/* DbzBreakable__SerializeState @ 0x800EA288 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef int M2C_UNK;

int DbzBreakable__GetBaseStateSize(void);
int DbzBreakable__GetStateSize(void *);
M2C_UNK fn_802B4FD4(void *, s32, s32);

void DbzBreakable__SerializeState(void *arg0, s32 arg1, s32 arg2) {
    fn_802B4FD4(arg0, arg1 + DbzBreakable__GetBaseStateSize(), arg2);
    DbzBreakable__GetStateSize(arg0);
}
