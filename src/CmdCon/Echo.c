/* CmdCon__Echo @ 0x8018BDE8 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: CmdCon__Echo @ 0x8018BDE8 (0x2C). ProDG -O2. */
extern int fn_80189A54(void *context, ...);

int CmdCon__Echo(void *context, void *unused, const char *message) {
    fn_80189A54(context, message);
    return 1;
}
