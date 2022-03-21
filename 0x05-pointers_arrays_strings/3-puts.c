#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);

	_putchar('\n');
}
