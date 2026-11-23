/* MainMenu__AreAnyWidgetGroupsActive @ 0x80130B40 (size: 0xF8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

extern int fn_80260A5C(void *obj);

s32 MainMenu__AreAnyWidgetGroupsActive(void *menu) {
    s32 acc;

    acc = fn_80260A5C(*(void **)((char *)menu + 1188) + 148);
    acc = (acc != 0) | (fn_80260A5C(*(void **)((char *)menu + 1636) + 148) != 0);
    acc = (acc != 0) | (fn_80260A5C(*(void **)((char *)menu + 2084) + 148) != 0);
    acc = (acc != 0) | (fn_80260A5C(*(void **)((char *)menu + 2532) + 148) != 0);
    acc = (acc != 0) | (fn_80260A5C(*(void **)((char *)menu + 772) + 772) != 0);
    return acc;
}
