#include <stdio.h>

/**
 * main - prints hexadecimal base 0123456789abcdef, using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char alpha;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
