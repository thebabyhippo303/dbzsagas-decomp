/* Camera__SetPositionAndTarget @ 0x800B9470 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned int u32;
typedef struct { u32 x, y, z; } W3;
typedef struct { W3 position; W3 target; } Cam;
void Camera__SetPositionAndTarget(Cam *self, W3 *position, W3 *target) {
    self->position = *position;
    self->target = *target;
}
