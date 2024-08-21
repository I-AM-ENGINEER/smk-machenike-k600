#include "kbdef.h"
#include "user_init.h"
#include "pwm.h"

void user_gpio_init();

void user_init()
{
    user_gpio_init();
}

void user_gpio_init()
{
    // configure driving capabilities
    DRVCON = 0x05; // allow P1 to be changed
    P1DRV  = 0x00; // 25mA

    DRVCON = 0x45; // allow P2 to be changed
    P2DRV  = 0x00; // 25mA

    DRVCON = 0x85; // allow P3 to be changed
    P3DRV  = 0x00; // 25mA

    DRVCON = 0xc5; // allow P5 to be changed
    P5DRV  = 0x00; // 25mA

    DRVCON = 0;

    P1CR = (uint8_t)(KB_C18_P1_2 | KB_C17_P1_3 | KB_C16_P1_4 | KB_C15_P1_5);
    P2CR = (uint8_t)(KB_C14_P2_0 | KB_C13_P2_1 | KB_C12_P2_2 | KB_C11_P2_3 | KB_C10_P2_4 | KB_C9_P2_5);
    P3CR = (uint8_t)(KB_C8_P3_0 | KB_C7_P3_1 | KB_C6_P3_2 | KB_C5_P3_3 | KB_C4_P3_4 | KB_C3_P3_5);
    P5CR = (uint8_t)(KB_C0_P5_0 | KB_C1_P5_1 | KB_C2_P5_2);

    P7PCR = (uint8_t)(KB_R0_P7_0 | KB_R2_P7_2 | KB_R3_P7_3 );
    P5PCR = (uint8_t)(KB_R4_P5_3 | KB_R5_P5_4);
}
