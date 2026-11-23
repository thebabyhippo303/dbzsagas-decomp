/* AnimeFaceZoomIn__OnActivate @ 0x800BA044 (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    unsigned int x;
    unsigned int y;
    unsigned int z;
} Vector3;

extern void Camera__DeactivatePlayerControls(void *, Vector3, Vector3);

void AnimeFaceZoomIn__OnActivate(void *self, Vector3 *start, Vector3 *end) {
    Camera__DeactivatePlayerControls(self, *start, *end);
    *(Vector3 *)((char *)self + 0x4C) = *start;
    *(Vector3 *)((char *)self + 0x58) = *end;
}
