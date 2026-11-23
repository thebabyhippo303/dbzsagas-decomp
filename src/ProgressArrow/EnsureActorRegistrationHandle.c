/* ProgressArrow__EnsureActorRegistrationHandle @ 0x8011F668 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: ProgressArrow__EnsureActorRegistrationHandle @ 0x8011F668 (0x40). ProDG -O2. */
typedef struct {
	char pad[0x90];
	void *registration_handle;
} ProgressArrowInner;

typedef struct {
	char pad[0x84];
	ProgressArrowInner *inner;
} ProgressArrow;

extern void *fn_802475D4(void);
extern void *fn_80247D3C(void *owner);

void ProgressArrow__EnsureActorRegistrationHandle(ProgressArrow *self) {
	ProgressArrowInner *inner = self->inner;
	if (inner->registration_handle == 0)
		inner->registration_handle = fn_80247D3C(fn_802475D4());
}
