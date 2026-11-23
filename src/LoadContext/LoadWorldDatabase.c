/* LoadContext__LoadWorldDatabase @ 0x8025216C (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Database__LoadMainDblFromContext @ 0x8025216C (0x34). ProDG -O2. */
extern int Database__LoadMainDbl(void *self, int flags, void *arg, void *path);

int Database__LoadMainDblFromContext(void *self, void *arg, void *path) {
	if (path == 0)
		path = *(void **)((char *)self + 12);
	return Database__LoadMainDbl(self, 0, arg, path);
}
