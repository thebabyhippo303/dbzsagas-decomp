/* AnimationTable__BindAnimation @ 0x80212548 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned char u8; typedef int s32;
void *Database__GetTypedObject(int,const char *,void *,int);
extern char lbl_80345C10[] __attribute__((section(".data")));
typedef struct {u8 pad[360];void *last;void *anims[1];} AnimTable;
void *AnimationTable__BindAnimation(void *arg0,AnimTable *arg1,s32 arg2) {
 void *obj=Database__GetTypedObject(256,lbl_80345C10,arg0,0);
 if(arg0==0 || obj==0) return 0;
 if(arg1!=0) { arg1->anims[arg2]=obj; arg1->last=obj; }
 return arg0;
}
