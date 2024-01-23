//Calculating the sum without using the addtion operator

#include <stdio.h>

float add(int x, int y)
{
	return printf("%*c%*c", x, '\r', y, '\r');
}


int main()
{
	printf("Sum = %f", add(3, 4));
	return 0;
}
