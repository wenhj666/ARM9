#include "led.h"
#include "key.h"

int Main(void)
{
    Led_Init();
    Key_Init();
    
    while(1)
    {
        if((rGPFDAT & 0x1) == 0)
        {
            LedOne_ON;
        }
        if((rGPFDAT & (0x1 << 2)) == 0)
        {
            LedTwo_ON;
        }
        if((rGPGDAT & (0x1 << 3)) == 0)
        {
            LedThree_ON;
        }
        if((rGPGDAT & (0x1 << 11)) == 0)
        {
            LedOne_OFF;
            LedTwo_OFF;
            LedThree_OFF;
        }
    }
    return 0;
}