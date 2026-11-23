/* AI__UpdateAimSequence @ 0x8006A1F8 (size: 0x1A0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define M2C_FIELD(e,t,o) (*(t)((char*)(e)+(o)))
typedef struct { f32 f[8]; } AimInfo; typedef struct { s32 x,y,z; } Vec3i;
void AI__SetState(void*,s32); s32 AI__HasPrimaryTimerElapsed(void*,f32); void AI__ComputeTargetingInfo(void*,void*); void AI__UpdateAimEmitter(void*,void*); void AI__UpdateAimingIndicator(void*,void*,s32);
extern f32 lbl_8031EB80 __attribute__((section(".data"))); extern f32 lbl_8031EB84 __attribute__((section(".data"))); extern f32 lbl_803A35C0 __attribute__((section(".data")));
void AI__UpdateAimSequence(void *self) {
 AimInfo info; Vec3i pos; f32 dist; void *target;
 AI__ComputeTargetingInfo(&info,self); dist=M2C_FIELD(self,f32*,0xe8);
 switch(M2C_FIELD(self,s32*,0x7c)) {
 case 0: AI__SetState(self,1); if(M2C_FIELD(self,s32*,0x78)!=0) M2C_FIELD(self,s32*,0x380)=45; return;
 case 1:
 target=M2C_FIELD(self,void**,0x390); pos=*(Vec3i*)((char*)target+0x38); AI__UpdateAimingIndicator(self,&pos,0);
 if((!(dist>=info.f[6]) && M2C_FIELD(self,s32*,0xc8)!=7) || (!(dist*dist>=info.f[6]) && M2C_FIELD(self,s32*,0xc8)==7)) {
 M2C_FIELD(self,s32*,0x380)=1; M2C_FIELD(self,f32*,0xdc)=lbl_803A35C0; AI__SetState(self,2); return; }
 M2C_FIELD(self,s32*,0x380)=45; AI__SetState(self,3); return;
 case 2:
 target=M2C_FIELD(self,void**,0x390); pos=*(Vec3i*)((char*)target+0x38); AI__UpdateAimEmitter(self,&pos);
 if(AI__HasPrimaryTimerElapsed(self,lbl_8031EB80)!=0 || !(info.f[6]>=lbl_8031EB84)) AI__SetState(self,3);
 return;
 }
}