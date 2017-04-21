#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x, y, z;
	x = y = z = 0;
#if DEBUG == ON
	printf("%d, %d, %d", x, y, z);
#endif
	return 0;
}

void testFun(void)
{
	return 0;
}

void Fun1(void)
{
#if METER_TYPE == TI_METERING
	printf("hello world");
#endif	
	return 0;
}

void Fun2(void)
{
#if METER_TYPE == TI_METERING
	printf("hello world");
#endif		
	return 0;
}

void Fun3(void)
{
#if METER_TYPE == TI_METERING
	printf("hello world");
#endif		
	return 0;
}

void Fun4(void)
{
#if METER_TYPE == TI_METERING
	printf("hello world");
#endif		
	return 0;
}

void Fun5(void)
{
#if METER_TYPE == TI_METERING
	printf("hello world");
#endif		
	return 0;
}
