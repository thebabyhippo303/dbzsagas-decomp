/* inflate_trees_fixed @ 0x80259FD4 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: inflate_trees_fixed @ 0x80259FD4 (0x30). ProDG -O2. */
extern unsigned int fixed_bl;
extern unsigned int fixed_bd;
extern char fixed_tl[];
extern char fixed_td[];

int inflate_trees_fixed(
    unsigned int *bl, unsigned int *bd, void **tl, void **td, void *z) {
    *bl = fixed_bl;
    *bd = fixed_bd;
    *tl = fixed_tl;
    *td = fixed_td;
    return 0;
}
