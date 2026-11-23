/* Assert_SetCallback @ 0x8017E45C (size: 0x8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Assert_SetCallback @ 0x8017E45C (0x8). ProDG -O2. */
extern void *g_assert_callback;

void Assert_SetCallback(void *callback) {
	g_assert_callback = callback;
}
