#include <stdio.h>

//#if ( (sizeof(int) > 32) ? 1 : 0)
#if ( (sizeof(int) > 0X20) ? 1 : 0)
	#define CPU32_BIT 1
#else
	#define CPU32NI_BIT
#endif /*endof bitwidth define*/

void main(void)
{
#if CPU32_BIT
	printf("bits 32\n");
#else
	printf("^ @ ^\n");
#endif /*endof printf cpu bits*/
}

