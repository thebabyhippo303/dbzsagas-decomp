/* CombatCue__ClearRegistry @ 0x801334EC (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Reg { void **items; int count; int cap; } Reg;
void CombatCue__FreeRegistryAllocation(void *, int);
void Mem__Delete(void *);
extern Reg lbl_803944BC __attribute__((section(".bss")));
void CombatCue__ClearRegistry(void) {
    int i;
    Reg *r;
    for (i = 0; i < lbl_803944BC.count; i++) {
        int off = i * 4;
        if (*(void **)((char *)lbl_803944BC.items + off) != 0) { CombatCue__FreeRegistryAllocation(*(void **)((char *)lbl_803944BC.items + off), 3); }
    }
    r = &lbl_803944BC;
    if (lbl_803944BC.items != 0) {
        Mem__Delete(lbl_803944BC.items);
        r->count = 0; r->cap = 0; lbl_803944BC.items = 0;
    }
}
