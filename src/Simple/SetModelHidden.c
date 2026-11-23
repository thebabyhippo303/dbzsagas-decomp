/* Simple__SetModelHidden @ 0x802CB790 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Simple__SetModelHidden @ 0x802CB790 (0x4C). ProDG -O2. */
typedef struct {
	char pad[0x3FC];
	void *model;
} SimpleObj;

extern void *lbl_renderSystem;
extern void Render__HideObject(void *render, void *model);
extern void Render__ShowObject(void *render, void *model);

void Simple__SetModelHidden(SimpleObj *self, int hidden) {
	if (self->model != 0) {
		if (hidden != 0)
			Render__HideObject(lbl_renderSystem, self->model);
		else
			Render__ShowObject(lbl_renderSystem, self->model);
	}
}
