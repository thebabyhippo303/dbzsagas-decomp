/* Avatar__SetWeaponShotDirToBone @ 0x80026488 (size: 0x26C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef int s32; typedef float f32;
typedef struct { f32 x, y, z; } Vec3;
typedef struct { Vec3 r[3]; } Mat3;
typedef struct { char pad[0x44]; Mat3 m; } Obj;

char * Script__PopString(void *, s32, void *);
s32 Actor__FindBoneIdByName(void *, char *, u8 *);
Obj * Script__PopInt(void *, void *);
void fn_80184430(char *);
void fn_801DCFB4(Obj *, s32, Mat3 *);
void Avatar__SetWeaponLaunchParameters(void *, Vec3 *, f32);
extern f32 lbl_8031143C __attribute__((section(".data")));

void Avatar__SetWeaponShotDirToBone(void *arg0, void *arg1) {
    s32 flag;
    Mat3 bone;
    Vec3 tmp;
    u8 id;
    Mat3 copy, prod;
    Obj *obj;
    char *name;

    obj = Script__PopInt(arg0, arg1);
    name = Script__PopString(arg0, (s32) arg1, &flag);
    Actor__FindBoneIdByName(obj, name, &id);
    fn_801DCFB4(obj, id, &bone);
    prod.r[0].x = bone.r[0].x * obj->m.r[0].x + bone.r[0].y * obj->m.r[1].x + bone.r[0].z * obj->m.r[2].x;
    prod.r[0].y = bone.r[0].x * obj->m.r[0].y + bone.r[0].y * obj->m.r[1].y + bone.r[0].z * obj->m.r[2].y;
    prod.r[0].z = bone.r[0].x * obj->m.r[0].z + bone.r[0].y * obj->m.r[1].z + bone.r[0].z * obj->m.r[2].z;
    prod.r[1].x = bone.r[1].x * obj->m.r[0].x + bone.r[1].y * obj->m.r[1].x + bone.r[1].z * obj->m.r[2].x;
    prod.r[1].y = bone.r[1].x * obj->m.r[0].y + bone.r[1].y * obj->m.r[1].y + bone.r[1].z * obj->m.r[2].y;
    prod.r[1].z = bone.r[1].x * obj->m.r[0].z + bone.r[1].y * obj->m.r[1].z + bone.r[1].z * obj->m.r[2].z;
    prod.r[2].x = bone.r[2].x * obj->m.r[0].x + bone.r[2].y * obj->m.r[1].x + bone.r[2].z * obj->m.r[2].x;
    prod.r[2].y = bone.r[2].x * obj->m.r[0].y + bone.r[2].y * obj->m.r[1].y + bone.r[2].z * obj->m.r[2].y;
    prod.r[2].z = bone.r[2].x * obj->m.r[0].z + bone.r[2].y * obj->m.r[1].z + bone.r[2].z * obj->m.r[2].z;
    copy = prod;
    prod.r[0] = copy.r[2];
    tmp = prod.r[0];
    prod.r[0] = tmp;
    Avatar__SetWeaponLaunchParameters((char *) obj + 0x15A0, &prod.r[0], lbl_8031143C);
    if (flag != 0 && name != 0) {
        fn_80184430(name);
    }
}
