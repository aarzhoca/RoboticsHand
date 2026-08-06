#include "scs0009_servo_driver.c"
#include "motion_control.c"
#include "command_interface.c"

char uart_getc(void);  // stub, implement with NuMaker UART HAL

int main(void) {
    scs_init();
    motion_init();
    cmd_init();

    motion_neutral_hand();

    while (1) {
        char c = uart_getc();
        cmd_process_char(c);
    }

    return 0;
}