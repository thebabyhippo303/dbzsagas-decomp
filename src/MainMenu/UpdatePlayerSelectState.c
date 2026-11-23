/* MainMenu__UpdatePlayerSelectState @ 0x80010C1C (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

extern void MainMenu__BeginPlayerSelectAnimation(void *);
extern void MainMenu__UpdatePlayerSelectConfirmAnimation(void *);
extern void MainMenu__ResetPlayerSelectWidgets(void *);
extern void fn_8026BF14(void *);

void MainMenu__UpdatePlayerSelectState(void *menu) {
    s32 state = *(s32 *)((char *)menu + 0xD98);
    s32 above = 5;

    if (state == 3) {
        goto case3;
    }
    if (state > 3) {
        goto above3;
    }
    if (state == 0) {
        goto case0;
    }
    goto join;
above3:
    if (state == above) {
        goto case5;
    }
    if (state < above) {
        goto case4;
    }
    goto join;
case0:
    MainMenu__BeginPlayerSelectAnimation(menu);
    goto join;
case3:
    *(s32 *)((char *)menu + 0xDC4) = 1;
    MainMenu__UpdatePlayerSelectConfirmAnimation(menu);
    goto join;
case4:
    *(s32 *)((char *)menu + 0xDC4) = 1;
    goto join;
case5:
    MainMenu__ResetPlayerSelectWidgets(menu);
join:
    fn_8026BF14(menu);
}
