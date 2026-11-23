/* Avatar__CanGoSaiyan @ 0x80032E84 (size: 0x188, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
typedef int s32;

#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

void *Script__PopInt(void *, void *);
void Script__PushInt(void *, void *, int);

extern f32 lbl_80311858 __attribute__((section(".data")));
extern f32 lbl_8031185C __attribute__((section(".data")));

void Avatar__CanGoSaiyan(void *arg0, void *arg1) {
    void *p;
    int result;
    int flag;

    p = Script__PopInt(arg0, arg1);
    result = 0;
    if (M2C_FIELD(p, s32 *, 0x2D0) == 1 &&
        M2C_FIELD(p, f32 *, 0x29C) / M2C_FIELD(p, f32 *, 0x2A0) == lbl_80311858 &&
        M2C_FIELD(p, f32 *, 0x294) / M2C_FIELD(p, f32 *, 0x298) == lbl_80311858) {
        flag = 0;
        if (M2C_FIELD(M2C_FIELD(p, void **, 0x159C), s32 *, 0xCF0) != 0) {
            flag = 1;
        }
        if (flag != 0) {
            result = 2;
        } else {
            goto block_7;
        }
    } else {
block_7:
        if (M2C_FIELD(p, s32 *, 0x2D0) == 0) {
            if (M2C_FIELD(p, f32 *, 0x29C) / M2C_FIELD(p, f32 *, 0x2A0) == lbl_8031185C &&
                M2C_FIELD(p, f32 *, 0x294) / M2C_FIELD(p, f32 *, 0x298) == lbl_80311858) {
                flag = 0;
                if (M2C_FIELD(M2C_FIELD(p, void **, 0x159C), s32 *, 0xCF0) != 0) {
                    flag = 1;
                }
                if (flag == 0) {
                    goto block_13;
                }
                result = 1;
            } else {
block_13:
                if (M2C_FIELD(p, s32 *, 0x2D0) == 0 &&
                    M2C_FIELD(p, f32 *, 0x29C) / M2C_FIELD(p, f32 *, 0x2A0) == lbl_80311858 &&
                    M2C_FIELD(p, f32 *, 0x294) / M2C_FIELD(p, f32 *, 0x298) == lbl_80311858) {
                    void *inv = M2C_FIELD(p, void **, 0x159C) + 0x24;
                    flag = 0;
                    if (M2C_FIELD(inv, s32 *, 0xCA8) != 0) {
                        flag = 1;
                    }
                    if (flag == 0) {
                        int f2 = 0;
                        if (M2C_FIELD(inv, s32 *, 0xFC0) != 0) {
                            f2 = 1;
                        }
                        if (f2 != 0) {
                            result = 1;
                        }
                    } else {
                        result = 1;
                    }
                }
            }
        }
    }
    Script__PushInt(arg0, arg1, result);
}
