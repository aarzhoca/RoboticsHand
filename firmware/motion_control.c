#include <stdint.h>
#include <stdbool.h>

#define NUM_DOF 8

typedef struct {
    int16_t angle[NUM_DOF];
} hand_pose_t;

void motion_init(void);
void motion_set_pose(const hand_pose_t *pose);
void motion_open_hand(void);
void motion_close_hand(void);
void motion_neutral_hand(void);
void motion_interpolate(const hand_pose_t *from,
                        const hand_pose_t *to,
                        uint16_t duration_ms);