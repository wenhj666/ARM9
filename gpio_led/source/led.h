#ifndef __LED_H
#define __LED_H

#include "2440addr.h"

#define LedOne_ON {rGPFDAT &= ~(1 << 4);}
#define LedOne_OFF {rGPFDAT |= (1 << 4);}
#define LedTwo_ON {rGPFDAT &= ~(1 << 5);}
#define LedTwo_OFF {rGPFDAT |= (1 << 5);}
#define LedThree_ON {rGPFDAT &= ~(1 << 6);}
#define LedThree_OFF {rGPFDAT |= (1 << 6);}

extern void Led_Init(void);

#endif
