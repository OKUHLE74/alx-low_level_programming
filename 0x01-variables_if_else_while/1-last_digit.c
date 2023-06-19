#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -  program will assign a random number to the variable
 * Return: Always 0  (Success)
 *
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ( n > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n last);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if ((last < 6) !=0)
	{
		printf("%d is less than 6 and is not 0\n", n last);
	}
	return (0);
}
