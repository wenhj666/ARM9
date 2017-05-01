#include "2440addr.h"

void Key_Init(void)
{
    rGPFCON &= ~(0x3 |(0x3 << 4));
    rGPFUP &= ~(0x1 |(0x1 << 2));
    rGPGCON &= ~((0x3 << 6)|(0x3 << 22));   
    rGPGUP &= ~((0x1 << 3)|(0x1 << 11));
}