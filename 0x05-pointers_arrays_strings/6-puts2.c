#include "main.h"

/**
 * puts2 - prints alternating chars of a string, starting with
 * the first char, followed by a new line
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
