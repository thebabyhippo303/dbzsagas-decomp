/* Render__ReleaseObjectHandle @ 0x80281858 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Render__ReleaseObjectHandle @ 0x80281858 (0x44). ProDG -O2. */
extern void Render__DestroyObject(void *owner, void *obj);

int Render__ReleaseObjectHandle(void *owner, void **handle) {
	void *obj;
	obj = *handle;
	if (obj != 0) {
		Render__DestroyObject(owner, obj);
		*handle = 0;
	}
	return 1;
}
