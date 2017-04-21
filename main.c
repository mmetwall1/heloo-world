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
	return;
}

void Fun1(void)
{
	return;
}

void Fun2(void)
{
	return;
}

void Fun3(void)
{
	return;
}

void Fun4(void)
{
	return;
}

void Fun5(void)
{
	return;
}
