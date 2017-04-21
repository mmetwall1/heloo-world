#include <stdio.h>
#include <stdlib.h>

#define DEBUG	ON

int main(void)
{
	int x, y, z;
	x = y = z = 0;
#if DEBUG == ON
	printf("%d, %d, %d", x, y, z);
#endif
	return 0;
}

void APPM_Init(void)
{
	int temp;
	return;
}
