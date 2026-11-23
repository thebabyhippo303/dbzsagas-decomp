/* lm_init @ 0x80256570 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned short ush;
typedef unsigned long ulg;
typedef unsigned int uInt;

typedef struct config_s {
    ush good_length;
    ush max_lazy;
    ush nice_length;
    ush max_chain;
    void *func;
} config;

typedef struct deflate_state {
    char pad0[36];
    uInt w_size;
    char pad1[52 - 40];
    ulg window_size;
    char pad2[60 - 56];
    ush *head;
    uInt ins_h;
    uInt hash_size;
    char pad3[84 - 72];
    long block_start;
    uInt match_length;
    char pad4[96 - 92];
    int match_available;
    uInt strstart;
    char pad5[108 - 104];
    uInt lookahead;
    uInt prev_length;
    uInt max_chain_length;
    uInt max_lazy_match;
    int level;
    char pad6[132 - 128];
    uInt good_match;
    int nice_match;
} deflate_state;

extern const config configuration_table[] __attribute__((section(".data")));
extern void *memset(void *, int, unsigned int);

void lm_init(deflate_state *s) {
    s->window_size = (ulg)2L * s->w_size;
    s->head[s->hash_size - 1] = 0;
    memset((unsigned char *)s->head, 0, (unsigned)(s->hash_size - 1) * sizeof(*s->head));
    s->max_lazy_match = configuration_table[s->level].max_lazy;
    s->good_match = configuration_table[s->level].good_length;
    s->nice_match = configuration_table[s->level].nice_length;
    s->max_chain_length = configuration_table[s->level].max_chain;
    s->strstart = 0;
    s->block_start = 0L;
    s->lookahead = 0;
    s->match_length = s->prev_length = 2;
    s->match_available = 0;
    s->ins_h = 0;
}
