/* Exploder__SerializeState @ 0x800EFA88 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef int M2C_UNK;

int Exploder__GetBaseStateSize(void);
int Exploder__GetStateSize(void *);
M2C_UNK fn_802B4FD4(void *, s32, s32);

void Exploder__SerializeState(void *arg0, s32 arg1, s32 arg2) {
    fn_802B4FD4(arg0, arg1 + Exploder__GetBaseStateSize(), arg2);
    Exploder__GetStateSize(arg0);
}
