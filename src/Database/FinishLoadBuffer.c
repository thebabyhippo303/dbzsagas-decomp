/* Database__FinishLoadBuffer @ 0x8020647C (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Database__FinishLoadBuffer @ 0x8020647C. ProDG -O2. */
typedef struct DbFinishBuf {
	int flags;
	char pad[0x14 - 4];
	void *buf;
	void *end;
} DbFinishBuf;

extern DbFinishBuf lbl_803ADBE4 __attribute__((section(".data")));
extern void memFree(void *ptr);
extern void MemHeap__Shrink(void *ptr, int size);

int Database__FinishLoadBuffer(int mode, void *keep) {
	if (keep != 0) {
		lbl_803ADBE4.buf = 0;
		return 1;
	}
	if (mode == 1) {
		if (lbl_803ADBE4.buf != 0) {
			memFree(lbl_803ADBE4.buf);
		}
		lbl_803ADBE4.buf = keep;
		return 1;
	}
	if ((lbl_803ADBE4.flags & 8) == 0) {
		void *buf = lbl_803ADBE4.buf;

		MemHeap__Shrink(buf, (char *)lbl_803ADBE4.end - (char *)buf);
	}
	return 1;
}
