#include "main.h"
#include <stdio.h>

/**
 * _sqrt - calculates the natural square root
 * @n: number to calculate the square root
 * @i: iterate number
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	int sqrt = i * i;

	if (sqrt > n )
		return (-1);

	if (sqrt == n)
	return (i);

	return (_sqrt(n, i + 1));
}
