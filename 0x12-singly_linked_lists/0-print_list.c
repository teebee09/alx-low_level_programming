#include "lists.h"

/**
 * print_list - fncs that prints the element of list_t list
 * @h: linked list
 * Return: return the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t index = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (null)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		index++;
	}
	return (index);
}
