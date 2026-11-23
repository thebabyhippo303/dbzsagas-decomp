/* Preload__ResolveFile @ 0x8012E9E0 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Preload__ResolveFile @ 0x8012E9E0 (0x40). ProDG -O2. */
extern int g_preload_guard;
extern void *File__Resolve(const char *path, void *buffer, int size);

void *Preload__ResolveFile(const char *path) {
	if (g_preload_guard != 0)
		return 0;
	return File__Resolve(path, 0, 0);
}
