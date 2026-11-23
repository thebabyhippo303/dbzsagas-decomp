/* DebugTextPager__AddPage @ 0x8026F8E4 (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef short s16;
typedef unsigned int u32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void *Mem__New(u32);
void *DebugTextPage__Construct(void *);

int DebugTextPager__AddPage(void *pager, void *arg) {
    void *page = DebugTextPage__Construct(Mem__New(4440));
    void *vt;
    int count;
    if (page == NULL) {
        count = 0;
    } else {
        M2C_FIELD(pager, int *, 5700)++;
        {
            void *vt1 = M2C_FIELD(page, void **, 16);
            M2C_FIELD(vt1, void (**)(void *, int, void *), 156)((char *)page + M2C_FIELD(vt1, s16 *, 152), 0, arg);
        }
        vt = M2C_FIELD(page, void **, 16);
        M2C_FIELD(vt, void (**)(void *, int), 172)((char *)page + M2C_FIELD(vt, s16 *, 168), M2C_FIELD(pager, int *, 5700));
        vt = M2C_FIELD(page, void **, 16);
        M2C_FIELD(vt, void (**)(void *, int), 36)((char *)page + M2C_FIELD(vt, s16 *, 32), M2C_FIELD(pager, int *, 5692));
        M2C_FIELD(pager, void **, 5688) = page;
        count = M2C_FIELD(pager, int *, 5700);
    }
    return count;
}
