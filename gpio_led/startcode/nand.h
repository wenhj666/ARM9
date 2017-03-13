#ifndef __NAND_H
#define __NAND_H

#define NF_MECC_UnLock()    {rNFCONT&=~(1<<5);}
#define NF_MECC_Lock()      {rNFCONT|=(1<<5);}

#define NF_CMD(cmd)			{rNFCMD=cmd;}
#define NF_ADDR(addr)		{rNFADDR=addr;}	
#define NF_nFCE_L()			{rNFCONT&=~(1<<1);}
#define NF_nFCE_H()			{rNFCONT|=(1<<1);}
#define NF_RSTECC()			{rNFCONT|=(1<<4);}
#define NF_RDDATA() 		(rNFDATA)
#define NF_RDDATA8() 		((*(volatile unsigned char*)0x4E000010) )

#define NF_WRDATA(data) 	{rNFDATA=data;}

#define NF_WAITRB()    		{while(!(rNFSTAT&(1<<1)));} 
	   						 //wait tWB and check F_RNB pin.
// RnB Signal
#define NF_CLEAR_RB()    	{rNFSTAT |= (1<<2);}	// Have write '1' to clear this bit.
#define NF_DETECT_RB()    	{while(!(rNFSTAT&(1<<2)));}

#define TACLS		0	// 1-clk(0ns) 
#define TWRPH0		6	// 3-clk(25ns)
#define TWRPH1		0	// 1-clk(10ns)  //TACLS+TWRPH0+TWRPH1>=50ns

#define STATIC
#endif /*__NAND_H*/
