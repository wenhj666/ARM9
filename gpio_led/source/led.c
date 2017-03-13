#include "2440addr.h"

void Led_Init(void)
{
    rGPFCON &= ~((0x3 << 8)|(0x3 << 10)|(0x3 << 12));
    rGPFCON |= (0x1 << 8)|(0x1 << 10)|(0x1 << 12);
    rGPFUP &= ~((0x1 << 8)|(0x1 << 10)|(0x1 << 12));
    rGPFDAT |= (0x1 << 8)|(0x1 << 10)|(0x1 << 12);
}