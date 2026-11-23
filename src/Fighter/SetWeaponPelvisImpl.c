/* Fighter__SetWeaponPelvisImpl @ 0x800F0254 (size: 0xC, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched leaf accessors. ProDG -O2. */
typedef struct {
    char pad[0x2b8];
    void *lock_actor;
} LockActor;

void Avatar__RemoveGuisesImpl(void *actor, int flag) {
    (void)actor;
    (void)flag;
}

void Avatar__SetLockActor(LockActor *actor, void *lock) {
    actor->lock_actor = lock;
}

typedef struct {
    char pad[0x50];
    int at_end;
} CurveCam;

int CameraCurve__AtEndImpl(CurveCam *cam) { return cam->at_end; }

typedef struct {
    char pad[0x170];
    float distance;
} FollowDist;

float FollowCamera__GetDistance(FollowDist *cam) { return cam->distance; }

typedef struct {
    char pad[0x174];
    float height;
} FollowHeight;

float FollowCamera__GetHeight(FollowHeight *cam) { return cam->height; }

typedef struct {
    char pad[0x134];
    float height;
} FollowHeightSet;

void FollowCamera__SetHeight(FollowHeightSet *cam, float height) {
    cam->height = height;
}

typedef struct {
    char pad[0x178];
    float focus;
} FollowFocus;

float FollowCamera__GetFocusHeight(FollowFocus *cam) { return cam->focus; }

typedef struct {
    char pad[0x15c];
    float focus;
} FollowFocusSet;

void FollowCamera__SetFocusHeight(FollowFocusSet *cam, float focus) {
    cam->focus = focus;
}

int PathCam__AtEndImpl(void *cam) {
    (void)cam;
    return 0;
}

typedef struct {
    char pad[0x88];
    float transition;
} TransCam;

void Camera__SetTransitionTimeImpl(TransCam *cam, float t) { cam->transition = t; }

typedef struct {
    char pad[0x10];
    int count;
} PlayerCfg;
typedef struct {
    char pad[0x238];
    PlayerCfg *cfg;
} PlayerGame;

int Game__GetConfiguredPlayerCount(PlayerGame *game) { return game->cfg->count; }

typedef struct {
    char pad[0x760];
    int attach;
} WeaponSlot;

void Fighter__SetWeaponMouthImpl(WeaponSlot *w) { w->attach = 4; }
void Fighter__SetWeaponPelvisImpl(WeaponSlot *w) { w->attach = 8; }
void Fighter__SetWeaponHeadImpl(WeaponSlot *w) { w->attach = 7; }

extern int lbl_803DC6AC;
void PlayerIndicator__ShowImpl(void) { lbl_803DC6AC = 1; }

typedef struct {
    char pad[0x8c];
    float alpha;
} AlphaInst;
typedef struct {
    char pad[0x84];
    AlphaInst *inst;
} AlphaActor;

void Actor__SetAlphaImpl(AlphaActor *actor, float alpha) {
    actor->inst->alpha = alpha;
}

typedef struct {
    char pad[0x2b0];
    void *players[1];
} PlayerArr;

void *Game__GetPlayerImpl(PlayerArr *game, int index) {
    return game->players[index];
}

extern float lbl_803DE520;
typedef struct {
    char pad[0x108];
    float heading;
} HeadingCam;

float Camera__GetHeading(HeadingCam *cam) {
    return cam->heading * lbl_803DE520;
}

typedef struct {
    char pad[2];
    unsigned short flags;
} InstFlags;

void Instance__ShowImpl(InstFlags *inst) { inst->flags &= (unsigned short)~1u; }

typedef struct {
    char pad[0x28];
    int *vars;
} ScriptThread;

int *ScriptThread__GetVariableSlot(ScriptThread *thread, int index) {
    return thread->vars + index;
}

int FullScreenEffect__IsBusy(int *state) { return *state != 0; }

void Fighter__SetWeaponHandImpl(WeaponSlot *w, int flag) {
    if (flag)
        w->attach = 1;
    else
        w->attach = flag;
}

typedef struct {
    char pad[0x540];
    int cleared;
    int pad544;
    int maybe548;
    char pad54c[8];
    int flags;
} TriggerBox;

void TriggerBox__ResetImpl(TriggerBox *box) {
    int flags = box->flags;
    box->cleared = 0;
    if (flags & 0x40)
        box->maybe548 = 0;
}
