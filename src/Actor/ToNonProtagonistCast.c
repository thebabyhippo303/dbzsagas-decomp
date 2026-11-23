/* Actor__ToNonProtagonistCast @ 0x802ACB58 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched cast switches. ProDG -O2.
   Actor__ToProtagonistCast    @ 0x802ACB30 (0x28)
   Actor__ToNonProtagonistCast @ 0x802ACB58 (0x28)
*/
void fn_802AC1E8(void *a, void *b, int c);
void fn_801F348C(void);
void fn_801F34DC(void);

void Actor__ToProtagonistCast(void *a, void *b) {
    fn_802AC1E8(a, b, 0);
    fn_801F348C();
}

void Actor__ToNonProtagonistCast(void *a, void *b) {
    fn_802AC1E8(a, b, 0);
    fn_801F34DC();
}
