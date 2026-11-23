/* Actor__GetStateHandler @ 0x800579A8 (size: 0x14, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef void (*ActorStateHandler)(void);

extern ActorStateHandler lbl_803625E4[] __attribute__((section(".data")));

ActorStateHandler Actor__GetStateHandler(unsigned int state_id) {
    return lbl_803625E4[state_id];
}
