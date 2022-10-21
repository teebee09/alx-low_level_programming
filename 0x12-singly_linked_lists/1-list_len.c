#include "lists.h"

/**
 * list_len - fncs that returns the number of elements in a linked list
 * @h: linked list
 * Return: return number of elements
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
