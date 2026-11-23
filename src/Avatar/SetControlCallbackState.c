/* Avatar__SetControlCallbackState @ 0x8008CADC (size: 0x14, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__SetControlCallbackState @ 0x8008CADC (0x14). ProDG -O2. */
typedef struct {
    void *callback;
} AvatarControlCallbackState;

typedef struct {
    char pad[0x720];
    AvatarControlCallbackState *callbackState;
} Avatar;

void Avatar__SetControlCallbackState(Avatar *self, void *callback) {
    if (self->callbackState)
        self->callbackState->callback = callback;
}
