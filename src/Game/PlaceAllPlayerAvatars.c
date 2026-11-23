/* Game__PlaceAllPlayerAvatars @ 0x800221B0 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-match Game__PlaceAllPlayerAvatars @ 0x800221B0 (0x4C). */
typedef struct {
    char pad[696];
    unsigned player_count;
} GamePlayerCount;

extern void Game__PlacePlayerAvatar(GamePlayerCount *game, int player);

void Game__PlaceAllPlayerAvatars(GamePlayerCount *game) {
    unsigned player = 0;
    while (player < game->player_count) {
        Game__PlacePlayerAvatar(game, player);
        player++;
    }
}
