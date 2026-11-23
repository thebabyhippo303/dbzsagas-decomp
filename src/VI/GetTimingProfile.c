/* VI__GetTimingProfile @ 0x80175520 (size: 0xA0, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
extern char lbl_803722C8[];

char *VI__GetTimingProfile(unsigned int index) {
    switch (index) {
    case 0:
        return lbl_803722C8 + 68;
    case 1:
        return lbl_803722C8 + 106;
    case 2:
        return lbl_803722C8 + 296;
    case 3:
        return lbl_803722C8 + 334;
    case 4:
        return lbl_803722C8 + 144;
    case 5:
        return lbl_803722C8 + 182;
    case 6:
        return 0;
    case 7:
        return 0;
    case 8:
        return lbl_803722C8 + 220;
    case 9:
        return lbl_803722C8 + 258;
    case 10:
        return 0;
    case 11:
        return 0;
    case 12:
        return 0;
    case 13:
        return 0;
    case 14:
        return 0;
    case 15:
        return 0;
    case 16:
        return lbl_803722C8 + 144;
    case 17:
        return lbl_803722C8 + 182;
    case 18:
        return 0;
    case 19:
        return 0;
    case 20:
        return lbl_803722C8 + 68;
    case 21:
        return lbl_803722C8 + 106;
    case 22:
        return 0;
    case 23:
        return 0;
    case 24:
        return lbl_803722C8 + 372;
    case 25:
        return 0;
    case 26:
        return lbl_803722C8 + 410;
    default:
        return lbl_803722C8 + 144;
    }
}
