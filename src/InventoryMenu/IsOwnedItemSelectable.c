/* InventoryMenu__IsOwnedItemSelectable @ 0x80104290 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct { int owned; char pad[32]; } Slot;
typedef struct { char pad[0x24]; Slot slots[1]; } InvA;
typedef struct { char pad[0x1128]; unsigned int *flags; } InvB;
typedef struct { char pad[0x159C]; InvA *inv; } Player;
void *Game__GetPlayerImpl(void *, int);
extern void *lbl_803DC3A0;
int InventoryMenu__IsOwnedItemSelectable(void *unused, int idx) {
    Player *p = Game__GetPlayerImpl(lbl_803DC3A0, 0);
    int owned = 0;
    int r;
    if (p->inv->slots[idx].owned != 0) {
        owned = 1;
    }
    if (owned != 0) {
        p = Game__GetPlayerImpl(lbl_803DC3A0, 0);
        r = 1;
        if (((InvB *)p->inv)->flags[idx * 6] & 0x20) {
            goto no;
        }
        return r;
    }
no:
    return 0;
}
