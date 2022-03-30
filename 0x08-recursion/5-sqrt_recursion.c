#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input integer
 * Return: -1 if no natural square root, otherwise return square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - returns _sqrt_recursion
 * @n: first integer
 * @i: second integer
 * Return: sqrt
 */
int _sqrt(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((i * i) > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
