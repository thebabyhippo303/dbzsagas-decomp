/* Game__ConstructStaticInstance @ 0x800080DC (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void Game__ConstructOrDestroyStaticInstance(int mode, unsigned int flags);

void Game__ConstructStaticInstance(void) {
    Game__ConstructOrDestroyStaticInstance(1, 0xFFFF);
}
