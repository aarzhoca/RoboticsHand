#include <stdint.h>
#include <stdbool.h>

typedef struct {
    uint8_t id;
    int16_t position;
    int16_t speed;
    int16_t load;
    uint16_t voltage;
    uint16_t temperature;
    bool error;
} scs_servo_status_t;

void scs_init(void);
int scs_set_position(uint8_t id, int16_t angle);
int scs_get_status(uint8_t id, scs_servo_status_t *status);
int scs_set_limits(uint8_t id, int16_t min_angle, int16_t max_angle);