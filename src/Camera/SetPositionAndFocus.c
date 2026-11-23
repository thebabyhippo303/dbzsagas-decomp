/* Camera__SetPositionAndFocus @ 0x800CCFAC (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Camera__SetPositionAndFocus @ 0x800CCFAC (0x78). ProDG -O2. */
typedef struct {
    int x;
    int y;
    int z;
} CamVec;

typedef struct {
    CamVec position;
    CamVec focus;
    char pad[0x40 - 0x18];
    void *player;
} Camera;

void *Game__GetPlayerImpl(void *, int);
extern void *lbl_803DC3C0;

void Camera__SetPositionAndFocus(Camera *cam, CamVec *position, CamVec *focus) {
    cam->position = *position;
    cam->focus = *focus;
    if (cam->player == 0) {
        cam->player = Game__GetPlayerImpl(lbl_803DC3C0, 0);
    }
}
