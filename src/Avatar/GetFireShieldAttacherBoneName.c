/* Avatar__GetFireShieldAttacherBoneName @ 0x80095318 (size: 0x1B8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
extern char lbl_8036D0C4[] __attribute__((section(".data")));
extern char lbl_8036D07C[] __attribute__((section(".data")));
extern char lbl_8036CFF8[] __attribute__((section(".data")));
extern char lbl_8036CF38[] __attribute__((section(".data")));
extern char lbl_8036CDB8[] __attribute__((section(".data")));
extern char lbl_8036D304[] __attribute__((section(".data")));
extern char lbl_8036D0E8[] __attribute__((section(".data")));
extern char lbl_8036CE78[] __attribute__((section(".data")));
extern char lbl_8036D19C[] __attribute__((section(".data")));
extern char lbl_8036D250[] __attribute__((section(".data")));
extern char lbl_8036D520[] __attribute__((section(".data")));
extern char lbl_8036D538[] __attribute__((section(".data")));
extern char lbl_8036D7C0[] __attribute__((section(".data")));
extern char lbl_8036D874[] __attribute__((section(".data")));
extern char lbl_8036D3B8[] __attribute__((section(".data")));
extern char lbl_8036D46C[] __attribute__((section(".data")));
extern char lbl_8036DA90[] __attribute__((section(".data")));
extern char lbl_8036DB44[] __attribute__((section(".data")));
extern char lbl_8036DBF8[] __attribute__((section(".data")));
extern char lbl_8036DCB8[] __attribute__((section(".data")));

char *Avatar__GetFireShieldAttacherBoneName(char *self, s32 which) {
    s32 id;
    char *ret;
    switch (which) {
    case 0:
        id = *(s32 *)(*(char **)(self + 0x19D8) + 0xC);
        if (id == 0x32) {
            goto shield;
        }
        if (id == 0x33) {
            goto shield;
        }
        if (id == 0x34) {
shield:
            ret = lbl_8036D0C4;
            break;
        }
        if (*(s32 *)(self + 0x7E4) == 0) {
            ret = lbl_8036D07C;
            break;
        }
        ret = lbl_8036CFF8;
        break;
    case 2:
        ret = lbl_8036CF38;
        break;
    case 6:
        ret = lbl_8036CDB8;
        break;
    case 7:
        ret = lbl_8036D304;
        break;
    case 3:
        ret = lbl_8036D0E8;
        break;
    case 1:
        ret = lbl_8036CE78;
        break;
    case 4:
        ret = lbl_8036D19C;
        break;
    case 5:
        ret = lbl_8036D250;
        break;
    case 8:
        ret = lbl_8036D520;
        break;
    case 9:
        ret = lbl_8036D538;
        break;
    case 14:
        ret = lbl_8036D7C0;
        break;
    case 15:
        ret = lbl_8036D874;
        break;
    case 10:
    default:
        ret = lbl_8036D3B8;
        break;
    case 11:
        ret = lbl_8036D46C;
        break;
    case 12:
        ret = lbl_8036DA90;
        break;
    case 13:
        ret = lbl_8036DB44;
        break;
    case 16:
        ret = lbl_8036DBF8;
        break;
    case 17:
        ret = lbl_8036DCB8;
        break;
    }
    return ret;
}
