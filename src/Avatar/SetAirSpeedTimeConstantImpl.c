/* Avatar__SetAirSpeedTimeConstantImpl @ 0x800B6AC8 (size: 0x8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__SetAirSpeedTimeConstantImpl @ 0x800B6AC8 (0x8). */
typedef struct {
    char pad[0xD4];
    float air_speed_time_constant;
} AvatarAirSpeedTimeConstant;

void Avatar__SetAirSpeedTimeConstantImpl(AvatarAirSpeedTimeConstant *avatar, float value) {
    avatar->air_speed_time_constant = value;
}
