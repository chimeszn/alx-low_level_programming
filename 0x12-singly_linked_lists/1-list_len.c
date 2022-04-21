#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to linked list
 * Return: num of elements in pointer h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
