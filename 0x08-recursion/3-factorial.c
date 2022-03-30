#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: input integer
 * Return: -1 if n lower than 0, else return factorial
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

