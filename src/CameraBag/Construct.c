/* CameraBag__Construct @ 0x800238C0 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
extern void *fn_80184348(s32);

void *CameraBag__Construct(void *self) {
    register s32 zero = 0;
    void *list = (char *)self + 8;
    register s32 eight = 8;
    void *array;

    M2C_FIELD(self, s32 *, 0) = zero;
    M2C_FIELD(self, s32 *, 4) = zero;
    array = fn_80184348(0x20);
    M2C_FIELD(self, void **, 8) = array;
    *(volatile s32 *)((char *)list + 0x14) = zero;
    *(volatile s32 *)((char *)list + 0xC) = eight;
    *(volatile s32 *)((char *)list + 4) = zero;
    *(volatile s32 *)((char *)list + 8) = eight;
    *(volatile s32 *)((char *)list + 0x10) = zero;
    return self;
}
