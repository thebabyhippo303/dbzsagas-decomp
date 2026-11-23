/* MissionUI__InitializeFailureAndRetryScreen @ 0x8011C1A8 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
/* MissionUI__InitializeFailureAndRetryScreen @ 0x8011C1A8 */

extern float lbl_803A35C4 __attribute__((section(".data")));
extern int strlen(const char *text);
extern void MissionUI__InitializeFailureScreenWidgets(void *self);
extern void MissionUI__InitializeFailureNotice(void *self);
extern void MissionUI__InitializeFailureMessageText(void *self, const char *text);
extern void MissionUI__InitializeRetryPrompt(void *self);

typedef struct FailureRetryVTable {
    char pad[0x1E0];
    short thisAdjustment;
    short pad_1E2;
    void (*show)(void *self);
} FailureRetryVTable;

typedef struct FailureRetryScreen {
    char pad[0x19C];
    FailureRetryVTable *vtable;
} FailureRetryScreen;

void MissionUI__InitializeFailureAndRetryScreen(FailureRetryScreen *self, const char *text, float offset) {
    FailureRetryVTable *vtable;

    MissionUI__InitializeFailureScreenWidgets(self);
    MissionUI__InitializeFailureNotice(self);
    if (strlen(text) != 0) {
        MissionUI__InitializeFailureMessageText(self, text);
    }
    MissionUI__InitializeRetryPrompt(self);
    vtable = self->vtable;
    vtable->show((char *)self + vtable->thisAdjustment);
    *(float *)((char *)self + 0xAE90) = lbl_803A35C4 + offset;
}
