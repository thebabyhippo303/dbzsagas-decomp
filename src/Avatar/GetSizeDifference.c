/* Avatar__GetSizeDifference @ 0x80098FAC (size: 0x18, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__GetSizeDifference @ 0x80098FAC (0x18). ProDG -O2. */
typedef struct {
    char pad[0x14];
    float size;
} AvatarSize;

typedef struct {
    char pad[0x19D8];
    AvatarSize *shape;
} AvatarWithShape;

float Avatar__GetSizeDifference(AvatarWithShape *a, AvatarWithShape *b) {
    return a->shape->size - b->shape->size;
}
