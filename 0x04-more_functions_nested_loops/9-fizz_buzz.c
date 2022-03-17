#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three, prints Fizz instead of the number
 * and for the multiples of five, prints Fizz and for multiples of
 * both, FizzBuzz.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 100; n++)
	{
		if (n % 5 == 0 && n % 3 == 0)
			printf("FizzBuzz ");
		else if (n % 5 == 0)
			if (n == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		else if (n % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", n);
	}
	printf("\n");

	return (0);
}
