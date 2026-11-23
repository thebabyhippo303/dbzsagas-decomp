/* Dende__AirlockActive @ 0x800449B8 (size: 0xF8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Actor { unsigned flags; char pad[132 - 4]; void *script; char pad2[448 - 136]; char name[1]; } Actor;
typedef struct Node { Actor *actor; char pad[16]; struct Node *next; } Node;
typedef struct List { char pad[20]; Node *head; } List;
typedef struct Mask { unsigned value; unsigned mask; } Mask;
typedef struct Lvl { char pad[4]; int idx; } Lvl;
typedef struct Game { char pad[568]; Lvl *lvl; } Game;
extern Mask lbl_803946A4 __attribute__((section(".data")));
extern List *lbl_803DCC98;
extern Game *lbl_803DC3C0;
extern char lbl_80311ED8[];
extern char lbl_80311EE8[];
extern char lbl_80311EF4[];
extern char lbl_80311F08[];
void fn_8023A97C(void *, int);
int String__CompareIgnoreCase(const char *, const char *);
void Script__SetIntVariable(void *, int, char *, int);

void Dende__AirlockActive(void) {
    if (lbl_803DC3C0->lvl->idx == 8) {
        Node *n = lbl_803DCC98->head;
        if (n != 0) {
            do {
                List *l;
                Actor *a = n->actor;
                fn_8023A97C(a->script, 0);
                if ((a->flags & lbl_803946A4.mask) == lbl_803946A4.value &&
                    String__CompareIgnoreCase(a->name, lbl_80311ED8) == 0) {
                    Script__SetIntVariable(a->script, 3, lbl_80311EE8, 1);
                    Script__SetIntVariable(a->script, 3, lbl_80311EF4, 0);
                    Script__SetIntVariable(a->script, 3, lbl_80311F08, 0);
                }
                l = lbl_803DCC98;
                if (n != 0) {
                    n = n->next;
                } else {
                    n = l->head;
                }
            } while (n != 0);
        }
    }
}
