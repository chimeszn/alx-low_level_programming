#include "lists.h"

/**
 * print_list - prints all elements of a linked list
 * @h: pointer to the list_t list to print
 * Return: number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}

	return (i);
}
