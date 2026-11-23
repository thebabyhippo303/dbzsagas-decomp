/* _tr_init @ 0x8025A188 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void tr_static_init(void);
extern void init_block(void *state);

extern char lbl_80375714[] __attribute__((section(".data")));
extern char lbl_80375728[] __attribute__((section(".data")));
extern char lbl_8037573C[] __attribute__((section(".data")));

typedef struct {
    char pad[0x8C];
    char dyn_ltree[0x980 - 0x8C];
    char dyn_dtree[0xA74 - 0x980];
    char bl_tree[0xB10 - 0xA74];
    void *l_dyn;
    int l_max;
    void *l_stat;
    void *d_dyn;
    int d_max;
    void *d_stat;
    void *bl_dyn;
    int bl_max;
    void *bl_stat;
    char mid[0x16AC - 0xB34];
    int last_eob_len;
    unsigned short bi_buf;
    short pad_bi;
    int bi_valid;
} DeflateState;

void _tr_init(DeflateState *s) {
    tr_static_init();
    s->l_dyn = (char *)s + 0x8C;
    s->l_stat = lbl_80375714;
    s->d_dyn = (char *)s + 0x980;
    s->d_stat = lbl_80375728;
    s->bl_dyn = (char *)s + 0xA74;
    s->bl_stat = lbl_8037573C;
    s->bi_buf = 0;
    s->bi_valid = 0;
    s->last_eob_len = 8;
    init_block(s);
}
